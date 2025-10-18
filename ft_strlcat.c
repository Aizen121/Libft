/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 16:51:41 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/16 20:03:21 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = strlen(dst);
	src_len = strlen(src);
	if (size == 0)
		return (src_len);
	if (size - 1 < dst_len)
		return (src_len + size);
	while (src[i] && dst_len + i < size - 1)
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (src_len + dst_len);
}
/*
int	main(void)
{
	char	d[40] = "dodo";
	size_t	v;
	
	v = ft_strlcat(d, "Yaourt", 29);
	printf("%zu", v);
	printf("%s", d);
}*/
