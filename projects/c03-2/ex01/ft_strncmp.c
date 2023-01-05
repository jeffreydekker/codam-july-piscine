/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 19:14:28 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/27 17:20:14 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// int main(void)
// {
//     int n; 

//     n = 3; 
//     char s1[] = "abcdef";
//     char s2[] = "abcdef";

//     printf("%i", ft_strncmp(s1, s2, n));
// 	printf("\n");
// 	printf("%i", strncmp(s1, s2, n));
// }
