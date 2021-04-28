/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:59:18 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/28 15:55:01 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pad(t_flags *f, int size)
{
	int	char_count;
	int	width;

	char_count = 0;
	if (!f->width && f->precision > 0)
		width = f->precision;
	else
		width = f->width;
	while (width - size > 0)
	{
		if (f->zero || (!f->width && f->precision > 0))
			ft_putchar_fd('0', 1);
		else
			ft_putchar_fd(' ', 1);
		width--;
		char_count++;
	}
	return (char_count);
}
