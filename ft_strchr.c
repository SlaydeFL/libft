/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:30:48 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/13 14:47:01 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

/*
int	main()
{
	char	*str;
	char	search1;
	char	search2;

	str = "Lucas oe oe";
	search1 = 'e';
	search2 = 'z';
	printf("Recherche '%c' dans '%s': %s\n", search1, str, ft_strchr(str,
			search1));
	printf("Recherche '%c' dans '%s': %s\n", search2, str, ft_strchr(str,
			search2));
}
*/
