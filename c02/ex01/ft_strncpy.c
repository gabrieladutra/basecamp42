/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdias-du <gdias-du@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:41:16 by gdias-du          #+#    #+#             */
/*   Updated: 2021/04/14 15:38:23 by gdias-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

	i = 0;
	j = n;
	while (i < j && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < j)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
