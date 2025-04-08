/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 10:35:54 by brunmigu          #+#    #+#             */
/*   Updated: 2025/03/21 10:42:04 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}
/*
#include <stdio.h>
int main(void) {
  char *string;

  string = "Hello World!";
  printf("%d\n", ft_strlen(string));
}*/
