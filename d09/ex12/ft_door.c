/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:50:48 by celias            #+#    #+#             */
/*   Updated: 2018/07/13 11:15:21 by celias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"
ft_putstr(char *str)
{
	int i; 
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

ft_bool close_door(t_door *door)
{
	ft_putstr("Door closing..."); 
	state = CLOSE;
	return (TRUE);
}

void is_door_open(t_door door) 
{
	ft_putstr("Door is open ?"); 
	return (door->state = OPEN);
}

ft_bool is_door_close(t_door* door)
{
	ft_putstr("Door is close ?");
}
