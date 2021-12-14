/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichoi <yichoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 21:06:15 by yichoi            #+#    #+#             */
/*   Updated: 2021/09/20 20:14:53 by yichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*find_ptr;

	if (!*to_find)
		return (str);
	while (*str)
	{
		str_ptr = str;
		find_ptr = to_find;
		while (*find_ptr && *str_ptr == *find_ptr)
		{
			str_ptr++;
			find_ptr++;
		}
		if (*find_ptr == 0)
			return (str);
		str++;
	}
	return (0);
}
