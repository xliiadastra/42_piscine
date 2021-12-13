/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichoi <yichoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:48:59 by yichoi            #+#    #+#             */
/*   Updated: 2021/09/18 17:49:00 by yichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_space(char c)
{
	if (!(is_upper(c) || is_lower(c) || is_number(c)))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	word_flag;

	index = 0;
	word_flag = 1;
	while (str[index] != '\0')
	{
		if (is_space(str[index]))
			word_flag = 1;
		else
		{
			if (word_flag && is_lower(str[index]))
				str[index] -= 32;
			else if (!word_flag && is_upper(str[index]))
				str[index] += 32;
			word_flag = 0;
		}
		index++;
	}
	return (str);
}
