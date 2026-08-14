/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 20:41:47 by romasant          #+#    #+#             */
/*   Updated: 2026/08/14 22:46:26 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

void	ft_aff_tab(char **tab, int size)
{
	int (i) = 0;
	int (j) = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			ft_putchar(tab[i][j]);
			ft_putstr("  ");
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
