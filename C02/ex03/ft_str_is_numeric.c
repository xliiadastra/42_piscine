/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichoi <yichoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:48:17 by yichoi            #+#    #+#             */
/*   Updated: 2021/09/18 17:48:19 by yichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	find;

	if (*str == '\0')
		return (1);
	find = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			find = 1;
		else
		{
			find = 0;
			break ;
		}
		str++;
	}
	return (find);
}
