/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 20:17:48 by emolina           #+#    #+#             */
/*   Updated: 2020/09/20 15:00:14 by emolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long i;

	i = nb;
	if (nb < 0)
	{
		i = i * (-1);
		ft_putchar('-');
	}
	if (i < 10)
		ft_putchar(i + '0');
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}
