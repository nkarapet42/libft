/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:21:54 by nkarapet          #+#    #+#             */
/*   Updated: 2023/11/10 01:21:54 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*
int ft_toupper(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 97 && s[i] <= 122)
            s[i] = s[i] - 32;
        i++;
    }
    return (s);
}
*/