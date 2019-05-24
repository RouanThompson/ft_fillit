/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 13:49:38 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/29 22:35:13 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		size;
	size_t		dlen;

	d = dest;
	s = src;
	size = n;
	while (size-- != 0 && *d != '\0')
		d++;
	dlen = d - dest;
	size = n - dlen;
	if (size == 0)
		return ((dlen + ft_strlen(s)));
	while (*s != '\0')
	{
		if (size != 1)
		{
			*d++ = *s;
			size--;
		}
		s++;
	}
	*d = '\0';
	return ((dlen + (s - src)));
}
