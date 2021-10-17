/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:44:19 by emolina           #+#    #+#             */
/*   Updated: 2020/09/29 19:22:43 by emolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = nb;
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
