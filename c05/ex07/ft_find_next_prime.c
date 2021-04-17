/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdias-du <gdias-du@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:30:41 by gdias-du          #+#    #+#             */
/*   Updated: 2021/04/16 22:37:55 by gdias-du         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
