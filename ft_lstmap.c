/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 14:53:39 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/18 15:46:29 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!lst || !f || !del)
		return (NULL);
	tmp = NULL;
	while (lst)
	{
		tmp2 = ft_lstnew(f(lst->content));
		if (!tmp2)
		{
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp, tmp2);
		lst = lst->next;
	}
	return (tmp);
}
