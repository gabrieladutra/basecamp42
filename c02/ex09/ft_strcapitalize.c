/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdias-du <gdias-du@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:26:12 by gdias-du          #+#    #+#             */
/*   Updated: 2021/04/14 16:13:47 by gdias-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i - 1];
		if (65 <= str[i] && str[i] <= 90)
			str[i] = str[i] + 32;
		if (i == 0 || (c >= 32 && c <= 47) || (c >= 58 && c <= 64) ||
			(c >= 91 && c <= 96) || (c >= 123 && c <= 126))
			if (97 <= str[i] && str[i] <= 122)
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}