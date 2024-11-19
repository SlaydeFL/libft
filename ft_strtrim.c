/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:24:08 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/15 22:06:54 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_verif(char const *s1, char const *set)
{
	if (!s1 || !set)
	{
		return (NULL);
	}
	if (!*s1)
	{
		return (NULL);
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*chain;

	chain = ft_verif(s1, set);
	if (chain || !s1 || !set)
		return (chain);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
	{
		end--;
	}
	chain = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!chain)
	{
		return (NULL);
	}
	ft_strlcpy(chain, s1 + start, end - start + 1);
	return (chain);
}

/*
int	main(void)
{
	char	*str;
	char	*set;
	char	*result;

	str = "...Salut yo...";
	set = ".";
	result = ft_strtrim(str, set);
	printf("de base: %s\n", str);
	printf("apres trim: %s\n", result);
	free(result);
}
*/
