/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_showtab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pribault <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:17:40 by pribault          #+#    #+#             */
/*   Updated: 2016/11/22 12:58:10 by pribault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_showtab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
		ft_putendl(tab[i++]);
}
