/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:53:53 by cmarguer          #+#    #+#             */
/*   Updated: 2020/10/29 16:41:53 by cmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*sour;
	size_t		i;
	
	i = 0;
	sour = src;
	dest = dst;
	while ((i < len) && (sour[i] != '\0'))
	{
		dest[i] = sour[i];
		i++;
	}
	dest[i] = '\0';
	return (dst);
}
