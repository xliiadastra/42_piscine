/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichoi <yichoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 21:06:21 by yichoi            #+#    #+#             */
/*   Updated: 2021/09/20 20:40:45 by yichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (*dest && count < size)
	{
		count++;
		dest++;
	}
	while (*src && count + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	if (count < size)
		*dest = '\0';
	while (*src)
	{
		count++;
		src++;
	}
	return (count);
}
