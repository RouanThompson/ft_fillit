/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 13:20:09 by rothomps          #+#    #+#             */
/*   Updated: 2019/02/01 16:23:02 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int j;

	i = -1;
	j = (int)ft_strlen(dest);
	while (*(src + ++i) && i < (int)n)
		*(dest + j++) = *(src + i);
	*(dest + j) = '\0';
	return (dest);
}
