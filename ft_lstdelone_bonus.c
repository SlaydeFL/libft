/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:42:58 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/19 10:06:48 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
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
