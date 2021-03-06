/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 00:22:04 by celias            #+#    #+#             */
/*   Updated: 2018/07/23 08:56:28 by celias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *des;
	int i;

	des = (int*)malloc(sizeof(*des) * length);
	if (!des)
		return (0);
	i = -1;
	while (++i < length)
	{
		des[i] = f(tab[i]);
	}
	return (des);
}
