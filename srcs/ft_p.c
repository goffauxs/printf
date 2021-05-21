/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:07:06 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/21 11:47:39 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(unsigned long n, t_flags *f)
{
	char	*str;
	int		char_count;
	int		len;
	int		num_d;
	char	*hex;

	hex = ft_itoa_hex(n);
	str = ft_strjoin("0x", hex);
	free(hex);
	num_d = ft_strlen(str);
	len = f->prec * (f->prec > num_d) + num_d * (num_d >= f->prec);
	if (f->minus)
		ft_putstr_fd(str, 1);
	char_count = ft_pad(f, len);
	if (!f->minus)
		ft_putstr_fd(str, 1);
	free(str);
	return (char_count + len);
}
