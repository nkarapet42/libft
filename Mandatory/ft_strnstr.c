/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:21:40 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/10 18:49:55 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

const char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;

	if (str == NULL && n == 0)
		return (str);
	if (*to_find == '\0')
		return (str);
	i = ft_strlen(to_find);
	while (*str && n >= i)
	{
		if (*str == *to_find && ft_strncmp(str, to_find, i) == 0)
			return (str);
		n--;
		str++;
	}
	return (NULL);
}
