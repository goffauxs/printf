/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 13:00:03 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/28 12:49:38 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_s(char *str, t_flags *f)
{
	int		len;
	int		char_count;

	len = ft_strlen(str);
	if (f->minus == 1)
		ft_putstr_fd(str, 1);
	char_count = ft_pad(f, len);
	if (f->minus == 0)
		ft_putstr_fd(str, 1);
	return (char_count + len);
}
