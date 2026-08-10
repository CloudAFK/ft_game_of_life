/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simulation.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 19:34:17 by romasant          #+#    #+#             */
/*   Updated: 2026/08/10 12:56:22 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

int	ft_simulation(void)
{
	char	**tab;
	tab = ft_init_tab();
	ft_free_tab(tab);
	return (0);
}
