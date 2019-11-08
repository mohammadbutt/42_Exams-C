/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_anagram.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:39:34 by mbutt             #+#    #+#             */
/*   Updated: 2019/11/07 21:09:08 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//void fill_hashtable(char *str, int *hash_table)
void fill_hashtable(char *str, char *hash_table)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i])
	{
		printf("|%d|", i);
		printf("|%c|", str[i]);
		printf("|%d|\n", str[i]);
//		hash_table[(int)str[i]]++;
		hash_table[(int)str[i]]++;
		i++;
	}
	printf("finished firest cycle\n");
}

int is_anagram(char *a, char *b)
{
	int i;
//	int a_hash_table[127] = {0};
//	int b_hash_table[127] = {0};
	
	char a_hash_table[127] = {0};
	char b_hash_table[127] = {0};

	i = 32;
	fill_hashtable(a, a_hash_table);
	fill_hashtable(b, b_hash_table);
	while(i < 127)
	{
		if(a_hash_table[i] != b_hash_table[i])
			return(0);
		i++;
	}
	return(1);
}

int main(void)
{
	char *str1_correct = "efccdab";
	char *str2_correct = "abccdef";
	
//	char *str1_wrong = "efcdba";
//	char *str2_wrong = "efaccd";

	printf("|%d|\n", is_anagram(str1_correct, str2_correct));
//	printf("|%d|\n", is_anagram(str1_wrong, str2_wrong));
}
