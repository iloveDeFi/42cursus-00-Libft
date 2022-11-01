/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:36:33 by bbessard          #+#    #+#             */
/*   Updated: 2022/10/31 18:55:41 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://koor.fr/C/cstring/memmove.wp
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*pt_dest;
	char	*pt_src;

	i = 0;
	pt_dest = (char *)dest;
	pt_src = (char *)src;
	if (pt_src > pt_dest)
	{
		while (i < len)
		{
			pt_dest[i] = pt_src[i];
			i++;
		}
	}
	else
	{
		while (i != len)
		{
			pt_dest[len - i - 1] = pt_src[len - i - 1];
			i++;
		}
	}
	return (dest);
}
