/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:38:48 by amaazouz          #+#    #+#             */
/*   Updated: 2025/11/05 18:54:07 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{

	if (!lst || !new)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		ft_lstlast(*lst)->next = new;
	}
}
//
// int	main(void)
// {
// 	t_list	*lst = NULL;
// 	t_list  *last;
// 	ft_lstadd_front(&lst, ft_lstnew("Hello"));
// 	ft_lstadd_front(&lst, ft_lstnew("word"));
// 	ft_lstadd_front(&lst, ft_lstnew("!!"));
// 	ft_lstadd_back(&lst, ft_lstnew("dodo"));
// 	last = ft_lstlast(lst);
// 	printf("%s", (char *)last->content);
// 	return (0);
// }
