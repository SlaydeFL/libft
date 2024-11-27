/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:40:03 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/19 10:08:05 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
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