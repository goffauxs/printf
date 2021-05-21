/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:02:44 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/21 11:46:23 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(unsigned int n, t_flags *f, const char conv_spec)
{
	int		char_count;
	int		len;
	int		num_d;
	char	*hex;

	hex = ft_itoa_hex(n);
	if (conv_spec == 'X')
		ft_strmap(hex, &ft_toupper);
	num_d = ft_strlen(hex);
	len = f->prec * (f->prec > num_d) + num_d * (num_d >= f->prec);
	if (f->prec == 0 && n == 0)
		len = 0;
	if (f->minus && !(f->prec == 0 && n == 0))
		ft_pad_prec(hex, f, num_d);
	char_count = ft_pad(f, len);
	if (!f->minus && !(f->prec == 0 && n == 0))
		ft_pad_prec(hex, f, num_d);
	free(hex);
	return (char_count + len);
}
