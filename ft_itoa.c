/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaazouz <amaazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 22:14:15 by amaazouz          #+#    #+#             */
/*   Updated: 2025/10/30 12:51:47 by amaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenght(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	if (n == 0)
		count++;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;
	long	nb;

	ptr = (char *)malloc(sizeof(char) * (ft_lenght(n) + 1));
	nb = n;
	if (!ptr)
		return (NULL);
	ptr[ft_lenght(n)] = '\0';
	len = ft_lenght(n);
	if (nb < 0)
	{
		ptr[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		ptr[0] = '0';
	while (nb > 0)
	{
		len--;
		ptr[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (ptr);
}
// 
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(2147483649));
// 	return (0);
// }
