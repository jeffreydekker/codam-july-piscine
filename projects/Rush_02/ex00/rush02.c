/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush02.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ldu-ples <ldu-ples@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 12:06:20 by ldu-ples      #+#    #+#                 */
/*   Updated: 2022/07/23 20:19:16 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	ft_putstr(char *str)
{
	int	count;
	int	dp;

	count = 0;
	dp = 0;
	while (*str)
	{
		if (*str == ':')
			dp = 1;
		if (dp == 1)
		{
			if (*str >= '0' && *str <= '9')
				break ;
			else if (*str >= 'a' && *str <= 'z')
				write(1, str, 1);
		}
		str++;
		count++;
	}
}

int	ft_strcmp(char *s1, char *s2, int i)
{
	int	j;

	j = 0;
	while (s2[j] != '\0')
	{
		if (s1[i] != s2[j])
			return (1);
		i++;
		j++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (ft_strcmp(str, to_find, i) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

char	*add_zero(char c, int len)
{
	int	count;
	char	*str2;

	str2 = malloc(len + 1 + 1);
	count = 0;
	while (count < len)
	{
		if (count == 0)
			str2[count] = c;
		else
			str2[count] = '0';
		count++;
	}
	return (str2);
}

int	main(int argc, char **argv)
{
	int	fd;
	int	sz;

	char *c = malloc(690);
	fd = open("numbers.dict", O_RDONLY);
	// printf("fd = %d/n", fd);
	sz = read(fd, c, 690);
	c[sz] = '\0';
	// printf("Those bytes are as follows:\n%s\n", c);

	int	count;
	int	len;
	len = ft_strlen(argv[1]);
	// char	arg_str[100];

	count = 0;
	// if (argv[1] > "4294967295")
	// write(2, "Error\n", 6);
	// if (argv[1] < "0")
	// write(2, "Dict Error\n", 11);
	// if (argv[1][0] == 0)
	// write(1, "Zero\n", 5);
	if (argv[1][0] == '1' && len < 3)
	{
		char	*str;
		str = ft_strstr(c, argv[1]);
		ft_putstr(str);
	}
	else
		while (count < ft_strlen(argv[1]))
		{
			// printf("\n%c", argv[1][count]);
			char	*str;
		// 	// &argv[1][count];

			printf("\n%c %s", argv[1][count], add_zero(argv[1][count], len));

			// printf("\n%s", add_zero(argv[1][count], 1));

			if (argv[1][count] != '0')
			{
				// printf(" count: %i len: %i", count, len);
				if (count == 0 && len == 3)
				{
					// printf("%s", add_zero(argv[1][count], 1));
					str = ft_strstr(c, add_zero(argv[1][count], 1));
					ft_putstr(str);
					str = ft_strstr(c, add_zero(argv[1][count], 3));
					ft_putstr(str);
				}
				else
				{
					str = ft_strstr(c, add_zero(argv[1][count], len));
					ft_putstr(str);
				}
			}
			if (argv[1][0] == '0')
			{
				str = ft_strstr(c, argv[1]);
				ft_putstr(str);
			}
			// str = ft_strstr(c, add_zero(argv[1][count], len));
			// ft_putstr(str);
			
		// 	// // str = ft_strstr(c, "40");
		// 	// // write(1, " ", 1);
			count++;
			len--;
		}

	// char	dest[100] = "4";
	// char	src[] = "def";

	// printf("\n%s\n", add_zero('4', 2));
	// printf("%s\n", ft_strcat(dest, src));

	// add_zero('4', 2);

	// printf("%s\n", arg_str);

	
	

	// char	*str;
	// printf("\n%c", argv[1][1]);
	// str = ft_strstr(c, argv[1]);
	// str = ft_strstr(c, "40");
	// write(1, " ", 1);
	// ft_putstr(str);
	free(c);
}

