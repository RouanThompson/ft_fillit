/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 14:22:29 by rothomps          #+#    #+#             */
/*   Updated: 2019/05/11 14:22:31 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char    **board(int ntet, char ***tets)
{
    char    **array;
    int     i;
    int     size; //size of the board
    int     z;

    z = 0;
    i = 0;
    size = 2;
    while (size * size < ntet * 4) //squared....4 is the number of #'s that a tetrimino has
        size++;// increase the size till it equals the number of total #'s
    if (!(array = (char **)malloc(sizeof(char *) * (size + 1))))
        return (NULL);
    array[size] = NULL;
    while (i < size) //this and the body will get me the minimum the board needs to be
	{
		array[i] = ft_strnew(size);
        array[i] = ft_memset(array[i], '.', (sizeof(char) * size));
		i++;
	}
    while (z < size) //printiing out the dimensions..take out before submission...i have it here for easy manipulation
		ft_putendl(array[z++]);
    return(place(array, tets, size));
}
//board size value would be used twice so sqr(1 tet * 4)
//would be 2 so a 2 x 2 board