/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperuchi <gperuchi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 19:02:28 by gperuchi          #+#    #+#             */
/*   Updated: 2021/04/04 15:16:39 by gperuchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int l;
	int c;

	l = 0;
	while (l < y)
	{
		c = 0;
		while (c < x)
		{
			if (l == 0 || c == 0 || l == y - 1 || c == x - 1)
			{
				if ((l == 0 && c == 0) || (l == y - 1 && c == x - 1))
					ft_putchar('A');
				else if ((l == 0 && c == x - 1) || (l == y - 1 && c == 0))
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
