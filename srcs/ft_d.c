/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 10:32:52 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/30 16:42:03 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	ft_pad_prec(char *str, t_flags *f, int size)
{
	int	width;

	width = f->prec;
	while (width-- - size > 0)
		ft_putchar_fd('0', 1);
	ft_putstr_fd(str, 1);
}

int	ft_d(int n, t_flags *f)
{
	int		char_count;
	char	*str;
	int		num_d;
	int		len;

	if (n == 0 && f->prec == 0)
		return (0);
	str = ft_itoa(n);
	num_d = ft_strlen(str) - (n < 0);
	len = f->prec * (f->prec > num_d) + num_d * (num_d >= f->prec) + (n < 0);
	if (n < 0 && (f->zero || f->minus))
		ft_putchar_fd('-', 1);
	if (f->minus)
		ft_pad_prec((str + (n < 0)), f, num_d);
	char_count = ft_pad(f, len, 'd');
	if (!f->minus)
    {
		if (n < 0 && !f->zero)
			ft_putchar_fd('-', 1);
        ft_pad_prec((str + (n < 0)), f, num_d);
    }
	free(str);
	return (char_count + len);
}
