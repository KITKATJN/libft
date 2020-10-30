/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:50:36 by cmarguer          #+#    #+#             */
/*   Updated: 2020/10/29 17:05:33 by cmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchar(const void *s, int c, size_t n)
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

int		ft_strl(const char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
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
	return (ft_memchr(s,c, ft_strl(s)));
}
