/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:59:18 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/30 12:41:16 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pad(t_flags *f, int size, const char conv)
{
	int	char_count;
	int	width;

	char_count = 0;
	if (!f->width && (f->precision > 0 && conv != 's'))
		width = f->precision;
	else
		width = f->width;
	while (width - size > 0)
	{
		if (conv != 's' && (f->zero || f->precision > 0))
			ft_putchar_fd('0', 1);
		else
			ft_putchar_fd(' ', 1);
		width--;
		char_count++;
	}
	return (char_count);
}
