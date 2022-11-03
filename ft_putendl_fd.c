/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbessard <bbessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:45:56 by bbessard          #+#    #+#             */
/*   Updated: 2022/11/03 16:02:33 by bbessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Écrit la chaîne de caractères 's' sur le descripteur de fichier donné suivie 
d'un retour à la ligne.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
