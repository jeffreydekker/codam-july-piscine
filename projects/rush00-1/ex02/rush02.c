/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush02.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: evoronin <evoronin@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/10 14:56:31 by evoronin      #+#    #+#                 */
/*   Updated: 2022/07/10 14:57:59 by evoronin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	get_shape(int pos_x, int pos_y, int x, int y)
{
	if (pos_y == 1)
	{
		if (pos_x == 1 || pos_x == x)
		{
			return ('A');
		}
	}
	if (pos_y == y)
	{
		if (pos_x == 1 || pos_x == x)
		{
			return ('C');
		}
	}
	if (pos_x > 1 && pos_x < x && pos_y > 1 && pos_y < y)
	{
		return (' ');
	}
	return ('B');
}

void	rush(int x, int y)
{
	int	pos_x;
	int	pos_y;

	pos_x = 1;
	pos_y = 1;
	while (pos_y <= y)
	{
		while (pos_x <= x)
		{
			ft_putchar(get_shape(pos_x, pos_y, x, y));
			pos_x++;
		}
		ft_putchar('\n');
		pos_x = 1;
		pos_y++;
	}
}
