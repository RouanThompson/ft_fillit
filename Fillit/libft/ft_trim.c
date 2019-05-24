/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/04 14:01:09 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/30 17:36:27 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_trim(int c)
{
	unsigned char space;

	space = (unsigned char)c;
	if (space == ' ' || space == ',' || space == '\n' || space == '\t')
		return (space);
	return (0);
}
