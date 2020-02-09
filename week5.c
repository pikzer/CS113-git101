#include<stdio.h>
#include<stdlib.h>
int main()
{
    //int x = 100 ; //ฐาน10
    //int a = 0144 ; //ฐาน8
    //int b = 0x64 ; //ฐาน16
    //printf("x = %d\n",x);
    //printf("reference of x = %lu\n",&x) ; //ฐาน10
    //printf("reference of x = %p\n",&x) ;//ฐาน16
 //----------------------------------------------------------------------------------------//   
    //int number1[] = {7,8,9,10,11}; //arrayขนาด5 ++กำหนดขนาดเสมอ++
    //int number2[100] = {7,8,9,10,11}; //array size 100
    
    //printf ("index 3 = %d\n",number1[3]) ;
    //printf ("reference index 3 = %p\n",&number1[3]) ;
    
    //printf ("index 0 = %d\n",number1[0]) ;
    //printf ("reference index 0 = %p\n",&number1[0]) ;
//pointer
    //printf ("reference index 0 = %p\n",&number1) ; //index 0
    //printf ("reference index 0 = %p\n",&number1 + 3) ; //index 3
    //เราสามารถเข้าถึงทุก index ได้เพียงรู้ index ที่ 0
//ประกาศ poiter
    //int *ptr = &x ; //Poiter เก็บ adress|||||| ประกาศชนิดตรงตัวแปร
    //int *arrPtr;  
    //เมื่อ assign ค่าไม่ต้องใส่ *
    //arrPtr = number1 ; //&number[0]
    //arrPtr = arrPtr + 1 ;
    //*arrPtr = +1 ;
    // * dereferncing
    //printf ("arrPtr = %p,*arrPtr = %d\n",arrPtr) ;
    //printf("nuber[1] = %p,number[1] = %d",&number1[1],number1[1]) ;
    // &x = 50 //ทำไม่ได้
    
    //ptr = x ; //x ต้องเป็น array 
    //*ptr = 50 ; // เปลี่ยน adress ชาวบ้าน 
    
    
    
    //int number1[] = {7,8,9,10,11};
    //char input[50] ; //ถ้าเป็น char array ต้องวนถึง  \0
    //for (int *ptr = number1;ptr <= &number1[4];ptr++)
    //{
        //printf ("[%p] = %d\n",ptr,*ptr) ;
    //}
 //รับทีละ char   
    //char input2[50];
    //int count = 0;
    //char c ;
    //while ((c = getchar()) != '\n')
    //{
        //input2[count] = c ;
        //++count ;
    //}
    //input2[count] = '\n' ;
    //printf("input = %s",input2) ;
    //for(char *cPtr = input2;*cPtr != '\0';cPtr++)
    //{
        //printf("%c\n",*cPtr);
    //}
  //--------------------------------------------------------------------------//  
    // HOW TO SCANF
    
    int a ;
    char c ;
    char s[50] ;
    scanf("%c-%d-%s",&a,&c,&s) ;
    printf("%c   %d    %s",a,c,s) ;    
}
