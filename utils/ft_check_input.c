/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 23:04:38 by romasant          #+#    #+#             */
/*   Updated: 2026/08/21 20:11:06 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_game_of_life.h"

int	ft_check_input(char *buff)
{
	int (i) = 0;
	int (flag) = 0;
	int (nb_chiffre) = 0;
	char (trash) = 0;
	while (buff[i] != '\0' && buff[i] != '\n')
	{
		if (!ft_isdigit(buff[i]))
			flag = 1;
		else
			nb_chiffre++;
		i++;
	}
	if (buff[i] != '\n')
	{
		while (trash != '\n' && read(0, &trash, 1) > 0)
			;
	}
	if (flag == 1 || nb_chiffre == 0 || nb_chiffre > 2)
		return (0);
	return (1);
}
