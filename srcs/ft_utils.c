/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:59:18 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/30 16:38:57 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_pad_def(t_flags *f, int size)
{
	int	width;
	int	i;

	i = 0;
	width = f->width;
	while (width - size > 0)
	{
		if (f->zero)
			ft_putchar_fd('0', 1);
		else
			ft_putchar_fd(' ', 1);
		width--;
		i++;
	}
	return (i);
}

int	ft_pad(t_flags *f, int size, const char conv)
{
	int	char_count;

	if (conv == 's')
		char_count = ft_pad_def(f, size);
	else
		char_count = ft_pad_def(f, size);
	return (char_count);
}
