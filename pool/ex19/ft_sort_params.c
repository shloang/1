/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 18:58:46 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/11/21 20:08:57 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putarg(int n, char **a)
{
	int		t;

	t = 1;
	while (t < n)
	{
		ft_putstr(a[t]);
		ft_putchar('\n');
		t++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		v;

	v = 0;
	while (*s1 == *s2 && s1 != 0)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		num;
	int		b;
	char	*c;

	num = 0;
	if (argc < 1)
		return (0);
	while (num < argc - 1)
	{
		while (b < argc - 1)
		{
			if (ft_strcmp(argv[b], argv[b + 1]) >= 0)
			{
				c = argv[b];
				argv[b] = argv[b + 1];
				argv[b + 1] = c;
			}
			b++;
		}
		b = 0;
		num++;
	}
	ft_putarg(argc, argv);
}
