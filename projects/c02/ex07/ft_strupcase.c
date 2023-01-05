/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdekker <jdekker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/20 13:16:16 by jdekker       #+#    #+#                 */
/*   Updated: 2022/07/25 15:30:15 by jdekker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char s[] = "HeLlO";
// 	ft_strupcase(s);
// 	printf("%s", ft_strupcase(s));
// }