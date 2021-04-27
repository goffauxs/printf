/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 13:18:40 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/27 17:52:19 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(va_list args, t_flags *f)
{
	char					*str;
	unsigned long long int	n;
	int						char_count;
	int						len;

	n = va_arg(args, unsigned long long);
	str = ft_itoa_hex(n);
	len = ft_strlen(str);
	if (f->minus == 1)
		ft_putstr_fd(str, 1);
	char_count = ft_pad(f, len);
	if (f->minus == 0)
		ft_putstr_fd(str, 1);
	return (char_count + len);
}