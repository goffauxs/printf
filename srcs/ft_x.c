/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:02:44 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/03 16:11:04 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_convert_hex(size_t n, const char conv_spec, t_flags *f)
{
	char				*str;
	char				*hex;

	if (n == 0 && f->prec == 0)
	{
		if (conv_spec == 'p')
			str = "0x";
		else
			str = "";
	}
	else
	{
		if (conv_spec == 'p')
			hex = ft_itoa_hex(n);
		else
			hex = ft_itoa_hex(n);
		if (conv_spec == 'p' || f->hash)
			str = ft_strjoin("0x", hex);
		else
			str = ft_strdup(hex);
		free(hex);
		if (conv_spec == 'X')
			ft_strmap(str, &ft_toupper);
	}
	return (str);
}

int	ft_x(va_list args, t_flags *f, const char conv_spec)
{
	char	*str;
	int		char_count;
	int		len;
	int		num_d;
	size_t	n;

	if (conv_spec == 'p')
		n = (unsigned long long)va_arg(args, void *);
	else
		n = va_arg(args, unsigned int);
	str = ft_convert_hex(n, conv_spec, f);
	num_d = ft_strlen(str);
	len = f->prec * (f->prec > num_d) + num_d * (num_d >= f->prec);
	if (f->minus)
		ft_pad_prec(str, f, num_d);
	char_count = ft_pad(f, len);
	if (!f->minus)
		ft_pad_prec(str, f, num_d);
	if (*str && ft_strncmp(str, "0x", 3))
		free(str);
	return (char_count + len);
}
