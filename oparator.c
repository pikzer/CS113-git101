#include <stdio.h>
int main () 
{
    int a = 10 ;
    float b = 10.22 ;
    int ans = a + a ;
    float ans1 = a + a ;
    float ans3 = b + b ;
    float ans4 = a * b ;
    float ans5 = 1.0 / 2.0 ; // int/int = int """" int/float = float
    int ans6 = 12%15; //ถ้าตัวแรกน้อยกว่าตัวหลังได้ตัวแรก
    

    printf ("%d\n",ans) ;
    printf ("%f\n",ans1) ;
    printf ("%f\n",ans3) ;
    printf ("%f\n",ans4) ;
    printf ("%f\n",ans5) ;
    printf ("%f\n",ans6) ;
}