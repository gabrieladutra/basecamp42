/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdias-du <gdias-du@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:09:08 by gdias-du          #+#    #+#             */
/*   Updated: 2021/04/15 02:51:09 by gdias-du         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	char *end;

	end = dest + str_size(dest);
	while (*src != '\0')
	{
		*end = *src;
		end++;
		src++;
	}
	*end = '\0';
	return (dest);
}
