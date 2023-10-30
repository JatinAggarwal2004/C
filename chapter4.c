/*#include <stdio.h>

int main()
{
    char chr ;
    printf("Enter the character through keyboard: ") ; 
    scanf("%c", &chr) ; 
    if(chr>=65 && chr<=90)
        printf("The Character %c is a capital letter", chr) ;
    else if(chr>=97 && chr<=122)
        printf("The character %c is a smalll letter", chr) ; 
    else if(chr>=48 && chr<=57)
        printf("The given character is %c\n which is a number",chr) ;
    else if((chr>=0 && chr<=47) || (chr>=58 && chr<=64) || (chr>=91 && chr<=96) || (chr>=123 && chr<=127)) 
        printf("the input character %c is a special character\n",chr);
}
    
    //return 0 ;


// int main()

//     int area, length, breath ;
//     printf("Enter the Length: ") ;
//     scanf("%d", &length) ;
//     printf("Enter the Breath: ") ;
//     scanf("%d", &breath) ;
//     area = length * breath ; 
//     printf("area is:%d", area) ; 
//     return 0;
// }*/

/*# include <stdio.h>

int main()
{
    int i = 4, j = -1, k = 0, w, x, y, z ;
    w = i || j || k ;
    x = i&&j&&k ;
    y = i || j && k;
    z = i&&j || k ;
    printf("w = %d x = %d y = %d z = %d\n", w,x,y,z) ;
    return 0;
}*/

//# include <stdio.h>

/*To calculate salary for different groups based in gender and year of experience*/

// #include <stdio.h>

/*int main() {
    char gender, qual;
    int yoe, sal;
    printf("Enter the gender (Male: M and Female: F), years of experience and qualification (Postgrad: PG and Graduation: G): ");
    scanf(" %c%d %c", &gender, &yoe, &qual);

    if (gender == "M" && yoe >= 10 && qual == "P")
        sal = 11000;

    if ((gender == "M" && yoe >= 10 && qual == 'G') || (gender == 'F' && yoe < 10 && qual == 'P') || (gender == 'M' && yoe < 10 && qual == 'P'))
        sal = 10000;
    if (gender == 'M' && yoe < 10 && qual == 'G')
        sal = 7000;
    if (gender == 'F' && yoe >= 10 && qual == 'P')
        sal = 12000;
    if (gender == 'F' && yoe >= 10 && qual == 'G')
        sal = 9000;
    if (gender == 'F' && yoe < 10 && qual == 'G')
        sal = 6000;

    printf("Salary = %d\n", sal);
    return 0;
}*/

//int main()
// {
//     int i = -4, j, num ;
//     j = ( num < 0 ? 0 : num * num) ;
//     printf("%d\n", j) ;
//     return 0 ;
// }

/*int main()
{
    int k, num = 30 ;
    k = ( num > 5 ? (num <= 10 ? 100:200) : 500) ;
    printf("%d\n", k) ;
    return 0;
}*/

/*int main()
{
    int i = 10, j = 20 ; 
    if((i==5)&&(j==10))
        printf("Have a nice day\n");
    else 
        printf("Have a good day\n") ;
    return 0;
}*/

// D.) 

/*int main()
{
    int x ;
    printf("Enter the value of x: ") ;
    scanf("%d", &x) ;
    if( x==2 && x!=0)
        printf("Hello\n");
    else    
        printf("Bye\n") ; 
    return 0 ;   
}*/

// E.)

/*int main()
{
    int j = 65;
    printf("j>=65 ? %d : %c\n", j) ;
    return 0 ;
}*/

// F.)  ye glt hai isse baad mein dekhna hai kya glti hai

/*int main()
{
    int i = 10, j ;
    i >= 5 ? j = 10 : j = 15 ;
    printf("%d%d\n", i, j) ; 
    return 0;
}*/


/* [D] Attempt the following questions

a.) If the length of three sides of a triangle are entered through keyboard, write a program to check wheather the triangle is an isoceles, an equilateral, a scalene or a right angled triangle.*/

// #include <stdio.h>
// #include  <math.h>

/*int main()
{
    float side1, side2, side3 ;
    printf("Emtter the sides of triangle: ") ;
    scanf("%f%f%f", &side1, &side2, &side3) ;
    if (side1 == side2 && side2  == side3 && side1 == side2)
        printf("The given triangle is an equilateral triangle") ;
    else if(side1 == side2 || side1 == side3 || side2 == side3)
        printf("The given triangleis an isoceles triangle") ;
    else if ((side1 * side1 == side2 * side2 + side3 * side3) || (side2 * side2 == side3 * side3 + side1 * side1) || (side3 * side3 == side2 * side2 + side1 * side1))
        printf("This is a right angle triangle") ;
    else
        printf("The triagle doesn't belong to any of the given category") ;
}*/

/* (b) In digital world colors are specified in Red-Green-Blue (RGB) format, with values of R, G, B varying on an interger scale from 0 to 255. In print publishing the colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format, with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0. Write a program that converts RGB color to CMYK color as per the following formulae:
 White = Max(Red/255,green/255,Blue/255)
 Cyan = (White-Red/255)/(White)
 Magenta = (White-Green/255)/(White)
 Black = 1-White
 Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1.*/


/* #include <stdio.h>

int main()
{
float red, green, blue, cyan, magenta, yellow, black, white, rf, gf, blf;

printf("Enter the value of Red (0-255): ") ;
scanf("%f", &red) ;

printf("Enter the value of Green (0-255): ") ;
scanf("%f", &green) ;

printf("Enter the value of Blue (0-255): ") ;
scanf("%f", &blue) ;

rf = red / 255 ;
gf = green / 255 ;
blf = blue / 255 ;
// if((rf>=gf) && (rf >= blf))                                       //i have to check the problem with if-else statement here why iy's not working
//     printf("The value for white is %f", rf) ; 

// else if((gf>=rf) && (gf >= blf))
//     printf("The value for white is %f", gf) ; 

// else if((blf>=gf) && (blf >= rf))
//     printf("The value for white is %f", blf) ;

white = (rf>gf) ? ((rf > blf) ? rf : blf) : ((gf > blf) ? gf : blf) ;                   //This is the statement to be used for the input of white this is the proper way

printf("\nThe value of white is: %f\n", white) ;

if(red == 0 && green == 0 && blue == 0)
    {
        cyan = 0 ;
        yellow = 0 ;
        magenta = 0 ;
        black = 1 ;
    }
else
    {
        cyan = (white - rf) / white ; 
        magenta = (white - gf) / white ; 
        yellow = (white - blf) / white ; 
        black = 1 - white ;
    }

printf("The value of cyan %f\n",cyan) ;
printf("The value of magenta is %f\n", magenta) ;
printf("The value of yellow is %f\n", yellow) ;
printf("The value of Black is %f\n", black) ;
return 0;
}*/


/*(c) A certain grade of steel is graded according to the following conditions:
        1. Hardness must be greater than 50.
2. Carbon content must be less than 0.7
3. Tensile strength must be greater than 5600

The grades are as follows:

Grade is 10, if all three conditions are met.
Grade is 9, if conditions 1 and 2 are met.
Grade is 8, if conditions 2 and 3 are met.
Grade is 7, if conditions 1 and 3 are met.
Grade is 6, if only one condition is met.
Grade is 5, if none of the conditions are met.

Write a C program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel.*/

/*#include <stdio.h>

int main()
{
    float hardness , carbon_content , Tensile_strength ;

    printf("Enter the value of hardness: ") ;
    scanf("%f",&hardness) ;

    printf("Enter the value of Carbon Content: ") ;
    scanf("%f",&carbon_content) ;

    printf("Enter the value of Tensile strength: ") ;
    scanf("%f", &Tensile_strength) ;

    if(hardness > 50 && carbon_content < 0.7 && Tensile_strength > 5600) 
        {
            printf("It is Grade 10 steel") ;
        }

    else if(hardness > 50 && carbon_content < 0.7)
        {
            printf("It is a Grade 9 steel") ;
        }

    else if(carbon_content < 0.7 && Tensile_strength > 5600)
        {
            printf("It is a Grade 8 steel") ;
        }

    else if(hardness > 50 && Tensile_strength > 5600)
        {
            printf("It is a Grade 7 steel") ;
        }

    else if(hardness > 50 || carbon_content < 0.7 || Tensile_strength > 5600)
        {
            printf("It is Grade 6 steel") ;
        }

    else
        {
            printf("It is a Grade 5 steel") ;
        }

    return 0 ;
}*/

/* (d) The Body Mass Index (BMI) is defined as ratio of the weight of a person (in kilograms) to the square of the height (in meters). Write a c program that receives weight and height, calculates the BMI, and reports the BMI category as per the following table:
Starvation     : <15
Anorexic       : 15.1 to 17.5
Underweight    : 17.6 to 18.5
Ideal          : 18.6 to 24.9
Overweight     : 25 to 25.9
Obese          : 30 to 30.9
Morbidly Obese : >=40*/

/*#include <stdio.h>
#include <math.h>

int main()
{
    float bmi, weight, height, starvation, anorexic, underweight,ideal, overweight, obese, morbidly_obese ;
    printf("Enter the Weight (in Kg): ") ; 
    scanf("%f", &weight) ;
    printf("Enter the Height (in meters): ") ;
    scanf("%f", &height) ;

    bmi = weight / pow(height,2) ;
    printf("B.M.I of a person is %f \n", bmi) ;

    if(bmi < 15)
        printf("The person is in starvation") ;
    else if((bmi >= 15.1 && bmi <= 17.5))
        printf("The person is Anorexic") ;
    else if(bmi >= 17.6 && bmi <= 18.5)
        printf("The person is Underweight") ;
    else if(bmi >= 18.6 && bmi <= 24.9)
        printf("The person is in ideal condition") ;
    else if(bmi >= 25 && bmi <= 25.9)
        printf("The person is Overweight") ;
    else if(bmi >= 30 && bmi <= 30.9)
        printf("The person is Obese") ;
    else if(bmi >= 40)
        printf("The person is Morbidly Obese") ;

    return 0 ;
}
*/

/* [E] Answer the following questions.

(a) Using conditional operators determine:*/

// to find the greatest of three number entered through the keyword

#include <stdio.h>

int main()
{
    float a, b, c, greatest;
    printf("Enter the value of a, b, c: ") ;
    scanf("%f%f%f", &a, &b, &c) ;

    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c) ;
    printf("The greatest number is %f", greatest) ;
    return 0; 
}

