/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list_func.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 12:18:34 by owen          #+#    #+#                 */
/*   Updated: 2024/10/22 11:15:32 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	if (del)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			(*lst) = temp;
		}
	}
	*lst = NULL;
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

t_list	*new_node(char	*content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
