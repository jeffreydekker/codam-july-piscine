/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 17:34:06 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/24 13:23:26 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < 32)
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

// int main(void)
// {
// 	char s[] = " ";
// 	ft_str_is_printable(s);
// 	printf("%d", ft_str_is_printable(s));
// }