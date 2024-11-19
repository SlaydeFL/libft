/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:18:20 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/19 09:37:18 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	free_tab(char **tab, size_t count)
{
	while (count--)
		free(tab[count]);
	free(tab);
}

static char	*get_next_word(char const *s, char c, size_t *i)
{
	char	*word;
	size_t	start;
	size_t	len;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			tab[j] = get_next_word(s, c, &i);
			if (!tab[j])
				return (free_tab(tab, j), NULL);
			j++;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

/*
int	main(void)
{
	char	*str;
	char	**result;
	int		i;

	str = "Salut.ca.va.42";
	result = ft_split(str, '.');
	i = 0;
	while (result[i])
	{
		printf("resultat %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}
*/
