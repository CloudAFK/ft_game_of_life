/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_welcome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 23:47:44 by romasant          #+#    #+#             */
/*   Updated: 2026/08/09 16:01:57 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

int	ft_read_choice(char c)
{
	int (rep) = ft_only_num(c);
	//printf("\nValeur du return : %d\n", rep);
	if (rep != 1)
		return (1);
	return (0);
}

int	ft_welcome(void)
{
	char	buff[3];
	int (result) = 0;
	int (close) = 0;

	while (close == 0)
	{
		write(1, "\033[H\033[2J\033[3J", 11);
		ft_aff_menu(result);
		read(0, buff, 2);
		result = ft_read_choice(buff[0]);
		if (result != 1)
			close = 1;
	}
	return (close);
}
