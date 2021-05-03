/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:14:36 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/03 11:30:34 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_c(char c, t_flags *f)
{
	int		char_count;

	if (f->minus)
		ft_putchar_fd(c, 1);
	char_count = ft_pad(f, 1);
	if (!f->minus)
		ft_putchar_fd(c, 1);
	return (char_count + 1);
}
