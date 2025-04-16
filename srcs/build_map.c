/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpichon <gpichon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:45:21 by gpichon           #+#    #+#             */
/*   Updated: 2025/04/16 12:12:53 by gpichon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/c3d.h"

void	build_map(t_game *game, int fd)
{
	char	*line;
	int		len;
	(void)game;

	len = 0;
	line = get_next_line(fd);
	if (!line)
		error("jjjj");
}

char	*get_next_line(int fd)
{
	char	save[1500000];
	char	buff[1];
	int		i;

	i = 0;
	save[0] = '\0';
	while (read(fd, buff, 1) == 1)
	{
		save[i] = buff[0];
		save[i + 1] = '\0';
		if (save[i] == '\0')
			break ;
		i++;
	}
	if (save[0] == '\0')
		return (0);
	return (ft_strdup(save));
}
