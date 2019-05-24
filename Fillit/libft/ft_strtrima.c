/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrima.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 15:41:33 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/30 21:29:25 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrima(char const *s, char c)
{
	char	*fresh;
	char	*tmp;
	int		i;

	i = 0;
	if (!(fresh = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	tmp = fresh;
	while (*tmp != c && *s != '\0')
		s++;
	while (*s)
	{
		ft_memcpy(tmp, s, 1);
		tmp++;
		i++;
		s++;
	}
	tmp--;
	while (*tmp == c && tmp--)
		i--;
	tmp++;
	*tmp = '\0';
	fresh = ft_strsub(fresh, 0, i);
	return (fresh);
}
