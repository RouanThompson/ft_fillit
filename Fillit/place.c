/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:58:24 by rothomps          #+#    #+#             */
/*   Updated: 2019/05/23 14:58:25 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char    **place(char **new_board, char ***tets, int size)
{
    int n;
    int l;
    int c;
    int z;
    int i;
    int j;

    i = 0;
    j = 0;
    n = 0;
    l = 0;
    c = 0;
    z = 0;

    while (new_board[i] != NULL)
    {
        while(new_board[i][j] != '\0')
        {
            if (tets[n][l][c] == '.')
                c++;
            else
            {
                new_board[i][j] = tets[n][l][c];
                j++;
                c++;
            }
        }
        l++;
        if (tets[n][l] == NULL)
            n++;
    }
    while (z < size) //take out before submission...i have it here for easy manipulation
		ft_putendl(new_board[z++]);
    return(new_board);
}