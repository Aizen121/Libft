/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:24:12 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/18 17:38:38 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*str;

	i = 0;
	dst = (unsigned char *) dest;
	str = (const unsigned char *) src;
	if ((dst + n <= str) || (str + n <= dst))
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
	char	s1[20] = "123456789";
	char	s2[20] = "123456789";
	memmove(s2 + 2, s2, 7);
	ft_memmove(s1 + 2, s1, 7);

	printf("%s\n", s1);
	printf("%s\n", s2);
	return (0);
}*/
