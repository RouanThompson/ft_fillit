/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrdc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:44:42 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/29 23:20:33 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wrdc(char const *s, char c)
{
	int num_words;

	num_words = 0;
	if (!*s)
		return (num_words);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			s++;
			if (*s == c || *s == '\0')
				num_words++;
		}
	}
	return (num_words);
}
