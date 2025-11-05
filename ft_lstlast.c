/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 22:49:25 by amaazouz          #+#    #+#             */
/*   Updated: 2025/11/04 23:44:48 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

// int	main(void)
// {
// 	t_list	*lst = NULL;

// 	ft_lstadd_front(&lst, ft_lstnew("Hello"));
// 	ft_lstadd_front(&lst, ft_lstnew("word"));
// 	ft_lstadd_front(&lst, ft_lstnew("!!"));
// 	printf("%s", (char *)ft_lstlast(lst)->content);
// 	return (0);
// }