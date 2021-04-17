/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdias-du <gdias-du@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:09:31 by gdias-du          #+#    #+#             */
/*   Updated: 2021/04/15 15:27:11 by gdias-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int previous;
	int next;

	previous = 0;
	if (*to_find == '\0')
		return (str);
	while (str[previous] != '\0')
	{
		next = 0;
		while (str[previous + next] == to_find[next])
		{
			if (to_find[next + 1] == '\0')
				return (str + previous);
			next++;
		}
		previous++;
	}
	return (0);
}
