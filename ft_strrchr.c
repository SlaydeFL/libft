/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:34:09 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/13 14:46:26 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	size_t	i;

	last = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			last = (char *)&s[i];
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (last);
}
/*
int	main(void)
{
	char	*str;
	char	search1;
	char	search2;

	str = "Kaaris Kaaris";
	search1 = 'a';
	search2 = 'z';
	printf("Dernière occurrence de '%c' dans '%s': %s\n", search1, str,
		ft_strrchr(str, search1));
	printf("Dernière occurrence de '%c' dans '%s': %s\n", search2, str,
		ft_strrchr(str, search2));
}
*/