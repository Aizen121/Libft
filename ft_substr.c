/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:15:46 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/30 15:17:46 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	l = ft_strlen(s) - start;
	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (l >= len)
		l = len;
	str = (char *)malloc(sizeof(char *) * (l + 1));
	if (!str)
		return (NULL);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
//
// int	main(void)
// {
// 	char	d[20] = "d42d";

// 	printf("%s", ft_substr(d, 2, 8));
// 	return (0);
// }