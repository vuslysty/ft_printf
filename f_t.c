/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_t.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 18:52:42 by vuslysty          #+#    #+#             */
/*   Updated: 2019/01/25 11:35:03 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		set_values(int *count, int *len_sum, int *fd, va_list *ap)
{
	*count = 0;
	*len_sum = 0;
	*fd = va_arg(*ap, int);
}

size_t		f_t(t_format *f, va_list *ap, char **str, t_pf *pf)
{
	int	fd;
	int len_sum;
	int len_str;
	int count;

	set_values(&count, &len_sum, &fd, ap);
	while (get_next_line(fd, str) > 0)
	{
		len_sum += (len_str = ft_strlen(*str));
		if (f->minus && len_str == 0)
		{
			free(*str);
			continue;
		}
		count++;
		ft_putmem_fd(*str, len_str, pf->fd);
		free(*str);
		if (f->plus && ++len_sum)
			ft_putchar_fd('\n', pf->fd);
		else if (f->space && ++len_sum)
			ft_putchar_fd(' ', pf->fd);
		if (f->precision && f->p_val == count)
			break ;
	}
	return (len_sum);
}
