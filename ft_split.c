/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:25:34 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/25 16:17:13 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	countword(char *s, char c)
{
	size_t	i;
	size_t	count;
	
	i = 0;
	count = 0;
	if (!s[i])
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

char	*fill_word(char *s, char c, size_t n)
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

char	**ft_split(char *s, char c)
{
	int	count_word;
	size_t	i;
	size_t	len;
	size_t	k;
	char	**ptr;

	i = 0;
	k = 0;
	count_word = countword(s, c);
	ptr = (char **)malloc(sizeof(char *) * count_word);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[k] = fill_word(s, c, i);
		len = strlen(ptr[k]);
		i += len;
		k++;
	}
	ptr[k] = NULL;
	if (!ptr)
		return (NULL);
	return (&*ptr);
}

int	main(void)
{
	char	d[40] = "    je ne veux pas    perdre";
	char	**l;
	
	l = ft_split(d, ' ');
	printf("%s", l[10]);
	return (0);
}
