/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 13:49:11 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/30 14:26:39 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char *)s;
	c = (unsigned char)c;
	while (n--)
	{
		if (!(*tmp == c))
			tmp++;
		else if (*tmp == c)
			return (tmp);
	}
	return (NULL);
}
