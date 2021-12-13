/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichoi <yichoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:48:35 by yichoi            #+#    #+#             */
/*   Updated: 2021/09/18 17:48:36 by yichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	find;

	if (*str == '\0')
		return (1);
	find = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
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
