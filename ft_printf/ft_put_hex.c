/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:33:53 by egiubell          #+#    #+#             */
/*   Updated: 2023/02/14 17:22:55 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_hex_count(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	ft_conhex(unsigned int n, int format)
{
	if (n >= 16)
	{
		ft_conhex(n / 16, format);
		ft_conhex(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + '0');
		else
		{
			if (format == 0)
				ft_putchar(n + 87);
			if (format == 1)
				ft_putchar(n + 55);
		}
	}
}

int	ft_puthex(unsigned int n, int format)
{
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		ft_conhex(n, format);
	return (ft_hex_count(n));
}
