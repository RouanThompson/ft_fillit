/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 13:44:07 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/30 15:13:54 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char *dst;
	char *tmp;

	if (!(dst = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	tmp = dst;
	while (n)
	{
		*tmp++ = *s1++;
		n--;
	}
	*tmp = '\0';
	return (dst);
}
