/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 19:22:49 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/26 16:13:12 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str != '\0')
	{
		if (*str == *to_find)
		{
			while (str[i] == to_find[i])
			i++;
		}
		if (to_find[i] == '\0')
			return (str);
		else
			i = 0;
		break ;
		str++;
	}
}

// int main()
// {
//     char dest[] = "Hello";
//     char src[] = "Bello";

//     printf("%s", ft_strstr(dest, src));
//     printf("%s", strstr(dest, src));
// }
