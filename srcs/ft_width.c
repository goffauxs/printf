/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:48:59 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/23 17:25:39 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_width(const char *format, t_flags *f, va_list args)
{
	int	width;
	int	i;
	
	i = 0;
	width = 0;
	if (*format == '*')
	{
		f->width = va_arg(args, int);
		return (1);
	}
	if (ft_isdigit(*format))
		width = ft_atoi(*format);
	if (width > 0)
		f->width = width;
	while (width != 0)
	{
		width /= 10;
		i++;
	}
	return (i);
}
