/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdias-du <gdias-du@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 17:34:07 by gdias-du          #+#    #+#             */
/*   Updated: 2021/04/12 23:34:02 by gdias-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int counter;

	i = 0;
	counter = 0;
	while (src[counter] != '\0')
		counter++;
	if (size != 0)
	{
		while ((i < (size - 1)) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (counter);
}
