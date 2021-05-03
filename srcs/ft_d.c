/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 10:32:52 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/03 16:37:22 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_d(int n, t_flags *f)
{
	int		char_count;
	char	*str;
	int		num_d;
	int		len;

	if (n == 0 && f->prec == 0)
		str = "";
	else
		str = ft_itoa(n);
	num_d = ft_strlen(str) - (n < 0);
	len = f->prec * (f->prec > num_d) + num_d * (num_d >= f->prec) + (n < 0);
	if (n < 0 && ((f->zero && f->prec < 0) || f->minus))
		ft_putchar_fd('-', 1);
	if (f->minus)
		ft_pad_prec((str + (n < 0)), f, num_d);
	char_count = ft_pad(f, len);
	if (!f->minus)
	{
		ft_put_sign(f, n);
		ft_pad_prec((str + (n < 0)), f, num_d);
	}
	if (!(n == 0 && f->prec == 0))
		free(str);
	return (char_count + len);
}
