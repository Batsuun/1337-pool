/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnasseh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 22:52:30 by tnasseh           #+#    #+#             */
/*   Updated: 2025/08/06 01:48:19 by tnasseh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*array_of_numbers;

	if (min >= max)
		return (NULL);
	size = max - min;
	array_of_numbers = (int *)malloc(sizeof(int) * size);
	i = 0;
	if (!array_of_numbers)
		return (NULL);
	while (i < size)
	{
		array_of_numbers[i] = min + i;
		i++;
	}
	return (array_of_numbers);
}
