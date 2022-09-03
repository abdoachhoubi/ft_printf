/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:24:16 by aachhoub          #+#    #+#             */
/*   Updated: 2022/09/03 14:33:39 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nb, int *index)
{
	if (nb > 9)
	{
		ft_putnbr_u(nb / 10, index);
		ft_putnbr_u(nb % 10, index);
	}
	else
		ft_putchar(nb + 48, index);
}
