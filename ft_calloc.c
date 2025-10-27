/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:09:39 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/20 17:10:05 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	if (size == 0 || nmemb == 0)
	{
		str = malloc(0);
		return (str);
	}
	str = malloc(size * nmemb);
	bzero (str, nmemb * size);
	return (str);
}
/*
int	main(void)
{
	char	*d = "dodode";

	d = ft_calloc(0, 4);
	memset(d, 'x', 10);
	printf("%s", d);
	free(d);
	return (0);
}*/
