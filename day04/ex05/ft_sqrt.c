/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadawson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 23:31:15 by jadawson          #+#    #+#             */
/*   Updated: 2017/10/28 23:35:30 by jadawson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int sqrt;

	i = 1;
	sqrt = 0;
	while (i <= nb)
	{
		sqrt = i * i;
		if (sqrt == nb)
		{
			return (i);
		}
		i = i + 1;
	}
	return (0);
}
