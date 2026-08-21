/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_menu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 00:14:09 by romasant          #+#    #+#             */
/*   Updated: 2026/08/21 15:30:44 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

void	ft_aff_menu(int result)
{
	write(1, "\033[H\033[2J\033[3J", 12);
	ft_putstr(" ---------------------------------------------------------\n");
	ft_putstr("|             Bienvenue dans le jeu de la vie             |\n");
	ft_putstr("|   Fait ton choix :                                      |\n");
	ft_putstr("|                                                         |\n");
	ft_putstr("|   1) Lancer une simulation random (16x16)               |\n");
	ft_putstr("|   2) Quitter                                            |\n");
	ft_putstr(" ---------------------------------------------------------\n");
	if (result == -1)
		ft_putstr("Erreur: tu ne peux que mettre 1 ou 2\n");
}
