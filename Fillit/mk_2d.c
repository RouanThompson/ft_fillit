/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 17:15:09 by rothomps          #+#    #+#             */
/*   Updated: 2019/05/15 18:44:18 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**mk_2d(int ntet, char *s)
{
	char	**array;
	int		n;

	n = 0;
	if (!(array = (char **)malloc(sizeof(char *) * ntet)))
		return (NULL);
	array[ntet] = NULL;
	while (n < ntet)
	{
		array[n] = ft_strnew(16); //malloc each line
		n++;
	}
	sve_tet(array, s);
	return (array);
}
