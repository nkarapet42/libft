/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkarapet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 20:38:29 by nkarapet          #+#    #+#             */
/*   Updated: 2024/01/22 17:59:01 by nkarapet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*str;

	res = NULL;
	if (!*f || !del)
		return (NULL);
	while (lst)
	{
		str = ft_lstnew((*f)(lst->content));
		if (!str)
		{
			ft_lstclear(&res, (*del));
			return (NULL);
		}
		ft_lstadd_back(&res, str);
		lst = lst->next;
	}
	return (res);
}
