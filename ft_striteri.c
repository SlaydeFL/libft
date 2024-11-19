/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:10:02 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/13 14:45:27 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main()
// {
// 	void	ft_test(unsigned int i, char *c)
// 	{
// 		*c = *c + i;
// 	}

// 	char str[] = "lucas le boss";
// 	printf("avant: %s\n", str);
// 	ft_striteri(str, &ft_test);
// 	printf("après: %s\n", str);
// }