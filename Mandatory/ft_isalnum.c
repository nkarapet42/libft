/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:20:25 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/10 15:19:59 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
int ft_isalnum(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if ((s[i] < 'a' || s[i] > 'z')
            && (s[i] < 'A' || s[i] > 'Z')
                && (s[i] < '0' || s[i] > '9'))
                return (0);
        i++;
    }
    return (1);
}
*/

/*
int ft_isalnum(char s)
{
     if ((s > 'a' && s < 'z')
            || (s > 'A' && s < 'Z')
                || (s > '0' && s < '9'))
                return (1);
    return (0);
}
*/
