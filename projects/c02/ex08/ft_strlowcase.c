/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 13:39:49 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/25 19:48:20 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char s[] = "HeLlO";
// 	ft_strupcase(s);
// 	printf("%s", ft_strlowcase(s));
// }