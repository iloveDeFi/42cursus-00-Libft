/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:45:37 by bbessard          #+#    #+#             */
/*   Updated: 2022/11/02 10:22:55 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://www.geeksforgeeks.org/strdup-strdndup-functions-c/#:~:text=strdup()%20%3A
&text=This%20function%20returns%20a%20pointer,to%20the%20duplicated%20string%20s.
*/
#include "libft.h"

char	*ft_strdup(const char*s1)
{
	char	*s1_cpy;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	s1_cpy = malloc((len + 1) * sizeof(char));
	i = 0;
	if (s1_cpy == 0)
		return (0);
	while (i < len)
	{
		s1_cpy[i] = s1[i];
		i++;
	}
	s1_cpy[i] = '\0';
	return (s1_cpy);
}
