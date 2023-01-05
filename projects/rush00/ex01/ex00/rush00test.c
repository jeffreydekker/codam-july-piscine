/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush00test.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: evoronin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 12:18:15 by evoronin      #+#    #+#                 */
/*   Updated: 2022/07/09 14:59:51 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		pos_x = 1;
	int		pos_y = 1;

	while (pos_y <= y){
		while(pos_x <= x){
		ft_putchar('O');
		pos_x++;
		}
		ft_putchar('\n');
		pos_x = 1;
		pos_y++;
	}
}
