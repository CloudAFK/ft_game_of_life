/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_of_life.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 17:50:55 by romasant          #+#    #+#             */
/*   Updated: 2026/08/11 18:44:35 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GAME_OF_LIFE_H
# define FT_GAME_OF_LIFE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	**ft_init_tab(void);
int		ft_welcome(void);
int		ft_only_num(char c);
void	ft_aff_menu(int result);
int		ft_simulation(void);
void	ft_free_tab(char **tab);
int		ft_struct_cellule(char **tab, int x, int y);
int		ft_count_neighbors(char **tab, int x, int y);
typedef struct s_cellule
{
	int	vivante;
	int	next;
}			t_cellule;

#endif
