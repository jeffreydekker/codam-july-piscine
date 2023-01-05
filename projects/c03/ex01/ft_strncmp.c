/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 19:14:28 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/26 16:29:47 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((i < n && (s1[i]) != '\0') || s2[i] != '\0')
		return (s1[i] - s2[i]);
	return (0);
}

// int main(void)
// {
//     int n; 

//     n = 2; 
//     char s1[] = "Hello";
//     char s2[] = "Bello";

//     printf("%i", ft_strncmp(s1, s2, n));
// 	printf("\n");
// 	printf("%i", strncmp(s1, s2, n));
// }
