/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichoi <yichoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:45:27 by yichoi            #+#    #+#             */
/*   Updated: 2021/09/20 11:44:03 by yichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *buf, int last)
{
	if (last)
		write(1, buf, 5);
	else
		write(1, buf, 7);
}

void	ft_refresh(char *buf, int first, int second, int last)
{
	ft_putchar(buf, last);
	if (buf[second] == '9')
	{
		buf[first]++;
		buf[second] = '0';
	}
	else
		buf[second]++;
}

void	ft_print_comb2(void)
{
	char	buf[7];
	int		last;

	buf[0] = '0';
	buf[1] = '0';
	buf[2] = ' ';
	buf[5] = ',';
	buf[6] = ' ';
	last = 0;
	while (!(buf[0] == '9' && buf[1] == '8'))
	{
		buf[3] = buf[0];
		if (buf[1] == '9')
		{
			buf[4] = '0';
			buf[3]++;
		}
		else
			buf[4] = buf[1] + 1;
		while (!(buf[3] == '9' && buf[4] == '9'))
			ft_refresh(buf, 3, 4, last);
		ft_refresh(buf, 0, 1, last);
	}
	last = 1;
	ft_putchar(buf, last);
}

int main()
{
	ft_print_comb2();
}
