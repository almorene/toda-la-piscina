/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphaber.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:57:33 by almorene          #+#    #+#             */
/*   Updated: 2023/08/15 16:00:00 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		write (1, &a, 1);
		a++;
	}
}
