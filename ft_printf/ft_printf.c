/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:42:20 by egiubell          #+#    #+#             */
/*   Updated: 2023/02/15 16:18:41 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_conversion(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		len += ft_putptr(va_arg(args, unsigned long long));
	else if (c == 'i' || c == 'd')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len += ft_putunsign(va_arg(args, unsigned int));
	else if (c == 'x')
		len += ft_puthex(va_arg(args, unsigned int), 0);
	else if (c == 'X')
		len += ft_puthex(va_arg(args, unsigned int), 1);
	else if (c == '%')
	{
		write(1, "%", 1);
		len += 1;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_conversion(str[i + 1], args);
			i += 2;
		}
		else
		{
			len += ft_putchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}

/*#include <stdio.h>

int main()
{
	char a = 't';
	char c[10] = "test_str";
	void *d = &a;
	int f = 4091;

	int l1 = ft_printf("the char is: %c\n", a);
	int l2 = ft_printf("the str is: %s\n", c);
	int l3 = ft_printf("the point is: %p\n", d);
	int l4 = ft_printf("the low hex is: %x\n", f);
	ft_printf("1: %i 2: %i 3: %i 4: %i\n", l1, l2, l3, l4);
	int i1 = printf("the char is: %c\n", a);
	int i2 = printf("the str is: %s\n", c);
	int i3 = printf("te point is: %p\n", d);
	int i4 = printf("the low hex is: %x\n", f);
	printf("1: %i 2: %i 3: %i 4: %i\n", i1, i2, i3, i4);
	return (0);
}*/
