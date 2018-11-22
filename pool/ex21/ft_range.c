/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 20:09:36 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/11/21 17:33:27 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*a;
	int		b;

	b = 0;
	if (min >= max)
		return (0);
	max -= min;
	a = (int*)malloc(sizeof(*a) * max);
	max--;
	while (b <= max)
	{
		a[b] = min;
		b++;
		min++;
	}
	return (a);
}
