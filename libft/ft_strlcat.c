/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:09:32 by cmarguer          #+#    #+#             */
/*   Updated: 2020/10/28 18:45:12 by cmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlcat(char *dst, const char *src, int size)
{
	int i;
	int j;

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
