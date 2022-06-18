//Calculator
#include <stdio.h>

//function Declaration/prototype
int Addition(int n1, int n2);
int substraction(int n1, int n2);
int multiplication(int n1, int n2);
int division(int n1, int n2);
int modulous(int n1,int n2);
int factorial(int I,int J,int factorial);

//function call
int main(){
    int a,b,n,i,j;
    printf("Enter the 2 numbers ");
    scanf("%d %d",&a,&b);

    printf("Term to find factorial of ");
    scanf("%d",&n);

    printf("Addition of 2 terms %d\n", Addition(a,b));
    printf("\nSubtraction of 2 terms %d\n", substraction(a,b));
    printf("\nMultiplication 0f 2 terms %d\n", multiplication(a,b));
    printf("\nDivision 0f 2 terms %d\n", division(a,b));
    printf("Modulous 0f 2 terms %d\n", modulous(a,b));
    
    factorial(i,j,n);


    return 0;
}
//function definition
int Addition(int n1, int n2){
    return n1+n2;
}
int substraction(int n1, int n2){
    return n1-n2;
}

int multiplication(int n1, int n2){
    return n1*n2;
}

int division(int n1, int n2){
    return n1/n2;
}

int modulous(int n1,int n2){
    return n1%n2;
}

int factorial(int I,int J,int factorial){
    factorial = 1;
    for(I=1;I<=J;I++){
        
        factorial = factorial*I;
        
    }
    printf("%d",factorial);
}