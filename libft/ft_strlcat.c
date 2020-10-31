/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:09:32 by cmarguer          #+#    #+#             */
/*   Updated: 2020/10/31 12:28:00 by cmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = size;
	while (dst[i] != '\0')
		i++;
	while (j > 0)
	{
		dst[i + size - j] = src[size - j];
		j--;
	}
	dst[i + size] = '\0';
	return (i + size);
}
