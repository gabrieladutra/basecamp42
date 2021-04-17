/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdias-du <gdias-du@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 21:26:04 by gdias-du          #+#    #+#             */
/*   Updated: 2021/04/06 17:48:29 by gdias-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_get_all_numbers(int numbers[]);
void	ft_print_comb(void);
void	ft_filter_not_ascending_numbers(int split[][3], int ordered[][3]);
void	ft_split_numbers(int origin[], int split[][3]);

void	ft_get_all_numbers(int numbers[])
{
	int i;

	i = 0;
	while (i < 999)
	{
		numbers[i] = i + 1;
		i++;
	}
}

void	ft_split_numbers(int origin[], int split[][3])
{
	int current_number;
	int hundred;
	int ten;
	int unit;
	int i;

	i = 0;
	while (i < 999)
	{
		current_number = origin[i];
		hundred = current_number / 100;
		ten = (current_number / 10) % 10;
		unit = current_number % 10;
		split[i][0] = hundred;
		split[i][1] = ten;
		split[i][2] = unit;
		i++;
	}
}

void	ft_filter_not_ascending_numbers(int split[][3], int ordered[][3])
{
	int i_split;
	int hundred;
	int ten;
	int unit;
	int i_ordered;

	i_split = 0;
	i_ordered = 0;
	while (i_split < 999)
	{
		hundred = split[i_split][0];
		ten = split[i_split][1];
		unit = split[i_split][2];
		if (hundred < ten && ten < unit)
		{
			ordered[i_ordered][0] = hundred;
			ordered[i_ordered][1] = ten;
			ordered[i_ordered][2] = unit;
			i_ordered++;
		}
		i_split++;
	}
	ordered[i_ordered][0] = -1;
	ordered[i_ordered][1] = -1;
	ordered[i_ordered][2] = -1;
}

void	ft_print_comb(void)
{
	char	digits[3];
	int		all_numbers[999];
	int		split[999][3];
	int		ordered[999][3];
	int		i;

	ft_get_all_numbers(all_numbers);
	ft_split_numbers(all_numbers, split);
	ft_filter_not_ascending_numbers(split, ordered);
	i = 0;
	while (ordered[i][0] >= 0)
	{
		digits[0] = '0' + ordered[i][0];
		digits[1] = '0' + ordered[i][1];
		digits[2] = '0' + ordered[i][2];
		if (digits[0] == '7')
			write(1, &digits, 3);
		else
		{
			write(1, &digits, 3);
			write(1, ", ", 2);
		}
		i++;
	}
}
