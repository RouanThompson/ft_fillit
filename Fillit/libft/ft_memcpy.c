/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:00:37 by rothomps          #+#    #+#             */
/*   Updated: 2018/11/23 21:18:16 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *tsrc;
	unsigned char *tdst;

	tsrc = (unsigned char *)src;
	tdst = (unsigned char *)dst;
	while (n--)
		*tdst++ = *tsrc++;
	return (dst);
}
