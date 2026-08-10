/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_menu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 00:14:09 by romasant          #+#    #+#             */
/*   Updated: 2026/08/09 19:21:46 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

void	ft_aff_menu(int result)
{
	ft_putstr(" ---------------------------------------------------------\n");
	ft_putstr("|             Bienvenue dans le jeu de la vie             |\n");
	ft_putstr("|   Fait ton choix :                                      |\n");
	ft_putstr("|                                                         |\n");
	ft_putstr("|   1) Lancer une simulation                              |\n");
	ft_putstr("|   2) Generation map random                              |\n");
	ft_putstr("|   3) Quitter                                            |\n");
	ft_putstr(" ---------------------------------------------------------\n");
	if (result == -1)
		ft_putstr("Erreur: tu ne peux que mettre 1, 2 ou 3\n");
}
