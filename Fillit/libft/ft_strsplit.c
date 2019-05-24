/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 19:25:52 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/29 23:05:31 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		fst_dimen;
	char	**sntc;

	fst_dimen = 0;
	if (s == NULL)
		return (NULL);
	if (!(sntc = (char **)malloc((ft_wrdc(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			sntc[fst_dimen++] = ft_strndup(s, ft_wrdl(s, c));
			while (*s != c && *s != '\0')
				s++;
		}
	}
	sntc[fst_dimen] = NULL;
	return (sntc);
}
