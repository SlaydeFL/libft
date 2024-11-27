/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:43:33 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/19 10:07:18 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	while (*lst)
	{
		current = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = current;
	}
}

/*void del(void *content)
{
    free(content);
}

int main(void)
{
    t_list *lst = NULL;
    char *str1 = strdup("Salut");
    char *str2 = strdup("les");
    char *str3 = strdup("mecs");
    
    ft_lstadd_back(&lst, ft_lstnew(str1));
    ft_lstadd_back(&lst, ft_lstnew(str2));
    ft_lstadd_back(&lst, ft_lstnew(str3));
    
    ft_lstclear(&lst, del);
}*/
