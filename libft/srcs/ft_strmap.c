/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:02:17 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/03 13:33:22 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strmap(char *s, int (*f)(int))
{
	if (!s || !f)
		return ;
	while (*s != '\0')
	{
		*s = (*f)(*s);
		s++;
	}
}
