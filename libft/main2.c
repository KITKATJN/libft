/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:02:44 by cmarguer          #+#    #+#             */
/*   Updated: 2020/10/31 15:04:42 by cmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
int main()
{

	//printf("%s",ft_itoa(0));
	
	
	char c1[] = "hello bob!";
	printf("%s\n",ft_strdup(c1));

	/*
	char c[] = "zebra";
	char z[] = "zebrd";
	printf("--%p\n",ft_strnstr(c,z,20));
	printf("==%p\n",strnstr(c,z,20));
	*/

	/*
	printf("toupper %d\n", ft_toupper('l'));
	printf("tolower %d\n", ft_tolower('0'));
	*/

	/*
	printf("is alpha %d\n", ft_isdigit('l'));
	printf("is alpha %d\n", ft_isalpha('h'));
	*/

	/*
	printf("--------atoi------\n");
	printf("%d\n",ft_atoi("9999999999999999"));
	printf("%d\n",ft_atoi("545"));
	printf("%d\n",ft_atoi("-569"));
	*/

	/*
	printf("-----strchr------\n\n");
	char c[15] = "01234567089";
	printf("++|%p\n",strrchr(c,'-'));
	printf("==|%p\n",ft_strrchr(c,'-'));
	*/

	/*
	printf("-----strchr------\n\n");
	char c[15] = "";
	printf("in massiv ->%p\n", &c[6]);
	printf("++|%p\n",strchr(c,'0'));
	printf("==|%p\n",ft_strchr(c,'0'));
	*/
	
	/*
	printf("-----memchr------\n\n");
	char c[15] = "0123456789***";
	printf("in massiv ->%p\n", &c[6]);
	printf("++|%p\n",memchr(c,'*',10));
	printf("==|%p\n",ft_memchr(c,'*',10));
	*/

	/*
	printf("-----memcmp------\n\n");
	char c[15] = "0123456789***";
	char c1[15] = "0123456789**" ;
	printf("++|%d\n",memcmp(c1,c,50));
	printf("==|%d\n",ft_memcmp(c1,c,50));
	*/


	/*
	printf("-----memmove------\n\n");
	char z[] = "";
	char c[15] = "0123456789";
	char z1[] = "";
	char c1[15] = "0123456789" ;
	printf("++|%s\n",memmove(c1,z1,15));
	printf("==|%s\n",ft_memmove(c,z,15));
	*/

	/*
	printf("\n------------memccpy-----------\n\n");
	char z[] = "";
	char c[15] = "123";
	char z1[] = "";
	char c1[15] = "123";
	char ch = 5 + 48;
	printf("->%c\n",ch);
	printf("++|%p\n",memccpy(c1,z1,53,10));
	for (int i = 0; i < 6; i++)
		printf("ptr - %p\n", &c1[i]);
	printf("c1|%s\n",c1);
	printf("==|%p\n",ft_memccpy(c,z,53,10));
	for (int i = 0; i < 6; i++)
		printf("ptr - %p\n", &c[i]);
	printf("c|%s\n",c);
	*/

	/*
	printf("\n------------memcpy-----------\n\n");
	char c[] = "hello     !";
	char z[] = "not hello";
	printf("%s",ft_memcpy(c,z,9));
	*/
	/*
	printf("\n----------bzero------------------\n");
	char c[] = "cdfdsfhjhjh";
	 ft_bzero(c, 9);
	 printf("%s",c);
	*/
	/*
	 //for memset
	char c[] = "cdfdsfhjhjh";
	int i =	'*';
	printf("%s", ft_memset(c, i, 9));
	*/

	/*
	// for strlcpy 	nado li zashishat ot togo chto hotim zapisat bolshuu strochku v menshuu 
	char c[] = "c    sos";
	//char z[] = "hello world!";//vozvrashat vsegda dlinu sursa
	int i = ft_strlcpy(c,"sdf!!",9); //vstavit nol tretim parametrom
	printf("%d_%s",i,c);
	*/
	

	/*for strlen
	char c[] = "hellol";
	int i = ft_strlen(c);
	printf("%d",i);
	*/
	//for strlcat
	/*
	char c[] = "hello";
	char z[] = " world!";

	ft_strlcat(c, z, 7);
	printf("%s",c);*/
	return 0;
}
