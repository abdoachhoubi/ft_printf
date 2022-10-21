/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:26:59 by aachhoub          #+#    #+#             */
/*   Updated: 2022/10/21 09:27:00 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *s, int *index)
{
	unsigned int	i;

	if (!s)
		ft_putstr("(null)", index);
	else
	{
		i = 0;
		while (s[i] != '\0')
			ft_putchar(s[i++], index);
	}
}
