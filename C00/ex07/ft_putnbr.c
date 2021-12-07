/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichoi <yichoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:45:35 by yichoi            #+#    #+#             */
/*   Updated: 2021/09/18 17:47:03 by yichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	loop(int number)
{
	char	ch_nb;

	if (number == 0)
		return ;
	loop(number / 10);
	ch_nb = '0' + number % 10;
	write(1, &ch_nb, 1);
}

void	ft_putnbr(int nb)
{
	char	ch_nb;

	if (nb < 0)
	{
		write(1, "-", 1);
		loop(-(nb / 10));
		ch_nb = '0' - nb % 10;
	}
	else
	{
		loop(nb / 10);
		ch_nb = '0' + nb % 10;
	}
	write(1, &ch_nb, 1);
}
