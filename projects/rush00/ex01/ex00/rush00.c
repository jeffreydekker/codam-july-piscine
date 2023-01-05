/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush00.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: evoronin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 12:18:15 by evoronin      #+#    #+#                 */
/*   Updated: 2022/07/09 17:05:56 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	get_shape (int	pos_x, int	pos_y, int	x, int	y){
	if(pos_x == 1 && pos_y == 1){
		return ('o');
	}
	if(pos_x == x && pos_y == 1){
		return ('o');
	}
	if(pos_x == 1 && pos_y == y){
		return ('o');
	}
	if(pos_x == x && pos_y == y){
		return('o');
	}
	if(pos_x > 1 && pos_x < x){
		if(pos_y == 1 || pos_y == y){
			return('-');
		}
		else{
			return (' ');
		}
	}
	return('|');
}

void 	rush(int x, int y){
	int		pos_x = 1;
	int		pos_y = 1;

	if(x < 0 || y < 0){
		ft_putchar('N');
		ft_putchar('o');
		ft_putchar('\n');
	}
	else{
		while (pos_y <= y){
			while(pos_x <= x){
			ft_putchar(get_shape(pos_x, pos_y, x, y));
			pos_x++;
			}	
			ft_putchar('\n');
			pos_x = 1;
			pos_y++;
		}
	}
}