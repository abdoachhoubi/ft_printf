/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:42:37 by aachhoub          #+#    #+#             */
/*   Updated: 2022/09/03 20:03:23 by aachhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c, int *index);
void	ft_putstr(const char *s, int *index);
void	ft_putnbr(int nb, int *index);
void	ft_putnbr_u(unsigned int nb, int *index);
void	ft_putnbr_base(int nb, char cs, int *index);
void	ft_print_memory(const void *ptr, int *index);
int		ft_printf(const char *format, ...);

#endif
