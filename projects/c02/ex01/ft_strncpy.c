/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/17 15:12:52 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/25 13:41:38 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	unsigned int	n;

// 	char 	src[100] = "Ciao";
// 	char	dest[100] = "Hell";

// 	ft_strncpy(dest, src, 2);
// 	printf("%s", dest);
// 	return 0;
// }
