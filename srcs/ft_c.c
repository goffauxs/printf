/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:14:36 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/27 13:16:16 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_c(va_list args, t_flags *f)
{
	int		char_count;
	char	c;

	c = va_arg(args, char);
	if (f->minus == 1)
		ft_putchar_fd(c, 1);
	char_count = ft_pad(f, 1);
	if (f->minus == 0)
		ft_putchar_fd(c, 1);
	return (char_count + 1);
}
