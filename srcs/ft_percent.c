/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:24:39 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/04 10:41:46 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_percent(t_flags *f)
{
	int	char_count;

	f->percent = 1;
	if (f->minus)
		ft_putchar_fd('%', 1);
	char_count = ft_pad(f, 1);
	if (!f->minus)
		ft_putchar_fd('%', 1);
	return (char_count + 1);
}
