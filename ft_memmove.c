/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:54:31 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/13 14:33:52 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	if (dest < src)
	{
		return (ft_memcpy(dest, src, n));
	}
	while (n--)
	{
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	return (dest);
}

/*
int	main()
{
	char str[] = "Ka 2 a";
	printf("Avant : %s\n", str);
	ft_memmove(str + 2, str, 5);
	printf("Après : %s\n", str);
}
*/
