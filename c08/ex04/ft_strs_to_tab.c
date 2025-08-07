/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnasseh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 03:48:53 by tnasseh           #+#    #+#             */
/*   Updated: 2025/08/06 12:09:34 by tnasseh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	char	*cap;
	int		i;

	i = 0;
	while (src[i])
		i++;
	cap = (char *)malloc(sizeof(char) * (i + 1));
	if (!cap)
		return (NULL);
	i = 0;
	while (src[i])
	{
		cap[i] = src[i];
		i++;
	}
	cap[i] = '\0';
	return (cap);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arrived;

	arrived = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arrived)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arrived[i].size = ft_strlen(av[i]);
		arrived[i].str = av[i];
		arrived[i].copy = ft_strdup(av[i]);
		if (!arrived[i].copy)
		{
			i--;
			while (i >= 0)
			{
				free(arrived[i].copy);
			}
			free(arrived);
		}
		i++;
	}
	arrived[i].str = 0;
	return (arrived);
}
