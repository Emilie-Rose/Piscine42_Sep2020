/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 19:50:40 by emolina           #+#    #+#             */
/*   Updated: 2020/09/30 16:36:22 by emolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nb_l;

	nb_l = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb_l = -nb_l;
	}
	if (nb_l >= 10)
	{
		ft_putnbr(nb_l / 10);
		ft_putnbr(nb_l % 10);
	}
	else
		ft_putchar(nb_l + 48);
}
