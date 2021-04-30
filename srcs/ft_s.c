/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 13:00:03 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/30 11:32:42 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_s(char *str, t_flags *f)
{
	int		len;
	int		char_count;
	int		i;

	if (!str)
		str = "(null)";
	i = -1;
	len = ft_strlen(str);
	if (f->precision >= 0 && f->precision < len)
		len = f->precision;
	if (f->minus)
		while (++i < len)
			ft_putchar_fd(str[i], 1);
	char_count = ft_pad(f, len, 's');
	if (!f->minus)
		while (++i < len)
			ft_putchar_fd(str[i], 1);
	return (char_count + len);
}
