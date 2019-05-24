/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 12:52:46 by rothomps          #+#    #+#             */
/*   Updated: 2019/04/27 16:28:23 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		chk_sym(char *s) //take struct counter and buff
{
	counter a;

	ft_bzero(&a, sizeof(a)); //initi to 0
	while (s[a.i] != '\0')
	{
		if (s[a.i] == '#')
		{
			a.hsh++;
			//printf("Found hsh");
			if (a.hsh > 4)
				return (-1);
		}
		else if (s[a.i] == '.')
		{
			a.dot++;
			//printf("Found dot");
			if (a.dot > 12)
				return (-1);
		}
		else if (s[a.i] == '\n' && (a.i == 4 || a.i == 9 || a.i == 14 || a.i == 19))
		{
			a.nl++;
			//printf("Found nl");
			if (a.nl > 4)
				return (-1);
		}
		else //(s[i] != '#' || s[i] != '.' || s[i] != '\n')
		{
			//printf("\nFound invalid symbol value of:  %hhd", s[a.i]);
			return (-1);
		}
		//printf("  --- At --- s[%d]\n", a.i);
		//printf("  current #dot = %d\n", a.dot);
		//printf("  current #hsh = %d\n", a.hsh);
		//printf("  current #nl  = %d\n", a.nl);
		a.i++;
	}
	//printf("\nexit while\n");
	//printf(" --- Summary # = %d . = %d nl= %d\n", a.hsh, a.dot, a.nl);
	if (a.hsh != 4 || a.dot != 12 || a.nl != 4) //return -1 if not the right amount
		return (-1);
	return (0);
}
