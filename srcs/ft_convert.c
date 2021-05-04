/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:58:45 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/04 10:48:08 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(const char *format, t_flags *f, va_list args)
{
	if (*format == 'c')
		return (ft_c(va_arg(args, int), f));
	else if (*format == 's')
		return (ft_s(va_arg(args, char *), f));
	else if (*format == 'd' || *format == 'i')
		return (ft_d(va_arg(args, int), f));
	else if (*format == 'u')
		return (ft_u(va_arg(args, unsigned int), f));
	else if (*format == 'x' || *format == 'X' || *format == 'p')
		return (ft_x(args, f, *format));
	else if (*format == '%')
		return (ft_percent(f));
	return (0);
}
