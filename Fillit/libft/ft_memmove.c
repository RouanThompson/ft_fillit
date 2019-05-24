/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 14:10:53 by rothomps          #+#    #+#             */
/*   Updated: 2019/02/04 18:53:12 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*tdst;
	const unsigned char		*tsrc;

	tdst = (unsigned char*)dst;
	tsrc = (unsigned char*)src;
	i = 0;
	if (tsrc < tdst)
		while (++i <= len)
			tdst[len - i] = tsrc[len - i];
	else
		while (len-- > 0)
			*(tdst++) = *(tsrc++);
	return (dst);
}
