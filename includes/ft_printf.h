/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:41:22 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/28 12:48:39 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

typedef struct s_flags
{
	int			minus;
	int			zero;
	size_t		precision;
	size_t		width;
}				t_flags;

int	ft_printf(const char *format, ...);
int	ft_flags(const char *format, t_flags *f);
int	ft_pad(t_flags *f, int size);
int	ft_width(const char *format, t_flags *f, va_list args);
int	ft_precision(const char *format, t_flags *f, va_list args);
int	ft_convert(const char *format, t_flags *f, va_list args);
int	ft_c(char c, t_flags *f);
int	ft_s(char *str, t_flags *f);
int	ft_d(int n, t_flags *f);
int	ft_u(unsigned int n, t_flags *f);
int	ft_x(va_list args, t_flags *f, const char conversion_specifier);

#endif