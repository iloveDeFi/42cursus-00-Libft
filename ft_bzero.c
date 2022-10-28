/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:11:14 by bbessard          #+#    #+#             */
/*   Updated: 2022/10/28 17:31:16 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The bzero() function fills the first n bytes of the object pointed to by dst with zero (NUL) bytes.
*s = *dst
	This function is similar to the ANSI memset() function. New code should use the ANSI function.
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}