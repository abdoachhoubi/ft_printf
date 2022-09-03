/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:26:22 by aachhoub          #+#    #+#             */
/*   Updated: 2022/09/03 19:49:37 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int nb, char cs, int *index)
{
	unsigned int	n;
	char			*hex_base;

	n = nb;
	if (cs == 'x')
		hex_base = "0123456789abcdef";
	else
		hex_base = "0123456789ABCDEF";
	if (nb > 15)
	{
		ft_putnbr_base(n / 16, cs, index);
		ft_putnbr_base(n % 16, cs, index);
	}
	else if (nb < 0)
	{
		ft_putchar('-', index);
		ft_putnbr_base(-n, cs, index);
	}
	else
	{
		ft_putchar(hex_base[n % 16], index);
	}
}
