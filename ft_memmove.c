/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:24:12 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/29 21:52:54 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*str;

	i = 0;
	dst = (unsigned char *) dest;
	str = (const unsigned char *) src;
	if (dst <= str)
	{
		while (i < n)
		{
			dst[i] = str[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			dst[n] = str[n];
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	s1[40] = "0123456789";
	char	s2[40] = "0123456789";
	memmove(s2, s2 + 5, 27);
	ft_memmove(s1, s1 + 5, 27);

	printf("%s\n", s1);
	printf("%s\n", s2);
	return (0);
}*/