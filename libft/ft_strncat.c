/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrignol <mbrignol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 07:08:55 by mbrignol          #+#    #+#             */
/*   Updated: 2020/01/09 07:08:55 by mbrignol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int size;

    size = ft_strlen(dest);
    i = 0;
    while (i < nb && src[i])
    {
        dest[size + i] = src[i];
        i++;
    }
    dest[size + i] = '\0';
    return(dest);
}
