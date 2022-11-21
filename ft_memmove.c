/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:36:33 by bbessard          #+#    #+#             */
/*   Updated: 2022/11/16 11:08:15 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://koor.fr/C/cstring/memmove.wp
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		while (i < len)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			((char *)dest)[len - i - 1] = ((char *)src)[len - i - 1];
			i++;
		}
	}
	return (dest);
}
/*
int main()
{
	char dest[] = "siiiii";
	char src[] = "ok le sang ";
	printf("%s\n", ft_memmove(dest, src, 5));
}
*/