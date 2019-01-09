//
// Created by angryjoe on 08.01.19.
//

#include "ft_printf.h"

char	*get_good_flag(long double *n, t_format *f)
{
	char 		*numstr;

	t_myfloat	mf;
	get_float_params(&mf, n);
	f->sign = mf.s;
	if (f->type == F)
		numstr = f_format(&mf, f);
	else //(f->type == E || f->type == UPP_E)
		numstr = e_format(&mf, f);
	min_plus_space(&numstr, f);
	return (numstr);
}

size_t	get_format_number2(t_format *f, long double *n, char **str)
{
	char    *buf;
	size_t  lb;
	size_t  ls;

	buf = get_good_flag(n, f);
	lb = ft_strlen(buf);
//	lb = number_format(&buf, f);
	if (f->w_val > lb)
		*str = ft_memalloc_chr((ls = f->w_val) + 1,
							   f->zero ? '0' : ' ');
	else
		*str = ft_memalloc_chr((ls = lb) + 1, ' ');
	if (f->minus)
		ft_memmove(*str, buf, lb);
	else
	if (f->w_val > lb && f->zero &&
		(buf[0] == '-' || buf[0] == '+' || buf[0] == ' '))
	{
		ft_memmove(*str + (ls - lb + 1), buf + 1, lb - 1);
		(*str)[0] = buf[0];
	}
	else
		ft_memmove(*str + (ls - lb), buf, lb);
	free(buf);
	return (ls);

}