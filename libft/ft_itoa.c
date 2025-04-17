/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:15:14 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/15 17:16:40 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_int_len(int n);
char	*ft_itoa(int n)
{
	char	*result;
	long	nbr;
	int		nbr_len;

	nbr = n;
	nbr_len = ft_int_len(n);
	result = ft_calloc(nbr_len + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		nbr *= -1;
		result[0] = '-';
		nbr_len -= 1;
	}
	while (nbr_len > 0)
	{
		result[--nbr_len] = (n % 10) + 48;
		n /= 10;
	}
	return (result);
}

int	ft_int_len(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		counter = 1;
	}
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

int	main(void)
{
	int		nbr;
	char	*str;

	nbr = -1234;
	str = ft_itoa(nbr);
	printf("%s", str);
	free(str);
}
