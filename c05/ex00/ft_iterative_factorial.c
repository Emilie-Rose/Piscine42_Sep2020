/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 19:18:53 by emolina           #+#    #+#             */
/*   Updated: 2020/09/29 20:48:47 by emolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultat;
	int	i;

	if (nb < 0)
		return (0);
	resultat = 1;
	i = nb;
	while (i > 0)
	{
		resultat = resultat * i;
		i--;
	}
	return (resultat);
}
