/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simulation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 19:34:17 by romasant          #+#    #+#             */
/*   Updated: 2026/08/14 22:46:46 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

int	ft_simulation(void)
{
	//int (x) = 0;
	//int (y) = 0;
	int (size) = 0;
	char	**tab;
	char	buff[3];

	ft_putstr("Choisis la size de ton tab (max = 99) :");
	read(0, buff, 2);
	size = atoi(buff);
	tab = ft_init_tab_random(size);
	ft_aff_tab(tab, size);
	ft_free_tab(tab, size);
	return (0);
}
