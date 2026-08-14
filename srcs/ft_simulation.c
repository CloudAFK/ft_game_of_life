/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simulation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 19:34:17 by romasant          #+#    #+#             */
/*   Updated: 2026/08/14 23:02:42 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

int	ft_simulation(void)
{
	int (size) = 0;
	char	**tab;
	char	buff[3];

	ft_putstr("Choisis la size de  ()ton tab (entre 2 a 99) :");
	read(0, buff, 2);
	if (!ft_check_input(buff))
	{
		ft_putstr("Erreur : Tu ne dois mettre que deux nombres dans le buffer");
		return (0);
	}
	size = atoi(buff);
	if (size < 2 || size > 99)
	{
		ft_putstr("Erreur: le nombre du tableau doit etre entre 0 et ");
		return (0);
	}
	tab = ft_init_tab_random(size);
	ft_aff_tab(tab, size);
	ft_free_tab(tab, size);
	return (0);
}
