/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utili2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmedyns <anmedyns@student.42roma.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:35:41 by anmedyns          #+#    #+#             */
/*   Updated: 2024/02/12 14:35:41 by anmedyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int ft_count_len_pnt(unsigned long int n)
{
	int i;

	i = 0;

	if(n == 0)
	{
		i = 1;
		return (i);
	}
	while (n != 0)
	{
		i ++;
		n = n / 16;
	}
	return(i);
}

int ft_putstr(char *n)
{
	int i;

	i = 0;

	if(n == NULL)
		return(write(1,"(null)", 6));
	while(n[i] != '\0')
	{
		ft_putchar(n[i]);
		i++;
	}
	return(i);
}

