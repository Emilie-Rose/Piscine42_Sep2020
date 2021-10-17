/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 22:19:54 by emolina           #+#    #+#             */
/*   Updated: 2020/09/20 23:19:22 by emolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *chaine, int n)
{
		int i;
		int affichage;

		affichage = 1;
		i = 0;
		while (++i < n)
			if (change[i - 1] >= chaine [i])
				affichage = 0;
		if (!affichage)
			return;
		i = -1;
		while (++i < n)
			ft_putchar (chaine[i] + 48);
		if (chaine[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
}

void	ft_print_combn(int n)
{
	int i;
	int chaine[10];

	if (n > 9 || n < 1)
		return;
	i = -1;
	while (++i < n)
		chaine[i] = i;
	while (chaine[0] <= (10 - n) && n >= 1)
	{
		print(chaine, n);
		if (n == 10)
			break;
		chaine[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (chaine[i] > 9)
			{ 
				chaine[i - 1]++;
				chaine[i] = 0;
			}
		}
	}
}
