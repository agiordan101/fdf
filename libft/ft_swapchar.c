/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_swapchar.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: agiordan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/22 19:02:12 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 19:07:47 by agiordan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_swapchar(char *a, char *b)
{
	char	temp;

	if (!a || !b)
		return ;
	temp = *a;
	*a = *b;
	*b = temp;
}
