/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_primt_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:07:50 by almorene          #+#    #+#             */
/*   Updated: 2023/08/16 16:31:28 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	c;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				write (1, &c, 1);
				write (1, &d, 1);
				write (1, &u, 1);
				if (c != '7')
					write (1, ", ", 2);
				u++;
			}
			d++;
		}			
		c++;
	}
}