/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsetiyan <rey@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:08:56 by rsetiyan          #+#    #+#             */
/*   Updated: 2023/09/20 10:42:32 by rsetiyan         ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
		*div = a / b;
		*mod = a % b;
}

/*
 int a = 1;
 int b = 2;
 int divide ;
 int modulo ;

 ft_div_mod(a,b, &divide, &modulo)
 printf("bagi %d\n", divide);
 printf("modulo  %", modulo);
*/
