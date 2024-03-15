/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:21:51 by nkarapet          #+#    #+#             */
/*   Updated: 2023/11/10 01:21:51 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*
int ft_tolower(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] = s[i] + 32;
        i++;
    }
    return (s);
}
*/