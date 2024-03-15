/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:20:31 by nkarapet          #+#    #+#             */
/*   Updated: 2023/11/10 01:20:31 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
int ft_isascii(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (!(s[i] >= 0 && s[i] <= 127))
            return (0);
        i++;
    }
    return (1);
}
*/

/*
int ft_isascii(char s)
{
    if (s >= 0 && s <= 127)
        return (1);
    return (0);
}
*/