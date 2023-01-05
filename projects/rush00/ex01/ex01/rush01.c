/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/10 11:37:17 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/10 15:13:19 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

char     mat_pos(int pos_x, int pos_y, int x, int y)
{
    return(0);
}

void    rush(int x, int y)
{
    int pos_x = 1;
    int pos_y = 1;

    while(pos_y <= y)
    {
        while(pos_x <= x)
        {
            ft_putchar('o');
            x++;   
        }
        y++;
    }
}