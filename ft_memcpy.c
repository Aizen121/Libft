/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:23:40 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/18 17:43:45 by amaazouz         ###   ########.fr       */
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
	while (n > 0)
	{
		dst[i] = str[i];
		i++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char d[40] = "d";

	ft_memcpy(d, "momo", 12);
	printf("%s", d);
	return (0);
}*/	
