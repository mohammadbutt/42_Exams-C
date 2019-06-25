/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 14:57:05 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/25 15:40:38 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_itoa_base.c"

int main(void)
{
	printf("00|%s|\n", ft_itoa_base(2147483647, 10));
	printf("01|%s|\n", ft_itoa_base(-2147483648, 10));
	printf("02|%s|\n", ft_itoa_base(0, 2));
	printf("03|%s|\n", ft_itoa_base(-223, 10));
	printf("04|%s|\n", ft_itoa_base(358445793, 5));
	printf("05|%s|\n", ft_itoa_base(179380640, 5));
	printf("06|%s|\n", ft_itoa_base(1775550062, 6));
	printf("07|%s|\n", ft_itoa_base(436291576, 8));
	printf("08|%s|\n", ft_itoa_base(558791285, 8));
	printf("09|%s|\n", ft_itoa_base(1264049827, 8));
	printf("10|%s|\n", ft_itoa_base(364462384, 16));
	printf("11|%s|\n", ft_itoa_base(978493058, 13));
	printf("12|%s|\n", ft_itoa_base(1839576742, 11));
	printf("13|%s|\n", ft_itoa_base(420520610, 9));
	printf("14|%s|\n", ft_itoa_base(433386100, 8));
	printf("15|%s|\n", ft_itoa_base(-145049752, 10));
	printf("16|%s|\n", ft_itoa_base(225038777, 15));
	printf("17|%s|\n", ft_itoa_base(128975417, 10));
	printf("18|%s|\n", ft_itoa_base(963340871, 12));
	printf("19|%s|\n", ft_itoa_base(1950925513, 5));
	printf("20|%s|\n", ft_itoa_base(1346619237, 13));
	printf("21|%s|\n", ft_itoa_base(134885247, 15));
	printf("22|%s|\n", ft_itoa_base(220434710, 13));
	printf("23|%s|\n", ft_itoa_base(1313836346, 15));
	printf("24|%s|\n", ft_itoa_base(244374316, 13));
	printf("25|%s|\n", ft_itoa_base(369564352, 2));
	printf("26|%s|\n", ft_itoa_base(930262669, 13));
	printf("27|%s|\n", ft_itoa_base(1273656732, 14));
	printf("28|%s|\n", ft_itoa_base(49120008, 5));
	printf("29|%s|\n", ft_itoa_base(443871691, 14));
	printf("30|%s|\n", ft_itoa_base(1283015921, 8));
	printf("31|%s|\n", ft_itoa_base(471089592, 6));
	printf("33|%s|\n", ft_itoa_base(-109699317, 12));
	printf("For test 33 moulinette shows the below:\n");
	printf("= Test 4 ===================================================\n");
	printf("$> ./quo7k8xvfl98wg4ytxudwo2y '-109699317' '12'\n");
	printf("$> diff -U 3 user_output_test4 test4.output | cat -e\n");
	printf("--- user_output_test4	2019-06-25 12:04:08.000000000 -0700$\n");
	printf("+++ test4.output	2019-06-25 12:04:08.000000000 -0700$\n");
	printf("@@ -1 +1 @@$\n-308A3499$\n+98977A0B7$\n");





}
