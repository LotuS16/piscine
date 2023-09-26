/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsetiyan <rey@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:24:34 by rsetiyan          #+#    #+#             */
/*   Updated: 2023/09/19 17:34:57 by rsetiyan         ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int	main()
{
	int i = 8 ;
	int j = 9 ;

	ft_ultimate_div_mod(&i, &j);
	printf("div %d\n", i);
	printf("modulo %d\n", j);
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
