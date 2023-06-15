/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:51:07 by mivendit          #+#    #+#             */
/*   Updated: 2023/06/15 13:09:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
void				ft_strdel(char **as);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_itoa(int n);
void				ft_putendl(char const *s);
size_t				ft_strlen(const char *s);
int					ft_strncmp(const char *s1, const char *s2, unsigned int n);
void				ft_putstr(char const *s);
int					ft_putchar(char c);
int					ft_strcmp(const char *s1, const char *s2);

#endif
