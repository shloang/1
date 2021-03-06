/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:18:43 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/11/21 20:23:39 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		a;

	a = 1;
	while (a <= 46340 && a * a < nb)
		a++;
	if (a * a == nb)
		return (nb);
	return (0);
}
