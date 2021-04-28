/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 10:32:52 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/28 12:45:42 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_d(int n, t_flags *f)
{
	int		char_count;
	char	*str;
	char	*neg_str;
	int		len;

	neg_str = ft_itoa(n);
	len = ft_strlen(neg_str);
	str = ft_strtrim(neg_str, "-");
	if (f->minus)
		ft_putstr_fd(neg_str, 1);
	if (n < 0 && f->zero)
		ft_putchar_fd('-', 1);
	char_count = ft_pad(f, len);
	if (f->zero)
		ft_putstr_fd(str, 1);
	else
		ft_putstr_fd(neg_str, 1);
	free(neg_str);
	free(str);
	return (char_count + len);
}