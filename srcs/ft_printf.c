/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:34:25 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/28 12:52:10 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_init_flags(t_flags *f)
{
	f->minus = 0;
	f->zero = 0;
	f->precision = 0;
	f->width = 0;
}

static int	ft_parse_format_string(const char *format, va_list args)
{
	int		char_count;
	int		i;
	t_flags	f;

	i = 0;
	char_count = 0;
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			ft_init_flags(&f);
			format++;
			format += ft_flags(format, &f);
			format += ft_width(format, &f, args);
			format += ft_precision(format, &f, args);
			char_count += ft_convert(format++, &f, args);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			char_count++;
			format++;
		}
	}
	return (char_count);
}

int	ft_printf(const char *format, ...)
{
	int		char_count;
	va_list	args;

	char_count = 0;
	va_start(args, format);
	char_count = ft_parse_format_string(format, args);
	va_end(args);
	return (char_count);
}
