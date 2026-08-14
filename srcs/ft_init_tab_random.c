/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab_random.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 22:15:03 by romasant          #+#    #+#             */
/*   Updated: 2026/08/14 22:46:18 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

char	**ft_init_tab_random(int size)
{
	srand(time(NULL));
	int (i) = 0;
	int (j) = 0;
	int (nb_random) = 0;
	char	**tab;

	tab = malloc(sizeof(char *) * (size));
	while (i < size)
	{
		tab[i] = malloc(sizeof(char) * (size));
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			nb_random = rand() % 2;
			if (nb_random == 0)
				tab[i][j] = '.';
			else
				tab[i][j] = '#';
			j++;
		}
		i++;
	}
	return (tab);
}
