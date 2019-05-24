/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 13:37:41 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/30 15:56:50 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*fresh;
	char	*tmp;
	int		i;

	i = 0;
	if (!s || !(fresh = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	tmp = fresh;
	while (ft_trim(*s) && *s != '\0')
		s++;
	while (*s)
	{
		*tmp++ = *s++;
		i++;
	}
	tmp--;
	while (ft_trim(*tmp) && tmp--)
		i--;
	*++tmp = '\0';
	fresh = ft_strsub(fresh, 0, i);
	return (fresh);
}
