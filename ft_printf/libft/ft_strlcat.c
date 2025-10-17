/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:53:50 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/09 11:44:46 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;
	size_t	dest_size;

	i = 0;
	dest_size = 0;
	src_size = 0;
	while (src[src_size])
		src_size++;
	while (dest_size < size && dst[dest_size])
		dest_size++;
	if (size <= dest_size)
		return (size + src_size);
	while ((dest_size + i + 1 < size) && src[i])
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	if (dest_size + i < size)
		dst[dest_size + i] = '\0';
	return (src_size + dest_size);
}
/*
#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

int main(void)
{
    char buffer1[50] = "Hello";
    char buffer2[50] = "World";
    char buffer3[50] = "OverlapExample";
    char buffer6[50] = "OverlapExample";
    char buffer4[50] = "";
    char buffer5[50] = "Short";
    size_t result;

    printf("===== NORMAL CASE =====\n");
    result = ft_strlcat(buffer1, buffer2, sizeof(buffer1));
    printf("Result: %zu | dest: \"%s\"\n\n", result, buffer1);

    printf("===== SIZE SMALLER THAN DEST =====\n");
    strcpy(buffer1, "Hello");
    result = ft_strlcat(buffer1, buffer2, 3);
    printf("Result: %zu | dest: \"%s\"\n\n", result, buffer1);

    printf("===== EMPTY SRC =====\n");
    strcpy(buffer1, "Hello");
    result = ft_strlcat(buffer1, "", sizeof(buffer1));
    printf("Result: %zu | dest: \"%s\"\n\n", result, buffer1);

    printf("===== EMPTY DEST =====\n");
    strcpy(buffer4, "");
    result = ft_strlcat(buffer4, "World", sizeof(buffer4));
    printf("Result: %zu | dest: \"%s\"\n\n", result, buffer4);

    printf("===== SRC BEGINS INSIDE DEST (OVERLAP) =====\n");
    strcpy(buffer3, "OverlapExample");
    result = ft_strlcat(buffer3, buffer3 + 7, sizeof(buffer3));
    printf("Result: %zu | dest: \"%s\"\n", result, buffer3);
    printf("⚠️ Note: Behavior undefined due to overlap.\n\n");
    
	printf("===== ORG BEGINS INSIDE DEST (OVERLAP) =====\n");
    strcpy(buffer3, "OverlapExample");
    result = strlcat(buffer6, buffer6 + 7, sizeof(buffer6));
    printf("Result: %zu | dest: \"%s\"\n", result, buffer6);
    printf("⚠️ Note: Behavior undefined due to overlap.\n\n");


    printf("===== DEST BEGINS INSIDE SRC (OVERLAP) =====\n");
    strcpy(buffer3, "OverlapExample");
    result = ft_strlcat(buffer3 + 7, buffer3, sizeof(buffer3) - 7);
    printf("Result: %zu | dest: \"%s\"\n", result, buffer3 + 7);
    printf("⚠️ Note: Behavior undefined due to overlap.\n\n");

    printf("===== DEST == SRC =====\n");
    strcpy(buffer5, "Short");
    result = ft_strlcat(buffer5, buffer5, sizeof(buffer5));
    printf("Result: %zu | dest: \"%s\"\n", result, buffer5);
    printf("⚠️ Note: Behavior undefined due to identical pointers.\n\n");

    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h> // For systems that need it
#include <stdlib.h>

// Helper function to reset buffers
void reset_buffers(char *dst1, char *dst2, 
const char *src_init, const char *dest_init) {
    strcpy(dst1, dest_init);
    strcpy(dst2, dest_init);
}

// Compare and print result
void test_case(const char *src_init, const char *dest_init, size_t size) {
    char dst1[100], dst2[100];
    reset_buffers(dst1, dst2, src_init, dest_init);

    size_t ret_std = strlcat(dst1, src_init, size);
    size_t ret_ft  = ft_strlcat(dst2, src_init, size);

    printf("=== Test ===\n");
    printf("src = \"%s\", dest = \"%s\", size = %zu\n", 
	src_init, dest_init, size);
    printf("[std] ret = %zu, result = \"%s\"\n", ret_std, dst1);
    printf("[ft_] ret = %zu, result = \"%s\"\n", ret_ft, dst2);

    if (ret_std != ret_ft || strcmp(dst1, dst2) != 0) {
        printf("❌ Mismatch!\n\n");
    } else {
        printf("✅ Match\n\n");
    }
}

int main() {
    test_case("abc", "123", 0);           // size = 0
    test_case("abc", "123", 2);           // size < strlen(dest)
    test_case("abc", "123", 3);           // size == strlen(dest)
    test_case("abc", "123", 6);           // size == strlen(dest) + strlen(src)
    test_case("abc", "123", 10);          // size > strlen(dest) + strlen(src)
    test_case("", "123", 5);              // empty src
    test_case("abc", "", 5);              // empty dest
    test_case("", "", 1);                 // both empty, size = 1
    test_case("abc", "123", 1);           // only space for '\0'
    test_case("abcdefghijklmnopqrstuvwxyz", "12345", 10);  // truncate src

    return 0;
}
*/
