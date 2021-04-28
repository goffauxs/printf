/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:02:44 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/28 16:07:07 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(va_list args, t_flags *f, const char conv_spec)
{
	char				*str;
	int					char_count;
	int					len;

	if (conv_spec == 'p')
		str = ft_itoa_hex((unsigned long long)va_arg(args, void *));
	else
		str = ft_itoa_hex(va_arg(args, unsigned long long));
	if (conv_spec == 'p' || f->hash)
		str = ft_strjoin("0x", str);
	if (conv_spec == 'X')
		str = ft_strmap(str, &ft_toupper);
	len = ft_strlen(str);
	if (f->minus)
		ft_putstr_fd(str, 1);
	char_count = ft_pad(f, len);
	if (!f->minus)
		ft_putstr_fd(str, 1);
	return (char_count + len);
}
