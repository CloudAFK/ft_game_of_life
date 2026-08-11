/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab_map1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 22:15:03 by romasant          #+#    #+#             */
/*   Updated: 2026/08/11 22:15:05 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

char	**ft_init_tab_map1(void)
{
	char	**tab;
	int		i;
	int		j;

	tab = malloc(sizeof(char *) * 16);
	i = 0;
	while (i < 16)
	{
		tab[i] = malloc(sizeof(char) * 16);
		j = 0;
		while (j < 16)
		{
			tab[i][j] = '.';
			j++;
		}
		i++;
	}
	tab[5][5] = '#';
	tab[5][6] = '#';
	tab[6][5] = '#';
	tab[6][6] = '#';
	return (tab);
}
