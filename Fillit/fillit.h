/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:50:22 by rothomps          #+#    #+#             */
/*   Updated: 2019/04/27 16:11:43 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define BUFF_SIZE_F 20 //20
# include "libft/libft.h"
# include <stdio.h> // < < take out before submission

typedef struct		counter
{
	int					hsh;
	int					dot;
	int					nl;
	int					i;
	int					j;
	int					connection;
	int					bytes_read; //will take out variables if i have the space where its being used
	int					fd;
}						counter;

int					chk_sym(char *s);
int 				chk_cnect(char *s); 
char				**mk_2d(int ntet, char *s);
void        		sve_tet(char **array, char *s);
char				**board(int ntet);
void				place(char **board, char **tetriminos);

#endif
