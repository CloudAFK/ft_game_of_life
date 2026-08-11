/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simulation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 19:34:17 by romasant          #+#    #+#             */
/*   Updated: 2026/08/11 19:38:01 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

int	ft_simulation(void)
{
	char	**tab;
	int (x) = 0;
	int (y) = 0;

	tab = ft_init_tab();
	ft_struct_cellule(tab, x, y);
	/*
	while (x <= 15)
	{
		y = 0;
		while (y <= 15)
		{
			y++;
		}
		x++;
	}
	*/
	ft_free_tab(tab);
	return (0);
}
