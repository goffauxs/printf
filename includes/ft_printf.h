/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:41:22 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/04 10:47:52 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/includes/libft.h"
# include <stdarg.h>

typedef struct s_flags
{
	int			minus;
	int			zero;
	int			hash;
	int			space;
	int			plus;
	int			prec;
	int			width;
	int			percent;
}				t_flags;

int		ft_printf(const char *format, ...);
int		ft_flags(const char *format, t_flags *f);
int		ft_pad(t_flags *f, int size);
void	ft_pad_prec(char *str, t_flags *f, int size);
void	ft_put_sign(t_flags *f, int n);
int		ft_width(const char *format, t_flags *f, va_list args);
int		ft_precision(const char *format, t_flags *f, va_list args);
int		ft_convert(const char *format, t_flags *f, va_list args);
int		ft_c(char c, t_flags *f);
int		ft_s(char *str, t_flags *f);
int		ft_d(int n, t_flags *f);
int		ft_u(unsigned int n, t_flags *f);
int		ft_x(va_list args, t_flags *f, const char conv_spec);
int		ft_percent(t_flags *f);

#endif