/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:58:45 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/28 10:29:16 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(const char *format, va_list args, t_flags *f)
{
	if (*format == 'c')
		return (ft_c(args, f));
	else if (*format == 's')
		return (ft_s(args, f));
	else if (*format == 'p')
		return (ft_p(args, f));
	else if (*format == 'd' || *format == 'i')
		return (ft_d(args, f));
	else if (*format == 'u')
		return (ft_d_u(args, f));
	else if (*format == 'x' || *format == 'X')
		return (ft_x(args, f));
	else if (*format == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (1);
}
