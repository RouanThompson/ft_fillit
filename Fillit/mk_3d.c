/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 13:04:41 by rothomps          #+#    #+#             */
/*   Updated: 2019/05/18 13:04:43 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char        ***mk_3d(char **array, int ntet)
{
    char    ***tri;
    int     n;
    int     l;
    int     i;
    int     c;

    n = 0;
    l = 0;
    c = 0;
    i = 0;
    if (!(tri = (char ***)malloc(sizeof(char **) * (ntet + 1))))//3d block
        return (NULL);
    tri[ntet] = NULL;
    while (n < ntet)
    {
        if (!(tri[n] = (char **)malloc(sizeof(char *) * 5)))//lines
            return (NULL);
        tri[n][4] = NULL;
        while (i < 16)
        {
            tri[n][l] = ft_strnew(4);//1 array of of  4 chars
            ft_memcpy(tri[n][l], array[n] + i, 4);// 
            i += 4; // incrementing by 4;
            l++;
        }
        l = 0;
        i = 0;
        n++;
    }
    return (tri);
}
