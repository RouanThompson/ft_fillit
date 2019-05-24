/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 16:32:22 by rothomps          #+#    #+#             */
/*   Updated: 2019/01/30 16:11:20 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	while (((*str >= '\t' && *str <= '\r') || *str == ' '))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = sign * -1;
		str++;
	}
	while (ft_isdigit(*str) != 0)
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sign);
}
