/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vuslysty <vuslysty@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 19:02:02 by vuslysty          #+#    #+#             */
/*   Updated: 2018/12/10 19:02:07 by vuslysty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "ft_printf.h"

int main(void)
{
	char *line;
	int fd;

	fd = open("Garry.txt", O_RDONLY);
	ft_printf2("{BLUE}{INVERSE}% -.1000t{RED}{BOLD}%.23f\n{BGSTD}%+-.10t", fd, 345.224, fd);
//	while (get_next_line(fd, &line))
//	{
//		ft_printf2("%s\n", line);
//		free(line);
//	}




//	char *form = "%\n3423gdds23dfeffds342fghsd%%%fds %f";
//
//	int d = -23;
//
//	ft_printf2("%c", 10);
//	int one, two;
//	printf(form, d);
//	 ft_printf("{CYAN}{BGRED}%040.20d", 20);
//	if((one = printf(form, d)) != (two = ft_printf2(form, d)))
//		ft_printf2("\n{CYAN}one = %i\n{RED}two = %i", one, two);
//	ft_putstr("HELLO\nANGRY\nWORLD");
//	ft_printf("%p\n", d);
//	ft_printf("%f", d);
//	printf("%020i", 453);
//	ft_printf("{RED}{BOLD}Привіт {CYAN}there{EOC}, {YELLOW}{BGRED}Alyona{EOC}\n{BOLD}{INVERSE}I've done that, {PURPLE}mazafaka\n%020i", 5234);
//	printf("%01000000llu\n", d);

//	ft_printf("%p\n", d);
//	printf("%p\n%f", d, d);
//	void *v = &d;
//	*(double*)v = 41;
//
//	printf("%f", d);
//	printf("%p\n", d);
//	printf("%p\n", &v);
//	printf("");
//	char	c = 'a';
//	t_ull i = 1123124123124213214;
//	long double f = 432634212345.8698;
//
//	if (printf(form, f) != ft_printf(form, f))
//		ft_printf("all bad");

//	ft_printf("%llx", adr);

//	write(1, "\033[0;40mHello, world!",10 + 10);

//	long double a = 7.0;
//	char *str = "Hello\n";
//	int i = 23;
//	int ast = 5;
//	char *format = "%+0*i\n";
//	printf(format, 10, ast, i);
//	ft_printf(format + 1, 10, ast, i);
//	char a = 0b10100010;
//	char b = 0b11000010;
//	ft_putchar(b);
//	printf("{CYAN}");

//	printf("%#.0f", 2.23);
//	ft_putstr(bigintsum_toa("", "12345", 1));
//	long double a = 000.00000000000000000000000000;
//	t_myfloat	mf;
//	t_format 	f;
//	f.precision = 1;
//	f.p_val = 0;
//	f.sharp = 0;
//
////	wchar_t d = L'ф';
//	printf("%.0LE\n", a);
//	get_float_params(&mf, &a);
////	round_numstr(&mf, &f);
//	printf("%s", e_format(&mf, &f));
//	printf("%s.%s\n", mf.intnum, mf.decimal);
//	unsigned int *pa = &a;
//	pa = pa + 3;
//	int i = 32;
//	while (--i >= 0)
//		printf("%li", *pa >> i & 0b1);
//	pa--;
//	i = 32;
//	while (--i >= 0)
//		printf("%li", *pa >> i & 0b1);
//	pa--;
//	i = 32;
//	while (--i >= 0)
//		printf("%li", *pa >> i & 0b1);
//	pa--;
//	i = 32;
//	while (--i >= 0)
//		printf("%li", *pa >> i & 0b1);
//	printf("\n");
//
//	short *s_exp = &a;
//	s_exp += 4;
//
//	i = 16;
//	while (--i >= 0)
//		printf("%i", *s_exp >> i & 0b1);
//	*s_exp = *s_exp & (short)0x7fff;
//
//	printf("\n");
//	i = 16;
//	while (--i >= 0)
//		printf("%i", *s_exp >> i & 0b1);
//	printf("\n");
//	printf("%hi", *s_exp);










//	unsigned char c = 128 >> 2;
//	printf("%hhu", c);

//	float n1 = -0;
//	unsigned int *pn1 = &n1;
//	double n2 = -0.0;
//	unsigned long *pn2 = &n2;
//	*pn2 = 0x8000000000000000;
//	unsigned char *pn22 = &n2;
//	long double n3 = -1;
//	unsigned char *pn3 = &n3;
//	unsigned int *a = pn2;
//	a++;
//	*(pn3 + 1) = *(pn3 + 1) & 0b1100000000000000;
//	int i = 8;
//	while (--i >= 0)
//		printf("%.2hhx ", *(pn22 + i));
//	int j = -1;
//	printf("\n");
//	while (++j < 8)
//	{
//		i = 64;
//		while (--i >= 0)
//			printf("%li", (*pn2 >> i) & 0b1);
//		printf(" ");
//
//	printf("\n");
//	i = 32;
//	while (--i >= 0)
//		printf("%i", (*a >> i) & 0x1);
//	printf(" ");
//	}
//	printf("\n%f\n", n1);
//	printf("\n%f\n", n2);
//	printf("%i", sizeof(long));
//	unsigned int *p = &n;
//	int i = ABS(8 % 8 - 7);
//	printf("%.1000f\n%.8x\n%.1000f\n%.16lx\n%.1000Lf\n%.16lx%.16lx", n1, *pn1, n2, *pn2, n3, *(pn3 + 1), *pn3);
//	printf("%.16x", *p);
//	printf("\n%i", sizeof(long double));
//	ft_putstr(bigintsum_toa("9999", "1", 1));
//	ft_putstr(pow_bigint_toa(2, 450));
	return (0);
//	f7f141205bc0180000005621568f4003
}

//int main(void) /* C89 ANSI */
//{
//	int n[100] = { 1 };
//	/* число храним в достаточно длинном массиве
//	   первый элемент станет основанием,
//	   с которого число будет расти
//	   в сторону старших разрядов */
//
//	int base = 10;
//	/* полученное число будет в десятичной системе
//	   можно устанавливать степени десятки
//	   100, 1000, 10000 и так далее,
//	   это повысит скорость вычисления,
//	   результат будет выглядет одинаково;
//	   нужно учесть размер одного числа в массиве
//	   если int, то не более 10000 */
//
//	int i, j, flag;
//	/* i - внешние счётчики
//	   j - внутренние счётчики первого уровня
//	   flag - флажок, который при выводе числа
//			  помогает пропустить начальные нули в числе
//			  начальные нули - это разряды, до которых
//			  число не доросло */
//
//	for (i = 0; i < 345; i++) {
//
//		for (j = 0; j < 100; j++)
//			n[j] *= 2;
//		/* умножаем всё число на три,
//		   как будто в столбик на бумаге,
//		   для каждого разряда */
//
//		for (j = 0; j < 100-1; j++)
//			if (n[j] >= base) {
//				n[j+1] += n[j] / base;
//				n[j] %= base;
//			}
//		/* для всех разрядов, исключая самый старший,
//		   выполнить проверку на переполнение;
//
//		   если переполнение в каком-то из разрядов есть,
//		   то переполнившую часть перенести
//		   в соседний, более старший, разряд,
//		   а в самом разряде оставить остаток,
//		   который не переполняет разряд;
//
//		   при переносе переполнившей части
//		   в более старший соседний разряд,
//		   она прибавляется к тому, что уже там хранится */
//
//	}
//	/* умножает число на три сто раз,
//	   проводя проверки на переполнение его разрядов
//	   и переносы, в случаях переполнения */
//
//	flag = 1;
//	/* флаг пропуска начальных нулей
//	   устанавливается в положение "пропустить" */
//
//	for (i = 99; i >= 0; i--) {
//
//		if (flag == 1)
//			if (n[i] == 0)
//				continue;
//			else
//				flag = 0;
//		/* если флаг пропуска начальных нулей
//		   установлен в положение "пропустить",
//		   то проверить не началось ли число;
//
//		   если число началось,
//		   то есть встречен первый ненулевой разряд,
//		   то переключить флаг в положение "вывести";
//		   если число не началось,
//		   сразу перейти к следующему разряду,
//		   не выводя ничего */
//
//		printf("%d", n[i]);
//		/* выводит очередной разряд числа,
//		   начиная слева */
//	}
//	/* выводит получившееся число слева направо,
//	   поразрядно, начиная с первого ненулевого разряда */
//
//	putchar('\n');
//	/* после числа переводит строку */
//
//	exit(EXIT_SUCCESS);
//	/* возвращает статус успешного завершения
//	   в операционную среду */
//}

//int main()
//{
////	t_format form;
////	if (find_flags("22.4u", &form))
////		print_flags(&form);
////	char *s = "Hello";
////	char *str = "%s\n";
////	long double ld = 0.1234567890123456789 * 1e+308;
////	//12345678901234567168.00000000000000000000
////	printf("%Lf\n", ld);
////	unsigned int *voi = &ld;
////	s = ft_ultoa_base(*voi, 16);
////	ft_printf("s", s);
////	int i = 4;
////	char *tmp;
////	while (--i >= 0)
////	{
////		s = ft_ultoa_base(*(voi + i), 2);
////		size_t len = ft_strlen(s);
////		if (len < 8)
////		{
////			tmp = ft_memalloc_chr(9, '0');
////			ft_memmove(tmp, s, len);
////			free(s);
////			s = ft_strdup(tmp);
////			free(tmp);
////		}
////		ft_printf("s", s);
////		ft_putchar(' ');
////	}
////	printf("\n%.31f\n", ld);
//
////    unsigned int *a = &ld;
////    printf("%s", ft_ltoa_base(*a, 2));
//
//
//
////    ft_printf(str + 1, "Привітулі, дулі, дулі");
////	return (0);
//
//
//}