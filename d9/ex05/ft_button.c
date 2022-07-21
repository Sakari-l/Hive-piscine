/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:04:06 by slampine          #+#    #+#             */
/*   Updated: 2022/07/07 15:26:52 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_button(int i, int j, int k)
{
	int	mid;

	if ((i < j && i > k) || (i > j && i < k))
		mid = i;
	if ((j < i && j > k) || (j > i && j < k))
		mid = j;
	if ((k < i && k > j) || (k > j && k < i))
		mid = k;
	return (mid);
}
