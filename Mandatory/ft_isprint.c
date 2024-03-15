/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:20:39 by nkarapet          #+#    #+#             */
/*   Updated: 2023/11/10 01:20:39 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
int ft_isprint(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] < 32 || s[i] > 126)
            return (0);
        i++;
    }
    return (1);
}
*/

/*
int ft_isprint(char s)
{
    if (s[i] >= 32 && s <= 126)
            return (1);
    return (0);
}
*/