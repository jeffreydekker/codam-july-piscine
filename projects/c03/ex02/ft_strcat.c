/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 19:16:30 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/26 16:03:40 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	i++;
	while (src[i] != '\0')
	{
		dest[i] = '\0';
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
//     char dest[] = "Hello";
//     char src[] = "Bello";

//     printf("%s", ft_strcat(dest, src));
//     printf("\n");
//     printf("%s", strcat(dest, src));
// }