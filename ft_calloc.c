/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:09:39 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/28 14:31:09 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (size != 0 && nmemb > 2147483647 / size)
		return (NULL);
	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	ft_bzero (str, nmemb * size);
	return (str);
}
/*
int	main(void)
{
	char	*d = "dodode";

	d = ft_calloc(0, 0);
	ft_memset(d, 'x', 2);
	printf("%s", d);
	free(d);
	return (0);
}*/