/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 19:22:46 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/26 16:35:16 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	i++;
	
	while (src[j] != '\0' && nb > j)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

    // int main()
    // {
    //     int n; 

    //     n = 3;
    //     char dest[] = "Hello";
    //     char src[] = "Bello";

    //     printf("%s", ft_strncat(dest, src, n));
    //     printf("%s", strncat(dest, src, n));
    // }