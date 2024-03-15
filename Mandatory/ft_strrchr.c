/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:21:43 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/22 17:25:38 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (c < 0)
		return ((char *) s);
	i = ft_strlen(s) + 1;
	while (i--)
	{
		if ((*(s + i) == (char)c))
			return ((char *)s + i);
	}
	return (0);
}

/*
char    *ft_strrchr(const char *s, int c)
{
    const char d;

    if (c == '\0')
    {
        while (*s != '\0')
            s++;
        return ((char *)s);
    }

    while (*s != '\0')
    {
        if (*s == c)
            d = s;
        s++; 
    }
    return ((char *)d);
}
*/
