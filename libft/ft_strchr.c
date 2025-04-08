/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 10:03:26 by brunmigu          #+#    #+#             */
/*   Updated: 2025/03/22 10:07:02 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>
char	*ft_strchr(char *str, int chr)
{
	while (*str)
	{
		if (*str == (char)chr)
			return (str);
		str++;
	}
	return ((char *) '\0');
}
/*
int	main(void)
{
	char	*str = "Hello, World";
	int	chr = 'y';

	printf("42:%s\n",ft_strchr(str, chr));
  //printf("string.h:%s\n",strchr(str, chr));
}
*/
