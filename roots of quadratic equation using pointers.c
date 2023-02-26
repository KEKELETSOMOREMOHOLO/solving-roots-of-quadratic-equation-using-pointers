 #include(stdio.h)                    // place this '<' & '>' instead of '(' & ')' before stdio.h
#include(math.h)
void quadratic_roots(double *,double *, double *); 
int main(void)
{
double a, b, c;

printf("Enter the values of a,b and c :");
scanf("%lf %lf %lf", &a, &b, &c);
printf("\nThe required quadratic equation is : ax^2 + bx + c = 0");
printf("\nGiven Values: a = %lf \n b= %lf \n c= %lf ",a ,b, c);
quadratic_roots(&a,&b,&c);
getch( );
return 0; 
}

void quadratic_roots(double *aa, double *bb, double *cc)
{
double root1, root2;
if((*bb)*(*bb)= = 4*(*aa)*(*cc))
{
root1= -(*bb)/2*(*aa);
printf("\nRoots are equal");
printf("\nvalue : %lf", root1);
}  
else if((*bb)*(*bb) > 4*(*aa)*(*cc))
{
root1= (-(*bb) + sqrt((*bb)*(*bb) -(4*(*aa)*(*cc))))/(2*(*aa));
root2= (-(*bb) - sqrt((*bb)*(*bb) -(4*(*aa)*(*cc))))/(2*(*aa));
printf("\nThe roots of the equation are: %lf and %lf ", root1, root2);
}
else
{
printf("\nImaginary roots");
root1= (-(*bb) + sqrt((*bb)*(*bb) -(4*(*aa)*(*cc))))/(2*(*aa));
root2= (-(*bb) - sqrt((*bb)*(*bb) -(4*(*aa)*(*cc))))/(2*(*aa));
printf("roots are %f+i(%f) , %f-i(%f)",r1, r2, r1, r2);
} 
}
