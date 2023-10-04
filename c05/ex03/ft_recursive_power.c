/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsetiyan <rey@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:50:25 by rsetiyan          #+#    #+#             */
/*   Updated: 2023/10/03 16:12:21 by rsetiyan         ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		i = nb * ft_recursive_power(nb, power - 1);
	return (i);
}
