/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichoi <yichoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:48:43 by yichoi            #+#    #+#             */
/*   Updated: 2021/09/18 17:48:44 by yichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	find;

	if (*str == '\0')
		return (1);
	find = 1;
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
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
