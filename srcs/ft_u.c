/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:57:52 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/30 10:40:03 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u(unsigned int n, t_flags *f)
{
	int		char_count;
	char	*str;
	int		len;

	str = ft_uitoa(n);
	len = ft_strlen(str);
	if (f->minus)
		ft_putstr_fd(str, 1);
	char_count = ft_pad(f, len, 'u');
	if (!f->minus)
		ft_putstr_fd(str, 1);
	free(str);
	return (char_count + len);
}
