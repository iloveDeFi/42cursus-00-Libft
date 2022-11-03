/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:57:25 by bbessard          #+#    #+#             */
/*   Updated: 2022/11/03 14:22:31 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://koor.fr/C/cstring/memchr.wp

Recherche la première occurence d'une valeur typée int, mais interprétée en 
tant que char, dans un bloc de mémoire. Comme on traite un bloc de mémoire et 
non pas une chaîne de caractères AZT (à zéro terminal), nous devons aussi 
spécifier à la fonction la taille du bloc de mémoire dans lequel réaliser 
la recherche.


*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}
