/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:12:29 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/13 14:44:24 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *v, int r, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)v)[i] = (unsigned char)r;
		i++;
	}
	return (v);
}

void	ft_bzero(void *v, size_t len)
{
	ft_memset(v, 0, len);
}

/*
int	main()
{
	char str[] = "salut les potes";
	printf("avant bzero: %s\n", str);
	ft_bzero(str, 5);
	printf("apres bzero: %s\n", str);
}
*/
