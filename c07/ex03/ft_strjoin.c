/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnasseh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 18:13:26 by tnasseh           #+#    #+#             */
/*   Updated: 2025/08/06 08:13:20 by tnasseh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	length_all(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	if (size == 0)
		return (1);
	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_of_string;
	int		i;
	char	*result;

	len_of_string = length_all(size, strs, sep);
	result = (char *)malloc(sizeof(char) * (len_of_string + 1));
	if (!result)
		return (NULL);
	i = 0;
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	result[len_of_string] = '\0';
	return (result);
}
