/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: evoronin <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 12:14:39 by evoronin      #+#    #+#                 */
/*   Updated: 2022/07/10 15:36:54 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

char	get_shape(int pos_x, int pos_y, int x, int y);

int	main(void)
{
	rush(7, 3);
	return (0);
}
