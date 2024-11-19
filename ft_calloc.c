/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:35:27 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/13 14:44:07 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	len;

	if (count == 0 || size == 0)
	{
		return (malloc(0));
	}
	len = count * size;
	if (len / count != size)
	{
		return (NULL);
	}
	ptr = malloc(len);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, len);
	return (ptr);
}

/*
int	main()
{
	int *a;
	int i = 0;
	
	a = (int *)ft_calloc(5, sizeof(int));
	while (i < 5)
	{
		printf("element %d: %d\n", i, a[i]);
		i++;
	}
	free(a);
}
*/
