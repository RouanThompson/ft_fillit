/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 22:49:00 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/30 15:35:50 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ptr;

	if (!s || !(ptr = (char *)malloc(len * sizeof(char) + 1)))
		return (NULL);
	ft_memcpy((void *)ptr, (void *)(s + start), len);
	ptr[len] = '\0';
	return (ptr);
}
