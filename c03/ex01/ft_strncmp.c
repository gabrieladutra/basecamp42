/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdias-du <gdias-du@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:09:01 by gdias-du          #+#    #+#             */
/*   Updated: 2021/04/15 15:23:39 by gdias-du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while (i < (n - 1) && (s1[i] == s2[i]) && s1[i] != '\0')
		{
			i++;
		}
		a = s1[i];
		b = s2[i];
		return (a - b);
	}
}
