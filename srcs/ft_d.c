/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 10:32:52 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/30 12:28:56 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_d(int n, t_flags *f)
{
	int		char_count;
	char	*str;
	char	*neg_str;
	int		len;

	if (n == 0 && f->precision == 0)
		return (0);
	neg_str = ft_itoa(n);
	len = ft_strlen(neg_str);
	str = ft_strtrim(neg_str, "-");
	if (n < 0 && f->zero)
		ft_putchar_fd('-', 1);
	if (f->minus)
		ft_putstr_fd(str, 1);
	char_count = ft_pad(f, len, 'd');
	if (f->zero && !f->minus)
		ft_putstr_fd(str, 1);
	else if (!f->minus)
		ft_putstr_fd(neg_str, 1);
	free(neg_str);
	free(str);
	return (char_count + len);
}
