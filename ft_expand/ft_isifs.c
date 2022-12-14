/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isifs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 20:53:02 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/05 20:55:08 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_expand.h"

int	ft_isifs(char c)
{
	int	i;

	i = 0;
	while (g_shell.ifs[i] && g_shell.ifs[i] != c)
		i++;
	if (g_shell.ifs[i])
		return (1);
	return (0);
}
