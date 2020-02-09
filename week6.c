#include<stdio.h>
//pass by reference
void addTen(int *numbers, int n) //sizearray 
{
    for (int i = 0 ; i < n ; i++) 
    {
        printf("number + %d addr = %p, %d\n",i,numbers + i,*(numbers + i)) ; //print num + i and ref
        *(numbers +i) += 10 ;
    }
}
int addTwenty(int *n)
{
    *n += 20;
    return 1 ;
}
int main ()
{
    int numbers[] = {5, 6, 7, 8, 9, 0} ;
    int n = 6 ; //size array
    addTen(&numbers[0], n);
    for (int i = 0 ; i < 6 ; i++)
    {
        printf("number[%d] = %d\n",i,numbers[i]) ;
    }
    addTwenty(&n) ; //Copyตัวแปร
    printf("n = %d\n",n) ;
}