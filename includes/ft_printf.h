/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:41:22 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/27 12:52:40 by sgoffaux         ###   ########.fr       */
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

#endif