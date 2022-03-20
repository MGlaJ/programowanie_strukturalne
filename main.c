/*rozdzial_9*/
/*zadanie_1*/
/*funkcja min(x,y) zwraca mniejsza z dwoch wartosci typu double*/
//#include <stdio.h>
//double min(double, double);
//int main(void)
//{
//    double x,y;
//    printf("Podaj dwie liczby (q konczy program):\n");
//    while (scanf("%d %d", &x, &y) == 2)
//    {
//        printf("Mniejsza liczba sposrod %d i %d jest %d.\n", x, y, min(x,y));
//        printf("Podaj dwie liczby (q konczy program):\n");
//    }
//    return 0;
//}
//double min(double x, double y)
//{
//    double min;
//    if (x < y)
//        min = x;
//    else
//        min = y;
//    return min;
//}
//
/* Zadanie_2*/
//#include<stdio.h>
//int rzad_zn(char ch, int i, int j)
//int main (void)
//{
//    for (i; i<j; i++)
//    {
//        printf(ch);
//    }
//return 0;
//}

/*zadanie_3*/
//#include<stdio.h>
//int rzad(char ch, int x, int y);
//int main (void)
//{
//    char ch;
//    int x,y;
//    printf("Podaj znak, liczbe kolumn, liczbe wierszy:\n");
//    while (scanf("%s %d %d", &ch, &x, &y) == 3)
//    {
//        for(int i = 0; i < y; i++)
//        {
//            for(int j = 0; j < x; j++)
//            {
//                printf("%s", ch);
//            }
//        }
//    }
//return 0;
//}
//
/*zadanie_4*/

//double harmonia(double m, double n)
//{
//    return (2/((1/m)+(1/n)));
//}

/*zadanie_5*/

int litery(char c)

{
    char c;
    char male[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", r", "s", "t", "u", "v", "w", "x", "y", "z"};
    char duze[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

    if (c != 0)
    {
        for (int i = 0; i < sizeof(male); i++):
        {
            if (c == male[i]):
            {
                return i+1;
            }
        }
        for (int i = 0; i< sizeof(duze); i++):
        {
            if (c == duze[i]):
            {
                return i+1;
            }
        }
    }
    else
    {
        return -1;
    }
}

?
