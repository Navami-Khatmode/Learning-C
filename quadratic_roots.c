#include<stdio.h>
#include<math.h>
//Finding roots of a quadratic equation//
void validity(int a, int b, int c){
    if(a==0){
        printf("The given is not a quadratic equation");
    }
}
int find_roots(int a, int b, int c){
    int val = sqrt(b*b-4*a*c);
if(val>0){
printf("Roots are real and distinct %f %f", (double)(-b/ + val)/2*a,(double) (-b - val)/2*a);
}
else if(val==0){
    printf("The roots are equal %f ", -(double)b/2*a);
}
else if(val<0){
    printf("Roots are not real %f+i%f   %f + i%f", -(double)b/2*a, (double)val/2*a, -(double)b/2*a, -(double)val/2*a );
}
    
}

int main(){
int x, y, z;
printf("Enter coefficient of x^2 :\n");
scanf("%d", &x);
printf("Enter coefficient of x :\n");
scanf("%d", &y);
printf("Enter the constant :\n");
scanf("%d", &z);

validity(x,y,z);
find_roots(x,y,z);

 return 0;
}



