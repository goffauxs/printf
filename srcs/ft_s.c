/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 13:00:03 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/28 15:39:37 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_s(char *str, t_flags *f)
{
	int		len;
	int		char_count;
	int		i;

	i = -1;
	if (f->precision >= 0)
		len = f->precision;
	else
		len = ft_strlen(str);
	if (f->minus)
		while (++i < len)
			ft_putchar_fd(str[i], 1);
	char_count = ft_pad(f, len);
	if (!f->minus)
		while (++i < len)
			ft_putchar_fd(str[i], 1);
	return (char_count + len);
}
