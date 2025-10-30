/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:50:00 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/30 15:04:20 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countword(char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*fill_word(char *s, char c, size_t n)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*ptr;

	i = 0;
	start = n;
	if (!s)
		return (NULL);
	while (s[start] && s[start] == c)
		start++;
	end = start;
	while (s[end] && s[end] != c)
		end++;
	ptr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!ptr)
		return (NULL);
	while (start < end)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static void	*ft_free(char **s, size_t k)
{
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (i <= k)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	size_t	i;
	size_t	k;
	char	**ptr;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (countword(s, c) + 1));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] != c)
		{
			ptr[k] = fill_word(s, c, i);
			if (!ptr[k])
				return (ft_free(ptr, k));
			i += ft_strlen(ptr[k++]);
		}
		i++;
	}
	ptr[k] = NULL;
	return (ptr);
}
// 
// int	main(void)
// {
// 	char	**l;
// 	int		i;

// 	l = ft_split("hello!", ' ');
// 	i = 0;
// 	if (!l)
// 		return (0);
// 	while (l[i])
// 	{
// 		printf(">%s<\n", l[i]);
// 		i++;
// 	}
// 	ft_free(l, i);
// 	return (0);
// }
