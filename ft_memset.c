/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:19:30 by bbessard          #+#    #+#             */
/*   Updated: 2022/10/28 17:31:16 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
https://koor.fr/C/cstring/memset.wp
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t  n;
	unsigned char   *string;

	i = 0;
	string = (unsigned char *)s;
	while (i < n)
	{
		*string = (unsigned char)c;
		i++;
		string++;
	}
	return (s);
}



/*
Exemple de code
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof( int ) * 5;
    int length;

    /* Display the initial values
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    /* Reset the memory bloc
    memset( array, 0, size );

    /* Display the new values
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
}
/*