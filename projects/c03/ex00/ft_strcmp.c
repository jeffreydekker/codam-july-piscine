/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 16:16:10 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/26 15:51:41 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] && s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] || s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	s1[i] = '\0';
	s2[i] = '\0';
	return (0);
}

// int main()
// {
// 	char s1[100] = "Yes";
//     char s2[100] = "No";
//     ft_strcmp(s1, s2);
//     printf("%i", ft_strcmp(s1, s2));
//     printf("\n");
//     printf("%i", strcmp(s1, s2));
// }
