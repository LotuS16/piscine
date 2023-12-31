/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsetiyan <rey@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:21:03 by rsetiyan          #+#    #+#             */
/*   Updated: 2023/10/03 14:53:55 by rsetiyan         ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb > 1)
	{
		i = nb * ft_recursive_factorial(nb - 1);
	}
	return (i);
}
