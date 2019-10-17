#include "ft_printf.h"
#include <stdio.h>

int mine_result;
int syst_result;

#define VERIFY(msg, ...) mine_result = ft_printf("[MINE]: |"msg"|\n", ## __VA_ARGS__); \
                         syst_result =    printf("[SYST]: |"msg"|\n", ## __VA_ARGS__); \
                         if (mine_result == syst_result)                             \
                             printf("[RESULT]: [MINE]: %d [SYST]: %d\n""\n", mine_result, syst_result); \
                         else                                                         \
                             printf("[RESULT]: [MINE]: %d [SYST]: %d\n""\n", mine_result, syst_result);

int     main()
{
    VERIFY("%o, %u, %x, %X, %o, %u", 32546, 645654, -235, 4656, 3546, 53468);
    // ft_printf("drthgfhf%%%%\n%d\n%d\n%d\nwhay the fdsoi\n", 8, 9, 3);
    // ft_printf("\n");

    /* test int/long */
    // long long x = 1225364789078;
    // printf("printf :\n");
    // printf("%+0005d\n%+-5d\n%- 3d\n\n", 8, 6, 3);
    // write(1, "ft_printf :\n", 12);
    // ft_printf("%+0005d\n%+-5d\n%- 3d\n\n", 8, 6, 3);

    // signed char c = -655;
    // printf("%hhd\n", c);
    // ft_printf("%hhd\n", c);

    // long a = 21474836475645;
    // long int  b = 21474836475645;
    // long long int c = -9223372036854775808U;
    // printf("printf :\n");
    // printf("%- 100ld\n%+0100ld\n%lld\n", a, b, c);
    // write(1, "ft_printf :\n", 12);
    // ft_printf("%- 100ld\n%+0100ld\n%lld\n", a, b, c);

    // printf("int : %lu\n", sizeof(int));
    // printf("long int : %lu\n", sizeof(long int));
    // printf("long : %lu\n", sizeof(long));


    /* test char /str */
    // printf("printf :\n");
    // printf("%-6c\n%6c\n%12s\n", 'a', 'b', "abcdefg");
    // write(1, "ft_printf :\n", 12);
    // ft_printf("%-6c\n%6c\n%12s\n", 'a', 'b', "abcdefg");

    // int     a = 2000;
    // printf("%c\n", a);
    // ft_printf("%c\n", a);

    // unsigned int a = 65;
    // unsigned int b = 75;
    // printf("printf :\n%-6o\n%u\n%x\n%X\n\n", a, a, a, a);
    // printf("ft_printf :\n%-6o\n%u\n%x\n%X\n\n", a, a, a, a);
    // printf("printf :\n%5o\n%u\n%x\n%X\n\n", b, b, b, b);
    // printf("ft_printf :\n%5o\n%u\n%x\n%X\n\n", b, b, b, b);

    // unsigned int a = 65;
    // unsigned int b = 75;
    // printf("printf :\n%o\n%o\n\n", a, b);
    // ft_printf("ft_printf :\n%o\n%o\n\n", a, b);

    // int     x = 65;
    // char    y = 'a';
    // int     *a = &x;
    // char    *b = &y;
    // printf("printf :\n%p\n%p\n\n", a, b);
    // ft_printf("ft_printf :\n%p\n%p\n\n", a, b);
    
    // char *s = "";
    // printf("printf :\n%s", s);
    // ft_printf("ft_printf :\n%s", s);

    // char *s_hidden = "hi low";
    // printf("%9s", s_hidden);
    // printf("printf :\n%09s\n%+09s\n\n", s_hidden, s_hidden);
    // ft_printf("ft_printf :\n%09s%+09s\n\n", s_hidden, s_hidden);

    // unsigned long a = -42;

    // printf("printf :\n%lu\n\n", a);
    // ft_printf("ft_printf :\n%lu\n\n", a);
    // printf("\nreturn value : %d\n", ft_printf("%lu", a));

    // int     a = 42;
    // printf("printf :\n%30p\n\n", &a);
    // ft_printf("ft_printf :\n%30p\n\n", &a);

    // char *s = NULL; // ?? print result shows corret but not on pft
    // printf("printf :\n%3.s\n\n", s);
    // ft_printf("ft_printf :\n%3.s\n\n", s);

    // printf("printf :\n%.0o\n\n", 0);
    // ft_printf("ft_printf :\n%.0o\n\n", 0);

    // printf("%d\n", printf("printf :\n%05%\n\n"));
    // ft_printf("ft_printf :\n%05%\n\n");

    // float a = -3.85; 

 //   printf("%f %lf %Lf %d\n", a, (double)a, (long double)a, (int)a);
    // printf("%+12f\n", a);
    // int INT_MIN = -2147483648;

    // double a = 1.00000;
    // // for (int i = 0; i < 6; i++)
    // //     a *= 10;
    // if ((long long)a % 10 == 0)
    //     printf("x");
    // long long x = (long long)a;
    // printf("%lld\n%lld\n\n", (long long)a, x);

    // printf("printf :\n%.8f\n\n", -875.000001);
    // ft_printf("ft_printf :\n%.8f\n\n", -875.000001);
    // printf("printf :\n%.8f\n\n", 0.00000001);
    // ft_printf("ft_printf :\n%.8f\n\n", 0.00000001);
    // printf("printf :\n%.11f\n\n", 0.000000000010000000);
    // ft_printf("ft_printf :\n%.11f\n\n", 0.000000000010000000);

    // printf("printf :\n%d\n\n", printf("%-12d\n", 42));
    // printf("ft_printf :\n%d\n\n", ft_printf("%-12d\n", 42));

    // int    a = 42;
    // printf("printf :\n% i %d %d\n\n", a, a ,a);
    // ft_printf("ft_printf :\n%i %d %d %c %d %c %d\n\n", a, a ,a, 'a', a, 'a', a);


    // char *a = "abc"; //%s
    // // printf("printf :%d\n", printf("Printf :\n%s\n\n", a));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%s\n\n", a));

    // short int b = -8875; //%hi  //sh_neg_1
    // // printf("printf :%d\n", printf("Printf :\n%hihello\n\n", b));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%hihello\n\n", b));
    
    // unsigned long long int c = 22337203685477; // %llu //ull_pos_1
    // // printf("printf :%d\n", printf("Printf :\n%-17.14llu\n\n", c));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%-17.14llu\n\n", c));
    
    // long long int d = -22337203685477; // %lli  //ll_neg_1
    // // printf("printf :%d\n", printf("Printf :\n%lli\n\n", d));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%lli\n\n", d));
    
    // unsigned short int e = 3047; // %hu  //ush_pos_1
    // // printf("printf :%d\n", printf("Printf :\n%08hu\n\n", e));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%08hu\n\n", e));
    
    // char *f = "wassup"; //%s
    // // printf("printf :%d\n", printf("Printf :\n%17ssomestuff\n\n", f));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%17ssomestuff\n\n", f));
    
    // char *g = "nope"; //%17s
    // // printf("printf :%d\n", printf("Printf :\n%17s\n\n", g));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%17s\n\n", g));
    
    // char *h = ""; //%s
    // // printf("printf :%d\n", printf("Printf :\n%s\n\n", h));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%s\n\n", h));
    
    // short int i = 32767; //%hi  (short)32767
    // // printf("printf :%d\n", printf("Printf :\n%hi\n\n", i));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%hi\n\n", i));
    
    // int j = 0; //%i
    // // printf("printf :%d\n", printf("Printf :\n%i\n\n", j));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%i\n\n", j));
    
    // unsigned long int k = 22337203685477; // %.24lu  \\//ul_pos_1
    // // printf("printf :%d\n", printf("Printf :\n%.24lu\n\n", k));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%.24lu\n\n", k));
    
    // unsigned long long int l = 0ull; //%llu  \0ull
    // // printf("printf :%d\n", printf("Printf :\n%llu\n\n", l));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%llu\n\n", l));

    // unsigned int m = 878023;//(unsigned int)3298535761351; // %u  \\ui_pos_1
    // // printf("printf :%d\n", printf("Printf :\n%u\n\n", m));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%u\n\n", m));
    
    // char *n = "notall"; // %.2s
    // // printf("printf :%d\n", printf("Printf :\n%.2s\n\n", n));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%.2s\n\n", n));

    // unsigned long int o = 22337203685477; //%li \\l_pos_1
    // // printf("printf :%d\n", printf("Printf :\n%li\n\n", o));
    // // printf("ft_printf :%d\n", printf("ft_Printf :\n%li\n\n", o));

    // printf("printf :%d\n", printf("%s%hihello%-17.14llu%lli%08hu%s%17ssomestuff%s%hi%i%.24lu%llu%u%.2s%li\n\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o));
    // printf("ft_printf :%d\n", ft_printf("%s%hihello%-17.14llu%lli%08hu%s%17ssomestuff%s%hi%i%.24lu%llu%u%.2s%li\n\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o));
    // ft_printf("%u\n\n", 3298535761351);
    // printf("%u\n\n", 3298535761351);
    // printf("printf :\n%d\n\n", printf("%u\n\n", -1));
    // printf("ft_printf :\n%d\n\n", ft_printf("%u\n\n", -1));

    return (0);
}
/* progress as 9/28/2019 // 1569/2760 tests passed. */