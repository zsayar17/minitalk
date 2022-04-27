/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozsayar <aozsayar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:12:57 by aozsayar          #+#    #+#             */
/*   Updated: 2022/04/20 12:54:39 by aozsayar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

int		len(int x);
char	*ft_itoa(int a);
int		ft_atoi(const char *str);
void	sendbitb(int pid, unsigned char *str);
void	binarytodec(int signal);

#endif
