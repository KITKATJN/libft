/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:35:01 by cmarguer          #+#    #+#             */
/*   Updated: 2020/10/31 14:58:36 by cmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dest;
	const char	*sour;
	size_t		i;

	dest = dst;
	sour = src;
	i = 0;
	while (i < n)
	{
		dest[i] = sour[i];
		if (dest[i] == c)
		{
			return (&dest[i + 1]);
		}
		i++;
	}
	return (0);
}
