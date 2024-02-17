#include<stdio.h>  
float biggest(float, float, float);   
  
int main()  
{  
    float a, b, c;  
    printf("Enter 3 integer numbers\n");  
    scanf("%f%f%f", &a, &b, &c);    
    printf("Biggest of %.2f, %.2f and %.2f is %.2f\n", a, b, c, biggest(a, b, c));  
  
    return 0;  
}    
float biggest(float x, float y, float z)  
{  
    if(x > y && x > z) {  
       return x;  
    }  
    else  {  
       if(y > z)  
          return y;  
       else  
          return z;  
    }  
}
