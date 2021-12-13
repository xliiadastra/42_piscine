/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichoi <yichoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:47:55 by yichoi            #+#    #+#             */
/*   Updated: 2021/09/18 17:47:56 by yichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	if (dest == NULL)
		return (NULL);
	ptr = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}
