/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:21:22 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/11 16:18:52 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*src;

	if (!s1 || !s2)
		return (NULL);
	src = (char *)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!src)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		src[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		src[j++] = s2[i++];
	src[j] = '\0';
	return (src);
}

/*
char    *ft_strjoin(char const **s1, char const *s2, size_t size)
{
    int i;
    int len;
    int j;
    int k;
    char *src;

    i = 0;
    len = 0;
    while (*s1[i] != '\0')
        len += ft_strlen(s1[i++]);
    len += ft_strlen(s2) * (size - 1);
    src = (char *)malloc(sizeof(char) * (len + 1));
    i = 0;
    while (*s1[i] != '\0')
    {
        j = 0;
        while (s1[i][j] != '\0')
            src[k++] = s1[i][j++];
        j = 0;
        while (s2[j] != '\0')
            src[k++] = s2[j++];
        i++;
    }
    src[k] = '\0'
    return (src);
}
*/
