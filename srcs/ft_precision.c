/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:02:38 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/28 16:15:38 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_get_num_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
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
		if (*(format + 1) == '*')
		{
			f->precision = va_arg(args, int);
			return (1);
		}
		if (ft_isdigit(*(format + 1)))
		{
			f->precision = ft_atoi((format + 1));
			return (ft_get_num_digits(f->precision) + 1);
		}
		else
		{
			f->precision = 0;
			return (1);
		}
	}
	return (0);
}
