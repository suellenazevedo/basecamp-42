/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazevedo <sazevedo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:33:17 by sazevedo          #+#    #+#             */
/*   Updated: 2022/04/12 05:45:51 by sazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet( void )
{
	int		ascii;
	char	letter;

	ascii = 122;
	while (ascii >= 97)
	{
		letter = ascii;
		write(1, &letter, 1);
		ascii--;
	}
}

int main()
{
	ft_print_alphabet();
}