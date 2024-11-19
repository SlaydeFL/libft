/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:46:19 by lupetit           #+#    #+#             */
/*   Updated: 2024/11/13 14:41:58 by lupetit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_len(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n = n / 10;
	}
	if (len == 1)
		str[0] = '-';
	return (str);
}

/*
int	main()
{
	int n1 = 42;
	int n2 = -127;
	int n3 = 0;
	
	printf("nombre %d: %s\n", n1, ft_itoa(n1));
	printf("nombre %d: %s\n", n2, ft_itoa(n2));
	printf("nombre %d: %s\n", n3, ft_itoa(n3));
}
*/
