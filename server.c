/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:12:52 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/20 12:58:57 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	binarytodec(int signal)
{
	static int	i;
	static char	c;

	c = (c | (signal - SIGUSR1));
	i++;
	if (i == 8)
	{
		write(1, &c, 1);
		i = 0;
		c = 0;
	}
	else
		c = c << 1;
}

int	main(void)
{
	char	*ptr;

	ptr = ft_itoa(getpid());
	write(1, ptr, len(getpid()));
	free(ptr);
	write(1, "\n", 1);
	while (1)
	{
		signal(SIGUSR1, binarytodec);
		signal(SIGUSR2, binarytodec);
		usleep(1000);
	}
	return (0);
}
