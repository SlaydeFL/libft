/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:08:25 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/13 14:32:17 by lupetit          ###   ########.fr       */
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

/*
int	main()
{
	char str[] = "Momo simo";
	printf("Avant : %s\n", str);
	ft_memset(str, '*', 5);
	printf("Après : %s\n", str);
}
*/
