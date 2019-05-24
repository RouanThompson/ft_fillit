/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 16:35:07 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/30 21:28:31 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *new_str;

	if (!(new_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	new_str = ft_strcpy(new_str, s1);
	return (new_str);
}
