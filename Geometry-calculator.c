// Calculator example using C code
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
 
#define KEY "Enter the calculator Operation you want to do : "
 
// Function prototype declaration
void square();
void rectangle();
void right_triangle();
void equilateral_triangle();
void parallelogram();
void circle();
void calculator_operations();
 
// Start of Main Program
int main()
{
    int X=1;
    char Calc_oprn;
 
    // Function call 
    calculator_operations();
 
    while(X)
    {
        printf("\n");
        printf("%s ", KEY);
 
        Calc_oprn=getche();
        
 		//switch(Calc_oprn)
 		
        switch(Calc_oprn)
        {
            case '1': square();
                      break;
 
            case '2': rectangle();
                      break;
 
            case '3': right_triangle();
                      break;
 
            case '4': equilateral_triangle();
                      break;
 
            case '5': parallelogram();
                      break;
 
            case '6': circle();
                      break;
 
            case '7': calculator_operations();
                      break;
 
            case '8': exit(0);
                      break;
            case '0': system("cls");
                      calculator_operations();
                      break;
 
            default : system("cls");
 
    printf("\n**********ERROR");
    printf("***********\n");
    printf("\n*****Please Try Agian");
    printf("*****\n");
                      calculator_operations();
        }
    }
}
 
//Function Definitions
 
void calculator_operations()
{
    //system("cls");  use system function to clear 
    //screen instead of clrscr();
    printf("\n       Welcome to Geometry calculator \n\n");
 
    printf("******* Press 8 to quit ");
    printf("the program ********\n");
    printf("***** Press 7 to display ");
    printf("below options *****\n\n");
    printf("Enter 0 to clear the screen and");
    printf(" display available option \n\n");
 
    printf("Enter 1 symbol for Square \n");
    printf("Enter 2 symbol for Rectangle \n");
    printf("Enter 3 symbol for Right triangle \n");
    printf("Enter 4 symbol for Equilateral triangle \n");
    printf("Enter 5 symbol for Parallelogram \n");
    printf("Enter 6 symbol for Circle \n");
}
 
void square()
{
    double n;
    printf("\n\n        a\n ***************\n *             *\n *             *\n *             * a\n *             *\n *             *\n ***************\n");
    printf("\nEnter the size of square (a) : ");
    scanf("%lf",&n);
    printf("Area : %.2lf\n",pow(n,2));
    printf("Perimeter : %.2lf\n",4*n);
}
 
void rectangle()
{ 
    double a,b;
    printf("\n\n           a\n **********************\n *                    *\n *                    *\n *                    * b\n *                    *\n **********************\n");
    printf("\nEnter the size of length (a) : ");
    scanf("%lf",&a);
    printf("Enter the size of width (b) : ");
    scanf("%lf",&b);
    printf("Area : %.2lf\n",a*b);
    printf("Perimeter : %.2lf\n",a*2+b*2);
}
 
void right_triangle()
{

    double a,b;
    printf("\n\n   *\n   * *\n   *   *\n   *     *   c \n a *       *\n   *         *\n   *           *\n   ***************\n         b\n");
    printf("\nEnter the size of height (a) : ");
    scanf("%lf",&a);
    printf("Enter the size of base (b) : ");
    scanf("%lf",&b);
    printf("c : %.2lf\n",pow(pow(a,2)+pow(b,2),0.5));
    printf("Area : %.2lf\n",a*b/2);
    printf("Perimeter : %.2lf\n",a+b+pow(pow(a,2)+pow(b,2),0.5));
}
 
void equilateral_triangle()
{
    double a;
    printf("\n\n         *\n        ***\n       * * *\n      *  *  *\n  a  *   *   *  a\n    *    * h  *\n   *     *     *\n  *      *      *\n *****************\n         a\n");
    printf("\nEnter the size of side (a): ");
    scanf("%lf",&a);
    printf("h : %.2lf\n",pow(3,0.5)/2*a);
    printf("Area : %.2lf\n",pow(3,0.5)/4*pow(a,2));
    printf("Perimeter : %.2lf\n",a*3);
}

void parallelogram()
{
	printf("\n\n      *****************\n     **              *\n    * *             * a\n   *  * h          *\n  *   *           *\n ***************** \n         b\n");
    double a,b,c;
    printf("\nEnter the size of height (h) : ");
    scanf("%lf",&a);
    printf("Enter the size of side (a) : ");
    scanf("%lf",&c);
    printf("Enter the size of base (b) : ");
    scanf("%lf",&b);
    printf("Area : %.2lf\n",a*b);
    printf("Perimeter : %.2lf\n",2*c+2*b);
}
 
void circle()
{
    double a;
    printf("\n\n       ***********\n     **           **   \n   **               **  \n  *                   * \n *               r     *\n *          ************\n *                     *\n  *                   * \n   **               **  \n     **           **\n       ***********\n");
    printf("\nEnter the size of radius (r) : ");
    scanf("%lf",&a);
    printf("Area : %.2lf\n",M_PI*pow(a,2));
    printf("Perimeter : %.2lf\n",2*M_PI*a);
}
 
// what do you want to know? : 1: Area (you need to know a and b) 
//                             2: Perimeter (you need to know Area and one side) 
//                             3: Perimeter (you need to know size of two side) 
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//

