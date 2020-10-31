/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:09:01 by cmarguer          #+#    #+#             */
/*   Updated: 2020/10/31 12:29:41 by cmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchar1(const void *s, int c, size_t n)
{
	unsigned const char		*str;
	char					cchar;

	cchar = c;
	n = n - 1;
	str = s;
	while (n > 0)
	{
		if (str[n] == cchar)
		{
			return ((void*)(str + n));
		}
		n--;
	}
	return (0);
}

int		ft_stringl(const char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (c == '\0')
	{
		while (s[i] != '\0')
		{
			i++;
		}
		return ((char*)(s + i));
	}
	return (ft_memchar1(s,c, ft_stringl(s)));
}
