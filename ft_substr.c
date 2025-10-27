/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:15:46 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/20 19:50:37 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	size_t	i;
	char	*str;

	l = strlen(s) - start;
	i = 0;
	if (!s)
		return (NULL);
	if (start > strlen(s))
	{
		str = malloc(0);
		return (str);
	}
	if (l >= len)
		l = len;
	str = (char *)malloc(sizeof(char) * (l + 1));
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	d[20] = "abcdefgh";

	printf("%s", ft_substr(d, 3, 10));
	return (0);
}*/
