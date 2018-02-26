/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 12:59:52 by epimenta          #+#    #+#             */
/*   Updated: 2017/08/29 12:59:53 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	unsigned char	i;
	size_t			j;

	str = (const char *)s;
	i = (unsigned char)c;
	j = 0;
	while (j < n)
	{
		if ((unsigned char)str[j] == i)
			return ((void *)&s[j]);
		j++;
	}
	return (NULL);
}
