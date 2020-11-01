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

char	*ft_strrchr(const char *s, int c)
{
	char 	*str;
	size_t	i;
	
	str = (char*)s;
	if (s[0] == '\0')
		return (0);
	if (c == 0)
	{
		return (&str[ft_strlen((char*)s)]);
	}
	else
	{
		i = ft_strlen(str);
		while (i > 0)
		{
			if (s[i] != c)
				i--;
			else
				return(&str[i]);
		}
	}
	return (ft_memchr(s,c, ft_strlen((char*)s)));
}
