/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_cplx_pow.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: qpupier <qpupier@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/05 07:32:22 by qpupier      #+#   ##    ##    #+#       */
/*   Updated: 2019/04/05 07:32:31 by qpupier     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"

t_cplx	ft_cplx_pow(t_cplx z, int n)
{
	t_cplx r;

	r = z;
	while (--n)
		r = ft_cplx_mult(r, z);
	return (r);
}
