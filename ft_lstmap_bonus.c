/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:46:44 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/19 10:07:34 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static t_list	*create_node(void *(*f)(void *), void (*del)(void *),
		t_list *lst, t_list **lstnew)
{
	t_list	*new_node;
	void	*content;

	content = f(lst->content);
	if (!content)
	{
		ft_lstclear(lstnew, del);
		return (NULL);
	}
	new_node = ft_lstnew(content);
	if (!new_node)
	{
		del(content);
		ft_lstclear(lstnew, del);
		return (NULL);
	}
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstnew;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	lstnew = NULL;
	while (lst)
	{
		new_node = create_node(f, del, lst, &lstnew);
		if (!new_node)
			return (NULL);
		ft_lstadd_back(&lstnew, new_node);
		lst = lst->next;
	}
	return (lstnew);
}

/*void *str_toupper(void *content)
{
    char *str = strdup((char *)content);
    for (int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
    return str;
}

void del(void *content)
{
    free(content);
}

int main(void)
{
    t_list *lst = NULL;
    
    ft_lstadd_back(&lst, ft_lstnew(strdup("Salut")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("les")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("mecs")));
    
    t_list *new_lst = ft_lstmap(lst, str_toupper, del);
    
    ft_lstiter(new_lst, print_content);
    
    ft_lstclear(&lst, del);
    ft_lstclear(&new_lst, del);

}*/
