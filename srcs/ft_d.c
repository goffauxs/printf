/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 10:32:52 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/21 11:37:15 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_d(int n, t_flags *f)
{
	int		char_count;
	char	*str;
	int		nd;
	int		len;

	if (n == 0 && f->prec == 0)
		str = ft_strdup("");
	else
		str = ft_itoa(n);
	nd = ft_strlen(str) - (n < 0);
	len = f->prec * (f->prec > nd) + nd * (nd >= f->prec)
		+ (n < 0 || f->plus || f->sp);
	if ((n < 0 || f->plus || f->sp) && ((f->zero && f->prec < 0) || f->minus))
		ft_put_sign(f, n);
	if (f->minus)
		ft_pad_prec((str + (n < 0)), f, nd);
	char_count = ft_pad(f, len);
	if (!f->minus)
	{
		if (!f->zero || f->prec >= 0)
			ft_put_sign(f, n);
		ft_pad_prec((str + (n < 0)), f, nd);
	}
	free(str);
	return (char_count + len);
}
