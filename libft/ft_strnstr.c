/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:31:07 by cmarguer          #+#    #+#             */
/*   Updated: 2020/10/31 13:44:25 by cmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlenstrn(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t 	i;
	size_t 	j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					j = 0;
					break ;
				}
				j++;
			}
			if (j == ft_strlenstrn((char*)needle))
				return ((char*)(haystack + i));
		}
		i++;
	}
		return (0);
}
