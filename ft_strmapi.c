/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 19:52:35 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/31 13:25:33 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	ft_fonction(unsigned int i, char c)
{
	if (c == ' ')
		return ('b');
	if (i % 2 == 0)
		return (c + 1);
	else
		return (c);
}

int	main(void)
{
	char	*src = "ab cde";
	char	*res;
	
	printf("Original : %s\n", src);
	res = ft_strmapi(src, &ft_fonction);
	printf("original: %s\n", src);
	printf("new: %s\n", res);
	return (0);
}*/
