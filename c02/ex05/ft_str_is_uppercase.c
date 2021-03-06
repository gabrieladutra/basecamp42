/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdias-du <gdias-du@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:15:36 by gdias-du          #+#    #+#             */
/*   Updated: 2021/04/13 23:53:50 by gdias-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || *str == '\0')
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
