/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:37:14 by bbessard          #+#    #+#             */
/*   Updated: 2022/11/01 09:21:46 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://koor.fr/C/cstring/strchr.wp
Cette fonction recherche la première occurrence du caractère passé en second 
paramètre dans la chaîne de caractères spécifiée via le premier paramètre.

la fonction strchr est très proche de la fonction strrchr. La différence réside 
dans le fait que strchr renvoi la position de la première occurrence du 
caractère recherché alors que strrchr renvoi la dernière occurrence 
(recherche par la droite : r signifiant right).
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}

/*
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	if (*s == c)
		return ((char*)s);
	else
		return (0);
}
*/