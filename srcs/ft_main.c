/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 23:46:34 by romasant          #+#    #+#             */
/*   Updated: 2026/08/10 12:50:20 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

int	main(void)
{
	int (rep) = 0;
	int (flag) = 0;
	rep = ft_welcome();
	while (flag == 0)
	{
		if (rep == 1)
		{
			ft_putstr("En construction ...\n");
			rep = ft_welcome();
		}
		else if (rep == 2)
		{
			ft_simulation();
			flag = 1;
		}
		else if (rep == 3)
		{
			ft_putstr("Au revoir ! On se revoit bientot XD\n");
			flag = 1;
		}
	}
	return (0);
}
