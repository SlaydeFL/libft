/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:14:36 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/19 10:07:38 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
	{
		return (NULL);
	}
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int main(void)
{
    t_list *lst = NULL;
    char *str = "Salut les mecs";
    
    t_list *new = ft_lstnew(str);
    ft_lstadd_front(&lst, new);
    
    printf("%s\n", (char *)lst->content);
    free(lst);
}*/
