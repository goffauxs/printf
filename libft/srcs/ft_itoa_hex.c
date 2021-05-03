/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoffaux <sgoffaux@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 10:51:28 by sgoffaux          #+#    #+#             */
/*   Updated: 2021/05/03 14:10:58 by sgoffaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(unsigned long long n)
{
	int	i;

	i = 0;
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

char	*ft_itoa_hex(unsigned long long n)
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
		if (n % 16 > 9)
			ret[i++] = n % 16 - 10 + 'a';
		else
			ret[i++] = (n % 16) + '0';
		n /= 16;
	}
	ret[i] = '\0';
	ft_reverse_str(ret);
	return (ret);
}
