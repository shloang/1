/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalys-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 20:29:01 by dalys-fr          #+#    #+#             */
/*   Updated: 2018/11/21 20:40:02 by dalys-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb <= 13 && nb > 0)
		return (ft_recursive_factorial(nb - 1) * nb);
	if (nb == 0)
		return (1);
	return (0);
}
