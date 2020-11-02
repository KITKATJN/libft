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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t 	i;
	size_t 	j;

	i = 0;
	j = 0;
	if (needle[0] != 0)
	{
		while (i < len)
		{
			while (haystack[i] != '\0' && needle[j] != '\0' 
			&& needle[j] == haystack[i + j] && i + j < len)
				j++;
			if (needle[j] == '\0')
				return ((char*)&haystack[i]);
			j = 0;
			i++;	
		}
		return (0);
	}
	return ((char*)(haystack));
}
