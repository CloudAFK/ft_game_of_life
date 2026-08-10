/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 23:34:07 by romasant          #+#    #+#             */
/*   Updated: 2026/08/10 12:54:21 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

char	**ft_init_tab(void)
{
	char	**tab;

	int (i) = 0;
	int (j) = 0;
	tab = malloc(sizeof(char *) * 16);
	while (i <= 15)
	{
		j = 0;
		tab[i] = malloc(sizeof(char) * 16);
		while (j <= 15)
		{
			tab[i][j] = '.';
			ft_putchar(tab[i][j]);
			ft_putstr("  ");
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\n');
	return (tab);
}
