/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epimenta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 13:07:36 by epimenta          #+#    #+#             */
/*   Updated: 2017/08/29 13:07:38 by epimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	l;
	int		i;

	l = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == l)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] != l)
		return (NULL);
	else
		return ((char *)&s[i]);
}
