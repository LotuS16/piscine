/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsetiyan <rey@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:12:43 by rsetiyan          #+#    #+#             */
/*   Updated: 2023/09/26 14:21:35 by rsetiyan         ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int main()
{
	char t[] = "bfae" ;
    char *result = ft_strupcase(t);

    printf("%s\n", result);
    return 0;
}
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
