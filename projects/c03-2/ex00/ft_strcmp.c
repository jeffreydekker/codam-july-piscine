/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 16:16:10 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/27 15:25:10 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	char s1[100] = "Hella";
//     char s2[100] = "Hellb";
//     ft_strcmp(s1, s2);
//     printf("%i", ft_strcmp(s1, s2));
//     printf("\n");
//     printf("%i", strcmp(s1, s2));
// }
