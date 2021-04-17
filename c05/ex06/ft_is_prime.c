/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdias-du <gdias-du@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:27:35 by gdias-du          #+#    #+#             */
/*   Updated: 2021/04/16 22:45:12 by gdias-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int prime;

	prime = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (nb % prime != 0)
		prime++;
	if (nb == prime)
		return (1);
	return (0);
}
