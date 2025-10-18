/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:09:36 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/14 19:09:52 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	d[10] = "Loaa";
	char	v[10] = "Lobb";
	printf("%d", ft_strncmp(d, v, 2));
	return (0);
}*/
