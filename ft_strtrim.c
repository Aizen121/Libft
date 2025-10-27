/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:12:42 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/26 18:25:09 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	i = 0;
	start = 0;
	end = strlen(s1);
	while (s1[start] && strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && strchr(set, s1[end - 1]) != NULL)
		end--;
	str = (char *)malloc(sizeof(char *) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	d[40] = "Hello World";

	printf("%s", ft_strtrim(d, "Hde "));
	return (0);
}*/
