/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:02:38 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/30 15:41:29 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_num_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_precision(const char *format, t_flags *f, va_list args)
{
	if (*format == '.')
	{
		format++;
		if (*format == '*')
		{
			f->prec = va_arg(args, int);
			return (2);
		}
		if (ft_isdigit(*format))
		{
			f->prec = ft_atoi(format);
			return (ft_get_num_digits(f->prec) + 1);
		}
		else
		{
			f->prec = 0;
			return (1);
		}
	}
	return (0);
}
