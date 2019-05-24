/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 20:37:43 by rothomps          #+#    #+#             */
/*   Updated: 2019/04/27 16:28:30 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int    chk_cnect(char *s)
{
    //printf("\nENTER FUNC val2\n");
    counter b;
    ft_bzero(&b, sizeof(b));
    while (s[b.i] != '\0')
    {
        if (s[b.i] == '#')
        {
            if (s[b.i - 5] == '#')
                b.connection++;
            if (s[b.i + 5] == '#')
                b.connection++;
            if (s[b.i - 1] == '#')
                b.connection++;
            if (s[b.i + 1] == '#')
                b.connection++;
        } 
        b.i++;
    }
    if (b.connection != 6 && b.connection != 8)
    {
        printf("wtf is this at s[%d]\n", b.i);
        printf("number of connections %d\n", b.connection);
	    return (-1);
    }
        //printf("VALID number of connections is %d Hurray!!\n", b.connection);
    return (0);
}