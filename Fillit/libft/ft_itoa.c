/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 18:58:25 by rothomps          #+#    #+#             */
/*   Updated: 2019/02/08 16:11:16 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_nbrlen(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			nbrlen;
	unsigned int	n_cpy;

	nbrlen = get_nbrlen(n);
	n_cpy = n;
	if (n < 0)
	{
		n_cpy = -n;
		nbrlen++;
	}
	if (!(str = ft_strnew(nbrlen)))
		return (NULL);
	str[--nbrlen] = n_cpy % 10 + '0';
	while (n_cpy /= 10)
		str[--nbrlen] = n_cpy % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
