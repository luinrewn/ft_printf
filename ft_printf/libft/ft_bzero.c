/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:55:37 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/06 17:52:54 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ss;
	unsigned char	c;

	c = '\0';
	ss = (unsigned char *)s;
	while (n--)
		*ss++ = c;
}
/*
//s += i++;
//n!=0
// *ss
// *ss++;
#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[] = "String";
    ft_bzero(str, 1);

    for (int i = 0; i < 6; i++)  // length of "String" is 6 (without null)
    {
        if (str[i] == '\0')
            printf("\\0 ");
        else
            printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}
*/
