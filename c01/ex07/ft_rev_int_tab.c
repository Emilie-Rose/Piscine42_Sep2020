/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 15:26:11 by emolina           #+#    #+#             */
/*   Updated: 2020/09/21 22:26:52 by emolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int c;
	int temp;

	c = 0;
	size = size - 1;
	while (c < size)
	{
		temp = tab[c];
		tab[c] = tab[size];
		tab[size] = temp;
		c++;
		size--;
	}
}
