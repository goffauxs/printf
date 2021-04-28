/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 11:03:25 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/04/28 11:08:10 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_reverse_str(char *str)
{
	int		begin;
	int		end;
	char	temp;

	begin = 0;
	end = ft_strlen(str) - 1;
	while (begin < end)
	{
		temp = str[begin];
		str[begin] = str[end];
		str[end] = temp;
		begin++;
		end--;
	}
}

char	*ft_uitoa(unsigned int n)
{
	char			*ret;
	int				i;

	i = 0;
	ret = malloc(sizeof(*ret) * (ft_getlen(n) + 1));
	if (!ret)
		return (NULL);
	if (n == 0)
		ret[i++] = '0';
	while (n != 0)
	{
		ret[i++] = (n % 10) + '0';
		n /= 10;
	}
	ret[i] = '\0';
	ft_reverse_str(ret);
	return (ret);
}
