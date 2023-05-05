/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:39:51 by egiubell          #+#    #+#             */
/*   Updated: 2023/02/15 16:56:15 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_conversion(char c, va_list args);
int		ft_printf(const char *str, ...);
int		ft_putnbr(int n);
int		ft_putunsign(unsigned int n);
int		ft_num_len(unsigned	int n);
char	*ft_uitoa(unsigned int n);
int		ft_putunsign(unsigned int n);
int		ft_hexcount(unsigned int n);
void	ft_conhex(unsigned int n, int format);
int		ft_puthex(unsigned int n, int format);
int		ft_ptrcount(uintptr_t n);
void	ft_conptr(uintptr_t n);
int		ft_putptr(unsigned long long p);

#endif