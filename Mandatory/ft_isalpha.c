/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <nkarapet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:20:28 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/10 15:16:19 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*
int ft_isalpha(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if ((s[i] < 'a' || s[i] > 'z')
            && (s[i] < 'A' || s[i] > 'Z'))
            return (0);
        i++;
    }
    return (1);
}
*/

/*
int ft_isalpha(char s)
{
    if ((s > 'a' && s < 'z')
            || (s > 'A' && s < 'Z'))
            return (1);
    return (0);
}
*/
