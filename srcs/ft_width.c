/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:48:59 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/03 15:04:32 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_width(const char *format, t_flags *f, va_list args)
{
	int	i;

	i = 0;
	if (*format == '*')
	{
		f->width = va_arg(args, int);
		if (f->width < 0)
		{
			f->minus = 1;
			f->width = -f->width;
		}
		return (1);
	}
	if (ft_isdigit(*format))
		f->width = ft_atoi(format);
	while (ft_isdigit(format[i]))
		i++;
	return (i);
}
