/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sazevedo <sazevedo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 23:07:26 by sazevedo          #+#    #+#             */
/*   Updated: 2022/04/12 23:29:49 by sazevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


void	ft_printchar( char c )
{
		write(1, &c, 1);
}

void	ft_print( char c1, char c2, char c3 )
{
	
	ft_printchar(c1);
	ft_printchar(c2);
	ft_printchar(c3);
	if (!(c1 == '7'))
	{
		ft_printchar(',');
		ft_printchar(' ');
	}

}

void 	ft_print_comb(void)
{
	
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while(n2 <= '8')
		{
			n3 = n2 + 1;
			while(n3 <= '9')
			{
				ft_print(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}	

int main()
{
	ft_print_comb();
}
