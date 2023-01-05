/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 12:35:59 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/24 12:36:08 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 124))
			i++;
		else
			return (0);
	}
	return (1);
}

// int main(void)
// {
// 	char s[] = "sdfdsfds7";
// 	ft_str_is_alpha(s);
// 	printf("%d", ft_str_is_alpha(s));
// }
