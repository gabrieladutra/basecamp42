/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdias-du <gdias-du@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:42:29 by gdias-du          #+#    #+#             */
/*   Updated: 2021/04/14 16:04:46 by gdias-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if ((*str >= '0' && *str <= '9') || *str == '\0')
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
