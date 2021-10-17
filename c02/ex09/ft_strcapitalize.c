/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emolina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 14:42:32 by emolina           #+#    #+#             */
/*   Updated: 2020/09/26 18:49:33 by emolina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
						|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
						|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	return (0);
}
