/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:12:46 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/20 12:40:44 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "minitalk_bonus.h"

int	len(int x)
{
	int	counter;

	counter = 0;
	while (x)
	{
		counter++;
		x /= 10;
	}
	return (counter);
}

char	*ft_itoa(int a)
{
	int		counter;
	char	*ptr;

	counter = len(a);
	ptr = (char *)malloc(sizeof(char) * counter + 1);
	ptr[counter] = '\0';
	while (a)
	{
		ptr[counter - 1] = '0' + (a % 10);
		a /= 10;
		counter--;
	}
	return (ptr);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	a;
	int	tmp;

	i = 0;
	a = 1;
	tmp = 0;
	while (str[i] == ' ' || (str[i] <= '\r' && str[i] >= '\t'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			a *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = tmp * 10 + str[i] - 48;
		i++;
	}
	return (tmp * a);
}
