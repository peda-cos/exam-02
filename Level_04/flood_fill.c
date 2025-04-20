/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:53:07 by peda-cos          #+#    #+#             */
/*   Updated: 2025/04/19 22:53:08 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_point
{
	int	x;
	int	y;
}		t_point;

void	fill_adjacent(char **tab, t_point size, t_point current, char target)
{
	t_point	up;
	t_point	right;
	t_point	down;
	t_point	left;

	if (current.y < 0 || current.y >= size.y || current.x < 0
		|| current.x >= size.x)
	{
		return ;
	}
	if (tab[current.y][current.x] != target)
	{
		return ;
	}
	tab[current.y][current.x] = 'F';
	up = {current.x, current.y - 1};
	right = {current.x + 1, current.y};
	down = {current.x, current.y + 1};
	left = {current.x - 1, current.y};
	fill_adjacent(tab, size, up, target);
	fill_adjacent(tab, size, right, target);
	fill_adjacent(tab, size, down, target);
	fill_adjacent(tab, size, left, target);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	target;

	target = tab[begin.y][begin.x];
	fill_adjacent(tab, size, begin, target);
}
