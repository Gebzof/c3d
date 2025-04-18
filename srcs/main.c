/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpichon <gpichon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 15:10:05 by gebz              #+#    #+#             */
/*   Updated: 2025/04/16 12:12:18 by gpichon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/c3d.h"

int	main(int ac, char **av, char **env)
{
	t_game	game;
	int		fd;

	if (ac != 2 || !env)
		return (error("argument"), 0);
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		error("open");
	init_all_value(&game);
	build_map(&game, fd);
	close(fd);
	game.mlx.mlx = mlx_init();
	if (!game.mlx.mlx)
		exit(1);
	game.mlx.win = mlx_new_window(game.mlx.mlx, 32, 32, "cub3d");
	mlx_loop(game.mlx.mlx);
}
