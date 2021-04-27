/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:02:38 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/27 12:59:03 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_precision(const char *format, t_flags *f, va_list args)
{
	int	precision;
	int	i;
	
	i = 0;
	precision = 0;
	if (*format == '*')
	{
		f->precision = va_arg(args, int);
		return (1);
	}
	if (ft_isdigit(*format))
		precision = ft_atoi(*format);
	if (precision > 0)
		f->precision = precision;
	while (precision != 0)
	{
		precision /= 10;
		i++;
	}
	return (i);
}