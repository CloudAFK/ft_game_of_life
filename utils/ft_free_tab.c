/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 12:56:34 by romasant          #+#    #+#             */
/*   Updated: 2026/08/14 22:40:20 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

void	ft_free_tab(char **tab, int size)
{
	int (i) = 0;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
