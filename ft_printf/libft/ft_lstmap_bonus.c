/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 03:14:13 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/11 16:32:29 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;
	void	*cont;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		cont = f(lst->content);
		temp = ft_lstnew(cont);
		if (!temp)
		{
			del(cont);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Helper to print the content of a list
void    print_list(t_list *lst)
{
 while (lst)
 {
   printf("%s -> ", (char *)lst->content);
   lst = lst->next;
 }
 printf("NULL\n");
}

// Function to duplicate the string content (used with ft_lstmap)
void    *dup_content(void *content)
{
 return (ft_strdup((char *)content));
}

// Function to free content (used with ft_lstclear)
void    del_content(void *content)
{
 free(content);
}

int     main(void)
{
 // === Create Original List ===
 t_list *original = NULL;
 t_list *node1 = ft_lstnew(ft_strdup("one"));
 t_list *node2 = ft_lstnew(ft_strdup("two"));
 t_list *node3 = ft_lstnew(ft_strdup("three"));

 if (!node1 || !node2 || !node3)
 {
   printf("Memory allocation failed.\n");
   return (1);
 }

 ft_lstadd_back(&original, node1);
 ft_lstadd_back(&original, node2);
 ft_lstadd_back(&original, node3);

 printf("Original list:\n");
 print_list(original);

 // === Map the List ===
 t_list *mapped = ft_lstmap(original, dup_content, del_content);

 printf("\nMapped list (duplicated strings):\n");
 print_list(mapped);

 // === Cleanup ===
 ft_lstclear(&original, del_content);
 ft_lstclear(&mapped, del_content);

 return (0);
}
*/
