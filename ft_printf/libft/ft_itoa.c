/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:28:51 by egiubell          #+#    #+#             */
/*   Updated: 2023/02/02 19:22:23 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	n_count(int n)
{
	size_t	i;
	int		a;

	i = 0;
	a = n;
	if (a == 0)
		return (1);
	if (a < 0)
	{
		a = -a;
		i = 1;
	}
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	return ((int)i);
}

char	*check_min(int n)
{
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	return (ft_strdup("0"));
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	if (n == 0 || n == -2147483648)
		return (check_min(n));
	i = n_count(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i] = '\0';
	i--;
	while (n != 0 && str[i] != '-')
	{
		str[i] = (n % 10) + '0';
		i--;
		n /= 10;
	}
	return (str);
}
