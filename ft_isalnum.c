/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:30:16 by bbessard          #+#    #+#             */
/*   Updated: 2022/10/28 17:31:16 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true.  
The value of the argument must be representable as an unsigned char or the value of EOF.
*/

int ft_isalnum(int  c)
{
    unsigned    char;

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return(1);
    return(0);
}

/*
int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
*/