/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:57:52 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/03 13:23:15 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u(unsigned int n, t_flags *f)
{
	int		char_count;
	char	*str;
	int		num_d;
	int		len;

	if (n == 0 && f->prec == 0)
		str = "";
	else
		str = ft_uitoa(n);
	num_d = ft_strlen(str);
	len = f->prec * (f->prec > num_d) + num_d * (num_d >= f->prec);
	if (f->minus)
		ft_pad_prec(str, f, num_d);
	char_count = ft_pad(f, len);
	if (!f->minus)
		ft_pad_prec(str, f, num_d);
	if (!(n == 0 && f->prec == 0))
		free(str);
	return (char_count + len);
}
