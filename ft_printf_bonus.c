/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:15:55 by aachhoub          #+#    #+#             */
/*   Updated: 2022/09/04 00:41:16 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_isflag(const char spec)
{
	if (spec == ' ' || spec == '#' || spec == '.'
			|| spec == '+' || spec == '-')
		return (0);
	else if (ft_isdigit(spec))
		return (0);
	return (-1);
}

static void	ft_check_flag(va_list args, const char *spec, int *index)
{
	if (*spec == '#')
	{
		spec++;
		if (*spec == 'x' || *spec == 'X')
		{
			ft_printf("0%c" *spec);
			ft_check_specifier(args, spec, index);
		}
	}
	else if (*spec == '.')
}

static void	ft_check_specifier(va_list args, const char *spec, int *index)
{
	if (*spec == 'c')
		ft_putchar((char)va_arg(args, int), index);
	else if (*spec == 's')
		ft_putstr(va_arg(args, char *), index);
	else if (*spec == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), index);
	else if (*spec == 'x' || *spec == 'X')
		ft_putnbr_base(va_arg(args, int), *spec, index);
	else if (*spec == 'd' || *spec == 'i')
		ft_putnbr(va_arg(args, int), index);
	else if (*spec == 'p')
		ft_print_memory(va_arg(args, void *), index);
	else if (*spec == '%')
		ft_putchar('%', index);
	else if (ft_isflag(*spec)
		ft_check_flag(args, spec, index);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_check_specifier(args, format, &len);
		}
		else
			ft_putchar(*format, &len);
		format++;
	}
	va_end(args);
	return (len);
}
