/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_cellule.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 13:20:37 by romasant          #+#    #+#             */
/*   Updated: 2026/08/21 15:04:13 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

/*
int	ft_apply_rules(char **tab)
{
 // a faire apres avoir regle le bug XD
}
*/
int	ft_count_neighbors(char **tab, int x, int y, int size)
{
	int (i) = 0;
	int (j) = -1;
	int (x_actuel) = 0;
	int (y_actuel) = 0;
	int (count_neighbors) = 0;
	while (j <= 1)
	{
		i = -1;
		while (i <= 1)
		{
			x_actuel = x + i;
			y_actuel = y + j;
			if (!(i == 0 && j == 0) && ((x_actuel >= 0 && x_actuel < size)
				&& (y_actuel >= 0 && y_actuel < size)))
			{
				printf("- Voici la position recherche : %d %d\n", x_actuel, y_actuel);
				if (tab[x_actuel][y_actuel] == '#')
					count_neighbors++;
			}
			i++;
		}
		j++;
	}
	return (count_neighbors);
}
// vivante ou morte ->
int	ft_struct_cellule(char **tab, int x, int y, int size)
{
	int (result) = 0;

	printf("\nVoici le nombre de case autour de %d %d :\n", x, y);
	result = ft_count_neighbors(tab, x, y, size);
	printf("Total : %d\n", result);
	return (0);
}
/*
cellule actuelle
      ↓
compter les voisines
      ↓
appliquer les règles
      ↓
résultat : vivante / morte
      ↓
cellule.next
*/
