/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 19:08:57 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/09 16:38:41 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*arr;
	unsigned char	*p;
	size_t			temp;

	if (size == 0 || nmemb == 0)
	{
		arr = malloc(0);
		if (!arr)
			return (NULL);
		return (arr);
	}
	if (nmemb > (SIZE_MAX / size))
		return (NULL);
	temp = nmemb * size;
	arr = malloc(temp);
	if (!arr)
		return (NULL);
	p = arr;
	while (temp-- > 0)
		*p++ = 0;
	return (arr);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void *ft_calloc(size_t nmemb, size_t size);

// Function to print bytes in allocated memory (for debug)
void print_bytes(unsigned char *ptr, size_t size)
{
    for (size_t i = 0; i < size; i++)
        printf("%02X ", ptr[i]);
    printf("\n");
}

int main(void)
{
    printf("=== ft_calloc TEST ===\n");

    // Test 1: Allocate space for 5 integers
    size_t count = 5;
    size_t size = sizeof(int);
    int *arr = (int *)ft_calloc(count, size);

    if (!arr)
    {
        printf("Test 1 Failed: ft_calloc returned NULL\n");
        return (1);
    }

    printf("Test 1 Passed: Checking zero-initialization...\n");
    int passed = 1;
    for (size_t i = 0; i < count; i++)
    {
        if (arr[i] != 0)
        {
            printf("Test 1 Failed: arr[%zu] != 0\n", i);
            passed = 0;
        }
    }

    if (passed)
        printf("Test 1 Passed: All elements zero-initialized ✅\n");
    free(arr);

    // Test 2: Zero-size allocation
    void *zero_alloc = ft_calloc(0, sizeof(int));
    if (zero_alloc != NULL)
    {
        printf("Test 2 Passed: 0 size allocation returned !NULL pointer✅\n");
        free(zero_alloc);
    }
    else
    {
        printf("Test 2 Passed: Zero-size allocation returned NULL ✅\n");
    }

    // Test 3: Overflow check
    size_t large = (size_t)-1;
    void *overflow = ft_calloc(large, 2);
    if (overflow == NULL)
        printf("Test 3 Passed: Integer overflow correctly returned NULL ✅\n");
    else
    {
        printf("Test 3 Failed: Overflow test should return NULL ❌\n");
        free(overflow);
    }

    return 0;
}
*/
