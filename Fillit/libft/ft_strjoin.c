/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 17:34:59 by rothomps          #+#    #+#             */
/*   Updated: 2019/02/06 16:47:35 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*news1;
	int		i;

	i = 0;
	if (!s1 || !s2 || !(news1 = (char *)malloc(ft_strlen(s1) +\
	ft_strlen(s2) + 1)))
		return (NULL);
	while (*s1)
		news1[i++] = *s1++;
	while (*s2)
		news1[i++] = *s2++;
	news1[i] = '\0';
	return (news1);
}
