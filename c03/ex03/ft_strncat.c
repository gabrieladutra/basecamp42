/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdias-du <gdias-du@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:09:15 by gdias-du          #+#    #+#             */
/*   Updated: 2021/04/15 15:26:46 by gdias-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_size(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *end;

	end = dest + str_size(dest);
	while (*src != '\0' && nb--)
	{
		*end = *src;
		end++;
		src++;
	}
	*end = '\0';
	return (dest);
}
