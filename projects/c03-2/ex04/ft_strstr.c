/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 19:22:49 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/27 17:18:03 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	pos;
	int	size;

	i = 0;
	j = 0;
	size = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		j = 0;
		pos = i;
		while (str[i] == to_find[j])
		{
			i++;
			j++;
		}
		if (j == size)
			return (&str[pos]);
		i++;
	}
	return (0);
}

// int main()
// {
//     char str[] = "Hello world, you are amazing"; 
//     char to_find[] = "you";

//     printf("%s", ft_strstr(str, to_find));
// 	printf("\n");
//     printf("%s", strstr(str, to_find));
// }
