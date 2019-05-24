/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 20:02:41 by rothomps          #+#    #+#             */
/*   Updated: 2019/02/04 16:48:13 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ned, size_t len)
{
	size_t i;
	size_t j;

	if (*ned == '\0')
		return ((char *)hay);
	i = 0;
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] && i + j < len && ned[j] && hay[i + j] == ned[j])
			j++;
		if (ned[j] == '\0')
			return ((char *)(hay + i));
		i++;
	}
	return (NULL);
}
