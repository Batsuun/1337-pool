/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnasseh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 21:55:05 by tnasseh           #+#    #+#             */
/*   Updated: 2025/07/20 22:41:29 by tnasseh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < (size - 1))
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		i++;
	}
}
