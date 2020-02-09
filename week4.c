#include <stdio.h>
int addTen(int x)
{
    x=x+10;
    return x;
}
int x = 300 ; // ตัวแปร global
//pototype
int addTwenty(); //เหมือนการประกาศตัวแปร

int main()
{
    int x = 10 ;
    int y = addTen(x) ;
    printf("addTen in main = %d\n",addTen(x)) ;
    printf("x in main = %d\n",x);
    int z = addTwenty() ;
    printf("x = in addTwenty = %d\n", z) ;
    printf("x in main = %d\n",x);            
}
int addTwenty ()
{   
    printf("x = in addTwenty = %d\n", x) ;
    x = x + 20 ;
    return x;
}
