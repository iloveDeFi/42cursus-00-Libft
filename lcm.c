/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LCM.C                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:36:03 by bbessard          #+#    #+#             */
/*   Updated: 2023/05/03 11:41:25 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

 unsigned int    lcm(unsigned int a, unsigned int b)
 {
     unsigned int n;
    
    if (a > b)
        n = a;
    else 
        n = b;
     while (1)
     {
         if (n % a == 0 && n % b == 0)
            return (n);
        ++n;
     }
 }

 int main (void)
 {
     unsigned int a = 20;
     unsigned int b = 10;
     printf("%u", lcm(a, b));
     return (0);
 }