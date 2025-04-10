/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:01:48 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/10 18:07:51 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isspace(int c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}
int	ft_atoi(const char *nptr)
{
	int	counter;
	int	sign;
	int	nbr;

	counter = 0;
	sign = 1;
	nbr = 0;
	while (isspace(*nptr))
	{
		nptr++;
	}
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
		{
			sign *= -1;
		}
		nptr++;
	}
	while (*nptr && *nptr >= 48 && *nptr <= 57)
	{
		nbr *= 10;
		nbr += *nptr - 48;
		nptr++;
	}
	return (nbr * sign);
}

/*
#include <stdio.h>

int	main(void)
{
	int res;
	char *nbrs = "+548";
	res = ft_atoi(nbrs);
	printf("%d\n", res);
	return (0);
}*/
