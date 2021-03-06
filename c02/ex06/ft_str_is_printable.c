/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdias-du <gdias-du@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:17:04 by gdias-du          #+#    #+#             */
/*   Updated: 2021/04/12 23:13:04 by gdias-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if ((*str >= 32 && *str <= 126) || *str == ' ')
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
