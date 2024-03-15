/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:21:46 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/17 16:01:28 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

size_t	ft_check(char const *set, char const str)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == str)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_size(size_t start, size_t end)
{
	size_t	size;

	size = 0;
	size = end - start;
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_check(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_check(set, s1[end - 1]))
		end--;
	res = (char *)malloc(sizeof(char) * (ft_size(start, end) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_size(start, end))
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
