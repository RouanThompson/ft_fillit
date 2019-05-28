/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 18:21:34 by rothomps          #+#    #+#             */
/*   Updated: 2019/05/27 18:21:35 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void    place(char **board, char **tetriminos)
{
    int     i;
    int     j;
    int     l;
    int     c;
    
    i = 0;
    j = 0;
    l = 0;
    c = 0;

    while (board[i] != NULL)
    {
        while (board[i][j] != '\0')
        {
            if (tetriminos[l][c] != '\0' && tetriminos[l][c] == '.')
                c++;
            else
                board[i][j++] = tetriminos[l][c++];
        }
        i++;
        j = 0;
    }
}