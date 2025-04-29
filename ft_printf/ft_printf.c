/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 23:24:43 by brunmigu          #+#    #+#             */
/*   Updated: 2025/04/23 23:25:13 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	printf(const char *str, ...)
{
	int		counter;
	va_list	args;

	va_start(args, str);
	va_end(args);
	counter = 0;
	while (str[counter])
	{
		if (str[counter] == '%' && str[counter + 1] != '\n')
		{
      
		}
		else
		{

		}
	}
}
