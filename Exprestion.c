#include <stdio.h>
#define if 20 //ประกาศค่าคงที่ ถ้าอ้างอิง จะเป็น 20 ทันที (overwrite)
int main()
{
    int a = 10 ; // -2100,000,000 ---> 2100,000,000
    long b = 4000000000 ; //เก็บได้4byteเหมือนกับint ดังนั้นจึง overflow
    long long c = 4000000000 ; 
    unsigned int d = 4000000000 ;
    unsigned long long f = 4000000000 ;
    //ทศนิยม
    float g = 10.22 ;
    double h = 111.112 ;
     //อักษร
    char i = 'a' ; //(กำหนด char ต้องใข้ '')
    char name[] ="Oak"; //ประกาศ array
    printf ("%f %lf %c %s\n",g,h,i,name) ;
    int k ; //ประกาศตัวแปรต้องassignค่าไม่งั้นมั่ว(ประกาศในฟังก์ชั่น)
    printf ("%d",k) ;
    char l = '\0' ; //ไม่สามรถกำหนด Empty str ในตัวแปรได้ เพราะ char เก็บเป็น int ใน Memory ในรูป ASCII 
    //Empty str is \0 
    printf ("%c",l) ;
}