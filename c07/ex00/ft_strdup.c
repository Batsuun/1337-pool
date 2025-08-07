/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnasseh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:27:45 by tnasseh           #+#    #+#             */
/*   Updated: 2025/08/06 01:50:29 by tnasseh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*illusion;

	i = 0;
	while (src[i])
		i++;
	illusion = (char *)malloc(sizeof(char) * i + 1);
	if (!illusion)
		return (NULL);
	i = 0;
	while (src[i])
	{
		illusion[i] = src [i];
		i++;
	}
	illusion[i] = '\0';
	return (illusion);
}
