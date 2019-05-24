/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 20:06:30 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/29 22:49:36 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t i;

	i = -1;
	while (++i < len)
		if (*(src + i))
			*(dest + i) = *(src + i);
		else
			while (i < len)
				*(dest + i++) = '\0';
	return (dest);
}
