/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:51:18 by mivendit          #+#    #+#             */
/*   Updated: 2023/06/15 13:57:57 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	if (!(*s1) && !(*s2))
		return (0);
	else
	{
		while (*us1 || *us2)
		{
			if (*us1 != *us2)
				return (*us1 - *us2);
			us1++;
			us2++;
		}
	}
	return (0);
}
