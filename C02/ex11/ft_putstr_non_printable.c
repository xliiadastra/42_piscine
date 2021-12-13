/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichoi <yichoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:49:14 by yichoi            #+#    #+#             */
/*   Updated: 2021/09/18 18:59:02 by yichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			*ptr;
	unsigned char	ch;
	int				index;

	ptr = "0123456789abcdef";
	index = 0;
	while (str[index])
	{
		ch = str[index];
		if (str[index] >= ' ' && str[index] <= '~')
			write(1, &str[index], 1);
		else
		{
			write(1, "\\", 1);
			write(1, (ptr + (ch / 16)), 1);
			write(1, (ptr + (ch % 16)), 1);
		}
		index++;
	}
}
