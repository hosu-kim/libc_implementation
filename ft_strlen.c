/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:12:09 by hoskim            #+#    #+#             */
/*   Updated: 2024/09/19 19:12:09 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(const char *s)
{
    size_t i;
    
    i = 0;
    while(s[i])
        i++;
    return(i);
}

int main()
{
    char *string = "I've been rim of the world"
}