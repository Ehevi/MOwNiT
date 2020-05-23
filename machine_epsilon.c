#include <stdio.h>
#include <float.h>
 
 int main()
 {
    float epsilon = 1.0f;
 
    printf("  epsilon   1 + epsilon\n" );
    
    do 
    {
       printf("%10f%10f\n", epsilon, (1.0f + epsilon) );
       epsilon /= 2.0f;
    }
    // If next epsilon yields 1, then break
    while ((float)(1.0 + (epsilon/2.0)) != 1.0); // 

    // because current epsilon is the machine epsilon.
    printf( "\nCalculated Machine epsilon: %G\n", epsilon );
    printf("FLT_EPSILON:                %g\n", FLT_EPSILON);
    return 0;
 }