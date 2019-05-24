/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:14:32 by rothomps          #+#    #+#             */
/*   Updated: 2018/11/25 14:02:55 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*sr;
	char			*ds;
	size_t			i;

	sr = (char *)src;
	ds = (char *)dst;
	i = -1;
	while (++i < n)
	{
		ds[i] = sr[i];
		if ((unsigned char)sr[i] == (unsigned char)c)
			return ((char *)(dst + ++i));
	}
	return (NULL);
}
