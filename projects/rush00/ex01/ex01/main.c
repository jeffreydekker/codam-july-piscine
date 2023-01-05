/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/10 11:37:15 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/10 15:06:20 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rush(int x, int y);

char    mat_pos(int pos_x, int pos_y, int x, int y);

int     main()
{
    rush(2, 3);
    return(0);
}