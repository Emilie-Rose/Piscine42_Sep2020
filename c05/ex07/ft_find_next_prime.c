/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:35:52 by emolina           #+#    #+#             */
/*   Updated: 2020/09/29 20:53:53 by emolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime2(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (2);
	i = 0;
	while (1)
	{
		if (ft_is_prime2(nb) == 1)
			return (nb);
		nb++;
	}
}
