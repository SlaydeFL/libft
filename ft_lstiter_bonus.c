/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:45:43 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/19 10:08:01 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *lst = NULL;
    
    ft_lstadd_back(&lst, ft_lstnew("Salut"));
    ft_lstadd_back(&lst, ft_lstnew("les"));
    ft_lstadd_back(&lst, ft_lstnew("mecs"));
    
    ft_lstiter(lst, print_content);
    
    while (lst)
    {
        t_list *temp = lst->next;
        free(lst);
        lst = temp;
    }
}*/
