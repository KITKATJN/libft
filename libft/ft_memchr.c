/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:13:33 by cmarguer          #+#    #+#             */
/*   Updated: 2020/10/29 16:51:34 by cmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char		*str;
	size_t					i;
	char					cchar;

	i = 0;
	cchar = c;
	str = s;
	while (i < n)
	{
		if (str[i] == cchar)
		{
			return ((void*)(str + i));
		}
		i++;
	}
	return (0);
}
