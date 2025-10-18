/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:43:52 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/18 20:02:30 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;
	char			*res;

	ch = (unsigned char) c;
	i = 0;
	res = NULL;
	while (s[i])
	{
		if (s[i] == ch)
			res = ((char *)&s[i]);
		i++;
	}
	if (ch == '\0')
		res = ((char *)&s[i]);
	return (res);
}
/*
int	main(void)
{
	char	d[20] = "dodo";

	printf("%s", ft_strrchr(d, '\0'));
	return (0);
}*/
