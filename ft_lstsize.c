/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:56:25 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/19 10:07:45 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/*int main(void)
{
    t_list *lst = NULL;
    
    ft_lstadd_front(&lst, ft_lstnew("Salut"));
    ft_lstadd_front(&lst, ft_lstnew("les"));
    ft_lstadd_front(&lst, ft_lstnew("mecs"));
    
    printf("Taille: %d\n", ft_lstsize(lst));
    
    while (lst)
    {
        t_list *temp = lst->next;
        free(lst);
        lst = temp;
    }
}*/