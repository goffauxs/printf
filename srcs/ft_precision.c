/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:02:38 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/21 13:38:33 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_precision(const char *format, t_flags *f, va_list args)
{
	int	i;

	i = 0;
	if (*format == '.')
	{
		if (*(format + 1) == '*')
		{
			f->prec = va_arg(args, int);
			return (2);
		}
		if (ft_isdigit(*(format + 1)))
		{
			f->prec = ft_atoi(format + 1);
			while (ft_isdigit(format[i + 1]))
				i++;
			return (i + 1);
		}
		else
		{
			f->prec = 0;
			return (1);
		}
	}
	return (0);
}
