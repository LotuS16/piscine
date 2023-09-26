/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsetiyan <rey@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:48:30 by rsetiyan          #+#    #+#             */
/*   Updated: 2023/09/21 18:19:18 by rsetiyan         ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

int main()
{
	char t[] = "AZA" ;
    int result = ft_str_is_uppercase(t);

    printf("%d\n", result);
    return 0;
}
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
