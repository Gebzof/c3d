/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c3d.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpichon <gpichon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:10:02 by gebz              #+#    #+#             */
/*   Updated: 2025/04/16 12:12:08 by gpichon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C3D_H
# define C3D_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <math.h>

# include "../minilibx-linux/mlx.h"
# include "../libft/libft.h"




typedef struct s_mlx
{
	void	*mlx;
	void	*win;
}	t_mlx;

typedef struct s_game
{
	char	**tab;
	t_mlx	mlx;
	// autres param possible
}	t_game;

// main
int		main(int ac, char **av, char **env);

// init
void	init_all_value(t_game	*game);

// build
void	build_map(t_game *game, int fd);
char	*get_next_line(int fd);

// utils
void	error(char *str);

#endif