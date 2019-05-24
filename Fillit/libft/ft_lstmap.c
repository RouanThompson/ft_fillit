/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 22:14:46 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/29 23:01:54 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *n;
	t_list *l;

	l = f(lst);
	n = l;
	while (lst->next)
	{
		lst = lst->next;
		if (!(l->next = f(lst)))
		{
			free(l->next);
			return (NULL);
		}
		l = l->next;
	}
	return (n);
}
