/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:56:16 by amaazouz          #+#    #+#             */
/*   Updated: 2025/11/04 22:46:46 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*tmp;
	
	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return(i);
}
/*
int	main(void)
{
	t_list	*lst = NULL;

	ft_lstadd_front(&lst, ft_lstnew("Hello"));
	ft_lstadd_front(&lst, ft_lstnew("word"));
	ft_lstadd_front(&lst, ft_lstnew("!!"));
	printf("%d", ft_lstsize(lst));
	return (0);
}*/
