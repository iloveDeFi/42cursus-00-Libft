/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:26:23 by bbessard          #+#    #+#             */
/*   Updated: 2022/10/31 18:49:58 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The isdigit() function tests for a decimal digit character. 
*/

#include "libft.h"

int	isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
