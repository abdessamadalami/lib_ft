/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:10:17 by ael-oual          #+#    #+#             */
/*   Updated: 2021/11/18 10:12:45 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include"libft.h"

size_t	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}
