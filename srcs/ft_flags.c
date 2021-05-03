/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:19:57 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/03 16:22:55 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flags(const char *format, t_flags *f)
{
	if (*format == '0')
		f->zero = 1;
	else if (*format == '-')
		f->minus = 1;
	else if (*format == ' ')
		f->space = 1;
	else
		return (0);
	return (1 + ft_flags((format + 1), f));
}
