#include<stdio.h>
#include<math.h>

int main(){
    double a, b, c, discriminant, root1,root2;
    printf("enter coefficient of a, b and c");
    scanf("%lf %lf %lf",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if(discriminant>0){
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("root 2=%.2lf \n",root2);
    }
    else if(discriminant==0){
        root1=root2=-b/(2*a);
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }

    else
    {
        printf("Roots are complex and imaginary.\n");
    }

    return 0;
}