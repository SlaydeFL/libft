/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:45:57 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/13 14:35:27 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	size_t	i;
	size_t	j;

	if (*tofind == '\0')
	{
		return ((char *)str);
	}
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == tofind[j] && i + j < len)
		{
			j++;
			if (tofind[j] == '\0')
			{
				return ((char *)str + i);
			}
		}
		i++;
	}
	return (NULL);
}

/*
int	main()
{
	char *str = "Salut les mecs ca va ?";
	char *find = "ca";
	
	printf("Recherche '%s' dans '%s': %s\n", find, str, 
		ft_strnstr(str, find, strlen(str)));
}
*/
