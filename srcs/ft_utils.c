/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:59:18 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/03 15:58:56 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pad_prec(char *str, t_flags *f, int size)
{
	int	width;

	width = f->prec;
	while (width-- - size > 0)
		ft_putchar_fd('0', 1);
	ft_putstr_fd(str, 1);
}

int	ft_pad(t_flags *f, int size)
{
	int	width;
	int	char_count;

	char_count = 0;
	width = f->width;
	while (width - size > 0)
	{
		if (f->zero && !f->minus && (f->prec < 0 || f->percent))
			ft_putchar_fd('0', 1);
		else
			ft_putchar_fd(' ', 1);
		width--;
		char_count++;
	}
	return (char_count);
}
