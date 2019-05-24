/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 20:02:23 by rothomps          #+#    #+#             */
/*   Updated: 2019/02/04 20:48:38 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char *rtn;

	rtn = NULL;
	while (*str != '\0')
	{
		if (*str == (char)ch)
			rtn = (char *)str;
		str++;
	}
	if (*str == (char)ch)
		return ((char*)str);
	else
		return (rtn);
}
