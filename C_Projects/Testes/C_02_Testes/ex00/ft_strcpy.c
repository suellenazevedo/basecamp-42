/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazevedo <sazevedo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:09:09 by sazevedo          #+#    #+#             */
/*   Updated: 2022/04/23 01:30:31 by sazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy( char *dest, char *src )
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main()
{
	char str1[] = "oi, estou tes-";
	char str2[] = "tando isso $$";
	printf("before: dest: %s\n", str1);
	ft_strcpy(str1, str2);
	printf("after: dest: %s\n", str1);
	return (0);
}*/
