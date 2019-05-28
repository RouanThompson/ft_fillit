/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:26:23 by rothomps          #+#    #+#             */
/*   Updated: 2019/04/27 16:28:16 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "./libft/libft.h"
#include <unistd.h>
#include <stdio.h> //remove before submission

int main(int c, char **v)
{
	char	buff[BUFF_SIZE_F + 1]; //correct declaration to have 21 elements including \0
	int		bytes_read;
	int		fd = 0;
	int		l = 0;
	int		i = 0; //using for # of tetrimoino
	char	**twod; //saved tet peices in a double array
	char	**new_board; //just the board filled with dots nothing else atm

	if (c == 2)
	{
		fd = open(v[1], O_RDONLY);
		//printf("fd = %d\n", fd);
		while (((bytes_read = read(fd, buff, 20)) > 0) && buff[0] != '\n') //20 is the number of bytes to read//reads again//what if it fails to read 20?
		{
			i++;
			buff[BUFF_SIZE_F] = '\0';
			//printf("\nTetrimino #%d bytes read = %d\n", i, bytes_read);
			if (chk_sym(buff) == -1) //checking for valid symbols
			{
				printf ("\nInvalid Tetrimino\n");
				return (-1); //replace all -1 with erros and display newline
			}
			else
			{
				if (chk_cnect(buff) == -1) //checking for # of connections
				{
					printf("INVALID: val2\n");
					return (-1);
				}
			}
			bytes_read = read(fd, buff, 1); //reads 1 byte which should be a nl... when it gets to the while and read again there shoud not be a nl @ buff[0]
			//i++; //if there is then there is multiple new lines and thus invalid file
			//need to save
			//next step is to save each peice
		/*if (buff[0] == '\n') //if there is multiple new line...will be combined with statement above before submission or naw?
		{
			//printf("INVALID: Found mulitiple new line\n");
			return (-1);
		}*/
		}
		if ((buff[0] == '\n' && bytes_read == 0) || buff[0] == '\n') //if there is nothing after nl or if multiple nl
		{
			printf("INVALID: Found nothing after new line or multiple new line or line at begning of file\n");
			return (-1);
		}
	}
	if (i == 0)
	{
		printf("empty txt file\n");
		return (-1);
	}
	close(fd);
	twod = mk_2d(i, v[1]);
	ft_putendl("--- Given Tetrimino");
	while (l < i)
		ft_putendl(twod[l++]);
	new_board = board(i);
	place(new_board, twod);
	l = 0;
	ft_putendl("--- Da La board");
	while (new_board[l] != NULL)
		ft_putendl(new_board[l++]);
	return (0);
}