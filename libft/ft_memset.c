/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 13:01:04 by epimenta          #+#    #+#             */
/*   Updated: 2017/08/29 13:01:07 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned char	l;
	size_t			i;

	str = (char *)b;
	l = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = l;
		i++;
	}
	return (b);
}
