/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathferr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 17:04:22 by mathferr          #+#    #+#             */
/*   Updated: 2019/12/05 17:04:25 by mathferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strlowcase(char *str)
{
	int i;

    i = 0;
    while (str[i] != '\0')
	{
		if ( (str[i] >= 'A' && str[i] <= 'Z') )
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}