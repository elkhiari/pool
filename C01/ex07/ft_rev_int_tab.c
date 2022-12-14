/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:46:58 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/06/14 13:50:02 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	e;
	int	tmp;

	e = 0;
	while (e < size / 2)
	{
		tmp = tab[e];
		tab[e] = tab[size - 1 - e];
		tab[size - 1 - e] = tmp;
		e++;
	}
}
