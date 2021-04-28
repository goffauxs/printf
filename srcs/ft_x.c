/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:02:44 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/28 13:00:56 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(va_list args, t_flags *f, const char conversion_specifier)
{
	char				*str;
	int					char_count;
	int					len;

	if (conversion_specifier == 'p')
		str = ft_itoa_hex((unsigned long long)va_arg(args, void *));
	else
		str = ft_itoa_hex(va_arg(args, unsigned long long));
	if (conversion_specifier == 'X')
		str = ft_strmap(str, &ft_toupper);
	len = ft_strlen(str);
	if (f->minus)
	{
		if (conversion_specifier == 'p') ft_putstr_fd("0x", 1);
		ft_putstr_fd(str, 1);
	}
	char_count = ft_pad(f, len);
	if (!f->minus)
	{
		if (conversion_specifier == 'p') ft_putstr_fd("0x", 1);
		ft_putstr_fd(str, 1);
	}
	if (conversion_specifier == 'p')
		return (char_count + len + 2);
	return (char_count + len);
}