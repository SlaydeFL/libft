/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:40:59 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/19 10:07:06 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*int main(void)
{
    t_list *lst = NULL;
    
    ft_lstadd_back(&lst, ft_lstnew("Salut"));
    ft_lstadd_back(&lst, ft_lstnew("les"));
    ft_lstadd_back(&lst, ft_lstnew("mecs"));
    
    t_list *dernier = ft_lstlast(lst);
    printf("Dernier élément: %s\n", (char *)dernier->content);
    
    while (lst)
    {
        t_list *temp = lst->next;
        free(lst);
        lst = temp;
    }
}*/