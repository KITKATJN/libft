/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:10:49 by cmarguer          #+#    #+#             */
/*   Updated: 2020/10/29 12:29:35 by cmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str;
	const char	*sor;
	size_t		i;

	str = dst;
	sor = src;
	i = 0;
	while (i < n)
	{
		str[i] = sor[i];
		i++;
	}
	return (dst);
}
