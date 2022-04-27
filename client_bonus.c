/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:13:00 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/20 12:48:15 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	sendbit(int pid, unsigned char *str)
{
	int				i;
	unsigned char	c;

	while (*str)
	{
		i = 8;
		c = *str++;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(1000);
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc > 2)
		sendbit(ft_atoi(argv[1]), (unsigned char *)argv[2]);
	return (0);
}
