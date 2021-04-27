/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:19:57 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/26 16:05:03 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flags(const char *format, t_flags *f)
{
	if (*format == '-')
		f->minus = 1;
	else if (*format == '0')
		f->zero = 1;
	else
		return (0);
	return (1);
}