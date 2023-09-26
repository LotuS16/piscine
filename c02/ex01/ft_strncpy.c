/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsetiyan <rey@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:02:11 by rsetiyan          #+#    #+#             */
/*   Updated: 2023/09/21 10:27:33 by rsetiyan         ###   ########.KL       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
/*#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char sor[] = "hello";
	char dest[6];

	ft_strncpy(dest, sor, 3);
	printf("%s\n", dest);
	return 0;
}
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest [i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
