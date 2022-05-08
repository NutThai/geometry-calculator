#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
 
#define KEY "Enter the calculator Operation you want to do : "
 
void square();
void rectangle();
void right_triangle();
void equilateral_triangle();
void parallelogram();
void circle();
void rectangular_solid();
void sphere();
void right_circular_cylinder();
void right_circular_cone();
void calculator_operations();
char oprn;

int main()
{
	printf("\n       Welcome to Geometry calculator \n");
    int X=1;
    char Calc_oprn;
 
 
    while(X)
    {
    	calculator_operations();
        printf("\n");
        printf("%s ", KEY);
        Calc_oprn=getche();
        
 		
        switch(Calc_oprn)
        {
            case '1': rectangle();
                      break;
 
            case '2': right_triangle();
                      break;
 
            case '3': equilateral_triangle();
                      break;
 
            case '4': parallelogram();
                      break;
 
            case '5': circle();
                      break;
 			case '6': rectangular_solid();
					  break;
			case '7': sphere();
					  break;
			case '8': right_circular_cylinder();
					  break;
			case '9': right_circular_cone();
					  break;
            case 'd': calculator_operations();
                      break;
 
            case 'q': exit(0);
                      break;
            case '0': system("cls");
                      break;
 
            default : system("cls");
 
    printf("\n**********ERROR");
    printf("***********\n");
    printf("\n*****Please Try Agian");
    printf("*****\n");
                      break;
        }
    }
}
 
void calculator_operations()
{

 	printf("\n=============================================");
    printf("\n\n******* Press q to quit ");
    printf("the program ********\n");
    printf("***** Press d to display ");
    printf("below options *****\n\n");
    printf("Enter 0 to clear the screen and");
    printf(" display available option \n\n");
 	printf("**** 2D Geometry ****\n");
    printf("Enter 1 symbol for Rectangle \n");
    printf("Enter 2 symbol for Right triangle \n");
    printf("Enter 3 symbol for Equilateral triangle \n");
    printf("Enter 4 symbol for Parallelogram \n");
    printf("Enter 5 symbol for Circle \n\n");
    printf("**** 3D Geometry ****\n");
    printf("Enter 6 symbol for Rectangular solid \n");
    printf("Enter 7 symbol for Sphere \n");
    printf("Enter 8 symbol for Right circular cylinder \n");
    printf("Enter 9 symbol for Right circular cone \n");
    printf("\n=============================================");
}
 
void rectangle()
{ 
    double a,b;
    printf("\n\n           a\n **********************\n *                    *\n *                    *\n *                    * b\n *                    *\n **********************\n\n");
    printf("I know the 1 : a and b\n           2 : (a or b) and Area\n           3 : (a or b) and Perimeter\n           0 : Back\n\n");
    printf("Choose the option : ");
    oprn=getche();
    switch(oprn)
        {
            case '1': printf("\n\nEnter a : ");
					  scanf("%lf",&a);
					  printf("Enter b : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nArea : %.2lf\n",a*b);
					  printf("Perimeter : %.2lf\n",a*2+b*2);
					  printf("\n=====================\n");
                      break;
 
            case '2': printf("\n\nEnter (a or b) : ");
					  scanf("%lf",&a);
					  printf("Enter the Area : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nSize of another side : %.2lf\n",b/a);
					  printf("Perimeter : %.2lf\n",a*2+b/a*2);
					  printf("\n=====================\n");
                      break;
 
            case '3': printf("\n\nEnter (a or b) : ");
					  scanf("%lf",&a);
					  printf("Enter the Perimeter : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nSize of another side : %.2lf\n",(b-a*2)/2);
					  printf("Area : %.2lf\n",a*(b-a*2)/2);
					  printf("\n=====================\n");
                      break;
			case '0': break;
            default : system("cls");
 
    printf("\n**********ERROR");
    printf("***********\n");
    printf("\n*****Please Try Agian");
    printf("*****\n");
                      rectangle();
        }

}
 
void right_triangle()
{

    double a,b;
    printf("\n\n   *\n   * *\n   *   *\n   *     *   c \n a *       *\n   *         *\n   *           *\n   ***************\n         b\n");
    printf("I know the 1 : a and b\n           2 : (a or b) and c\n           3 : (a or b) and Area\n           0 : Back\n\n");
    printf("Choose the option : ");
    oprn=getche();
    switch(oprn)
        {
            case '1': printf("\n\nEnter a : ");
					  scanf("%lf",&a);
					  printf("Enter b : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nc : %.2lf\n",pow(pow(a,2)+pow(b,2),0.5));
					  printf("Area : %.2lf\n",a*b/2);
					  printf("Perimeter : %.2lf\n",a+b+pow(pow(a,2)+pow(b,2),0.5));
					  printf("\n=====================\n");
                      break;
 
            case '2': printf("\n\nEnter the size of (a or b) : ");
					  scanf("%lf",&a);
					  printf("Enter the size of c : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nSize of another side : %.2lf\n",pow(pow(b,2)-pow(a,2),0.5));
                      printf("Area : %.2lf\n",a*pow(pow(b,2)-pow(a,2),0.5)/2);
                      printf("Perimeter : %.2lf\n",a+b+pow(pow(b,2)-pow(a,2),0.5));
                      printf("\n=====================\n");
                      break; 
            case '3': printf("\n\nEnter the size of (a or b) : ");
					  scanf("%lf",&a);
					  printf("Enter the Area : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nSize of another side : %.2lf\n",b*2/a);
                      printf("Size of c : %.2lf\n",pow(pow(a,2)+pow(b*2/a,2),0.5));
                      printf("Perimeter : %.2lf\n",a+b*2/a+pow(pow(a,2)+pow(b*2/a,2),0.5));
                      printf("\n=====================\n");
                      break; 
                      
            case '0': break;
            default : system("cls");
 
    printf("\n**********ERROR");
    printf("***********\n");
    printf("\n*****Please Try Agian");
    printf("*****\n");
                      right_triangle();
        }
}
 
void equilateral_triangle()
{
    double a;
    printf("\n\n         *\n        ***\n       * * *\n      *  *  *\n  a  *   *   *  a\n    *    * h  *\n   *     *     *\n  *      *      *\n *****************\n         a\n");
    printf("I know the 1 : a\n           2 : h\n           3 : The Area\n           4 : The Perimeter\n           0 : Back\n\n");
    printf("Choose the option : ");
    oprn=getche();
    switch(oprn)
        {
            case '1': printf("\n\nEnter a : ");
					  scanf("%lf",&a);
					  printf("\n=====================\n");
					  printf("h : %.2lf\n",pow(3,0.5)/2*a);
					  printf("Area : %.2lf\n",pow(3,0.5)/4*pow(a,2));
					  printf("Perimeter : %.2lf\n",3*a);
					  printf("\n=====================\n");
                      break;
 
            case '2': printf("\n\nEnter h : ");
					  scanf("%lf",&a);
					  printf("\n=====================\n");
					  printf("\na : %.2lf\n",a*2/pow(3,0.5));
                      printf("Area : %.2lf\n",4*pow(3,0.5)*pow(a,2)/4);
                      printf("Perimeter : %.2lf\n",a*2/pow(3,0.5)*3);
                      printf("\n=====================\n");
                      break; 
            case '3': printf("\n\nEnter the Area : ");
					  scanf("%lf",&a);
					  printf("\n=====================\n");
					  printf("\na : %.2lf\n",pow(4/pow(3,0.5)*a,0.5));
                      printf("h : %.2lf\n",pow(3,0.5)*pow(4/pow(3,0.5)*a,0.5)/2);
                      printf("Perimeter : %.2lf\n",3*pow(4/pow(3,0.5)*a,0.5));
                      printf("\n=====================\n");
                      break; 
            case '4': printf("\n\nEnter the Perimeter : ");
					  scanf("%lf",&a);
					  printf("\n=====================\n");
					  printf("\na : %.2lf\n",a/3);
					  printf("h : %.2lf\n",pow(3,0.5)*a/3/2);
                      printf("Area : %.2lf\n",pow(3,0.5)*pow(a/3,2)/4);
                      printf("\n=====================\n");
                      break;
		 	case '0': break;	
            default : system("cls");
 
    printf("\n**********ERROR");
    printf("***********\n");
    printf("\n*****Please Try Agian");
    printf("*****\n");
                      equilateral_triangle();
        }
}

void parallelogram()
{
	printf("\n\n      *****************\n     **              *\n    * *             * a\n   *  * h          *\n  *   *           *\n ***************** \n         b\n");
    double a,b,c;
    printf("I know the 1 : b and h\n           2 : b and The Area\n           3 : a and b\n           4 : (a or b) and The Perimeter\n           0 : Back\n\n");
    printf("Choose the option : ");
    oprn=getche();
    switch(oprn)
        {
            case '1': printf("\n\nEnter b : ");
					  scanf("%lf",&a);
					  printf("Enter h : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nArea : %.2lf\n",a*b);
					  printf("\n=====================\n");
                      break;
 
            case '2': printf("\n\nEnter b : ");
					  scanf("%lf",&a);
					  printf("Enter Area : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nh : %.2lf\n",b/a);
					  printf("\n=====================\n");
                      break; 
            case '3': printf("\n\nEnter a : ");
					  scanf("%lf",&a);
					  printf("Enter b : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nPerimeter : %.2lf\n",2*(a+b));
					  printf("\n=====================\n");
                      break; 
            case '4': printf("\n\nEnter (a or b) : ");
					  scanf("%lf",&a);
					  printf("Enter the Perimeter\n");
					  printf("\n=====================\n");
					  printf("\nAnother side : %.2lf\n",b/2-a);
					  printf("\n=====================\n");
                      break;
            case '0': break;
            default : system("cls");
 
    printf("\n**********ERROR");
    printf("***********\n");
    printf("\n*****Please Try Agian");
    printf("*****\n");
                      equilateral_triangle();
        }
}
 
void circle()
{
    double a,b,c;
    printf("\n\n       ***********        *\n     **           **      *\n   **               **    *\n  *                   *   *\n *               r     *  *\n *          ************  * d\n *                     *  *\n  *                   *   *\n   **               **    *\n     **           **      *\n       ***********        *\n\n");
    printf("I know the 1 : r\n           2 : d\n           3 : The Area\n           4 : The Circumference\n           0 : Back\n\n");
    printf("Choose the option : ");
    oprn=getche();
    switch(oprn)
        {
            case '1': printf("\n\nEnter r : ");
					  scanf("%lf",&a);
					  printf("\n=====================\n");
					  printf("\nd : %.2lf",a*2);
					  printf("\nArea : %.2lf",M_PI*pow(a,2));
					  printf("\nCircumference : %.2lf\n",2*M_PI*a);
					  printf("\n=====================\n");
                      break;
            case '2': printf("\n\nEnter d : ");
					  scanf("%lf",&a);
					  printf("\n=====================\n");
					  printf("\nr : %.2lf",a/2);
					  printf("\nArea : %.2lf",M_PI*pow(a/2,2));
					  printf("\nCircumference : %.2lf\n",M_PI*a);
					  printf("\n=====================\n");
                      break; 
            case '3': printf("\n\nEnter The Area : ");
					  scanf("%lf",&a);
					  printf("\n=====================\n");
					  printf("\nr : %.2lf",pow(a/M_PI,0.5));
					  printf("\nd : %.2lf",2*pow(a/M_PI,0.5));
					  printf("\nCircumference : %.2lf\n",2*M_PI*pow(a/M_PI,0.5));
					  printf("\n=====================\n");
                      break; 
            case '4': printf("\n\nEnter The Circumference : ");
					  scanf("%lf",&a);
					  printf("\n=====================\n");
					  printf("\nr : %.2lf",a/(2*M_PI));
					  printf("\nd : %.2lf",a/M_PI);
					  printf("\nArea : %.2lf\n",pow(M_PI,2)/(4*M_PI));
					  printf("\n=====================\n");
                      break;
            case '0': break;
            default : system("cls");
 
    printf("\n**********ERROR");
    printf("***********\n");
    printf("\n*****Please Try Agian");
    printf("*****\n");
                      circle();
        }
}
void rectangular_solid(){
	double a,b,c;
    printf("\n\n      *****************\n    *               * *\n  *               *   * c\n *****************    *\n *               *    *\n *               *   * \n *               * *  b\n *****************\n         a\n\n");
    printf("I know the 1 : a, b and c\n           2 : 2 of (a, b and c) and  Volume\n           3 : 2 of (a, b and c) and Surface\n           0 : Back\n\n");
    printf("Choose the option : ");
    oprn=getche();
    switch(oprn)
        {
            case '1': printf("\n\nEnter a : ");
					  scanf("%lf",&a);
					  printf("Enter b : ");
					  scanf("%lf",&b);
					  printf("Enter c : ");
					  scanf("%lf",&c);
					  printf("\n=====================\n");
					  printf("\nVolume : %.2lf",a*b*c);
					  printf("\nSurface : %.2lf\n",2*(a*b+b*c+a*c));
					  printf("\n=====================\n");
                      break;
            case '2': printf("\n\nEnter side 1 : ");
					  scanf("%lf",&a);
					  printf("Enter side 2 : ");
					  scanf("%lf",&b);
					  printf("Enter Volume : ");
					  scanf("%lf",&c);
					  printf("\n=====================\n");
					  printf("\nAnother side : %.2lf",c/a*b);
					  printf("\nSurface : %.2lf\n",2*(a*b+b*c/a*b+a*c/a*b));
					  printf("\n=====================\n");
                      break; 
            case '3': printf("\n\nEnter side 1 : ");
					  scanf("%lf",&a);
					  printf("Enter side 2 : ");
					  scanf("%lf",&b);
					  printf("Enter Surface : ");
					  scanf("%lf",&c);
					  printf("\n=====================\n");
					  printf("\nAnother side : %.2lf",(c-2*a*b)/(2*a+2*b));
					  printf("\nVolume : %.2lf\n",(c-2*a*b)/(2*a+2*b)*a*b);
					  printf("\n=====================\n");
                      break;
            case '0': break;
            default : system("cls");
 
    printf("\n**********ERROR");
    printf("***********\n");
    printf("\n*****Please Try Agian");
    printf("*****\n");
                      rectangular_solid();
        }
	
}
void sphere(){
	double a,b,c;
    printf("\n\n       ***********        \n     **   *       **      \n   **    *          **    \n  *     *             *   \n *      *       r      *  \n **     *  *************  \n *  * * *  *   *    *  * \n  *     *             *   \n   **    *          **    \n     **   *       **      \n       ***********\n\n");
    printf("I know the 1 : r\n           2 : Volume\n           3 : Surface\n           0 : Back\n\n");
    printf("Choose the option : ");
    oprn=getche();
    switch(oprn)
        {
            case '1': printf("\n\nEnter r : ");
					  scanf("%lf",&a);
					  printf("\n=====================\n");
					  printf("\nVolume : %.2lf",4*M_PI*pow(a,3)/3);
					  printf("\nSurface : %.2lf\n",4*M_PI*pow(a,2));
					  printf("\n=====================\n");
                      break;
            case '2': printf("\n\nEnter Volume : ");
					  scanf("%lf",&a);
					  printf("\n=====================\n");
					  printf("\nr : %.2lf",pow(3*a/(4*M_PI),0.33333333333));
					  printf("\nSurface : %.2lf\n",pow(M_PI,0.33333333333)*pow(6*a,0.66666666666));
					  printf("\n=====================\n");
                      break; 
            case '3': printf("\n\nEnter Surface : ");
					  scanf("%lf",&a);
					  printf("\n=====================\n");
					  printf("\nr : %.2lf",pow(a/(4*M_PI),0.5));
					  printf("\nVolume : %.2lf\n",pow(a,1.5)/(6*pow(M_PI,0.5)));
					  printf("\n=====================\n");
                      break;
            case '0': break;
            default : system("cls");
 
    printf("\n**********ERROR");
    printf("***********\n");
    printf("\n*****Please Try Agian");
    printf("*****\n");
                      sphere();
        }
}
void right_circular_cylinder(){
	double a,b,c;
    printf("\n\n      *******\n   *        r  *\n *       *********\n * *           * *\n *    *******    *\n *               *  h\n *               *\n *               *\n *               *\n   *           *\n      *******\n\n");
    printf("I know the 1 : r and h\n           2 : r and Volume\n           3 : h and Volume\n           0 : Back\n\n");
    printf("Choose the option : ");
    oprn=getche();
    switch(oprn)
        {
            case '1': printf("\n\nEnter r : ");
					  scanf("%lf",&a);
					  printf("Enter h : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nVolume : %.2lf",M_PI*pow(a,2)*b);
					  printf("\nSurface : %.2lf\n",2*M_PI*a*b+2*M_PI*pow(a,2));
					  printf("\n=====================\n");
                      break;
            case '2': printf("\n\nEnter r : ");
					  scanf("%lf",&a);
					  printf("Enter Volume : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nh : %.2lf",b/(M_PI*pow(a,2)));
					  printf("\nSurface : %.2lf\n",2*M_PI*a*b/(M_PI*pow(a,2))+2*M_PI*pow(a,2));
					  printf("\n=====================\n");
                      break; 
            case '3': printf("\n\nEnter h : ");
					  scanf("%lf",&a);
					  printf("Enter Volume : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nr : %.2lf",pow(b/(M_PI*a),0.5));
					  printf("\nSurface : %.2lf\n",2*M_PI*pow(b/(M_PI*a),0.5)*a+2*M_PI*pow(pow(b/(M_PI*a),0.5),2));
					  printf("\n=====================\n");
                      break;
            case '0': break;
            default : system("cls");
 
    printf("\n**********ERROR");
    printf("***********\n");
    printf("\n*****Please Try Agian");
    printf("*****\n");
                      right_circular_cylinder();
        }
}
void right_circular_cone(){
	double a,b,c;
    printf("\n\n          *\n        * * *\n      *   *   *\n    *     * h   *\n  *       *    r  *\n *        **********\n   *             *\n       *  *  *\n\n");
    printf("I know the 1 : r and h\n           2 : r and Volume\n           3 : r and Surface\n           4 : h and Volume\n           0 : Back\n\n");
    printf("Choose the option : ");
    oprn=getche();
    switch(oprn)
        {
            case '1': printf("\n\nEnter r : ");
					  scanf("%lf",&a);
					  printf("Enter h : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nVolume : %.2lf",M_PI*pow(a,2)*b/3);
					  printf("\nSurface : %.2lf\n",M_PI*a*(a+pow(pow(a,2)+pow(b,2),0.5)));
					  printf("\n=====================\n");
                      break;
            case '2': printf("\n\nEnter r : ");
					  scanf("%lf",&a);
					  printf("Enter Volume : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nh : %.2lf",3*b/(M_PI*pow(a,2)));
					  printf("\nSurface : %.2lf\n",M_PI*a*(a+pow(pow(a,2)+pow(3*b/(M_PI*pow(a,2)),2),0.5)));
					  printf("\n=====================\n");
                      break; 
            case '3': printf("\n\nEnter r : ");
					  scanf("%lf",&a);
					  printf("Enter Surface : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nh : %.2lf",pow(pow((b-pow(a,2)*M_PI)/(M_PI*a),2)-pow(a,2),0.5));
					  printf("\nVolume : %.2lf\n",M_PI*pow(a,2)*pow(pow((b-pow(a,2)*M_PI)/(M_PI*a),2)-pow(a,2),0.5)/3);
					  printf("\n=====================\n");
                      break;
            case '4': printf("\n\nEnter h : ");
					  scanf("%lf",&a);
					  printf("Enter Volume : ");
					  scanf("%lf",&b);
					  printf("\n=====================\n");
					  printf("\nr : %.2lf",pow(3*b/(M_PI*a),0.5));
					  printf("\nSurface : %.2lf\n",M_PI*pow(3*b/(M_PI*a),0.5)*(pow(3*b/(M_PI*a),0.5)+pow(pow(pow(3*b/(M_PI*a),0.5),2)+pow(a,2),0.5)));
					  printf("\n=====================\n");
					  break;
            case '0': break;
            default : system("cls");
    printf("\n**********ERROR");
    printf("***********\n");
    printf("\n*****Please Try Agian");
    printf("*****\n");
                      right_circular_cone();
        }
	
}
