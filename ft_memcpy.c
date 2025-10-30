/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:23:40 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/28 15:21:04 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *) src;
	dst = (unsigned char *) dest;
	while (n--)
	{
		dst[i] = str[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char d[40] = "diii";

	ft_memcpy(d, "momo", 1);
	printf("%s", d);
	return (0);
}*/
