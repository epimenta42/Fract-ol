/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 13:00:56 by epimenta          #+#    #+#             */
/*   Updated: 2017/08/29 13:00:59 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s1;
	char const	*s2;
	size_t		i;

	i = -1;
	s1 = (char *)dst;
	s2 = (char const *)src;
	if (s2 < s1)
		while ((int)(--len) >= 0)
			*(s1 + len) = *(s2 + len);
	else
		while (++i < len)
			*(s1 + i) = *(s2 + i);
	return (dst);
}
