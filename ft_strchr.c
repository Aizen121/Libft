/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:44:25 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/18 19:36:49 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

	ch = (unsigned char )c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (ch == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	d[20] = "dodo";

	printf("%p", ft_strchr(d, 'd'));
	return (0);
}*/
