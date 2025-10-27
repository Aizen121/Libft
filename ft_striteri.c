/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 21:21:42 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/26 22:00:10 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	ft_fonction(unsigned int i, char *c)
{
	while (c[i])
	{
		if (i % 2 == 0)
			c[i] += 1;
		else
			c[i] += 2;
		i++;
	}
}

int	main(void)
{
	char	src[20] = "dodo bibl";

	ft_striteri(src, &ft_fonction);
	printf("%s", src);
}*/
