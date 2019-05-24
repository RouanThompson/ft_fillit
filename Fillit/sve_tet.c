/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 17:09:16 by rothomps          #+#    #+#             */
/*   Updated: 2019/05/15 18:39:45 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		sve_tet(char **array, char *s)
{
	counter c;
	char	buff[BUFF_SIZE_F + 1];

	c.i = 0;
	c.fd = 0;
	c.bytes_read = 0;
	c.fd = open(s, O_RDONLY);
	while (((c.bytes_read = read(c.fd, buff, 21)) > 0))
	{
		c.j = 0;
		buff[BUFF_SIZE_F] = '\0';
		while (buff[c.j] != '\0')
		{
			if (buff[c.j] == '#' || buff[c.j] == '.')
			{
				if (buff[c.j] == '.')
					array[c.i / 16][c.i % 16] = '.';
				else
					array[c.i / 16][c.i % 16] = ('A' + (c.i / 16));
				c.i++;
			}
			c.j++;
		}
	}
	close(c.fd);
}
