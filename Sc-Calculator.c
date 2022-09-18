#include <stdio.h>
#include <math.h>

struct complex
{
    float real;
    float img;
} c1, c2;

int main()
{
    int m, n, q;
    int a, b, c, d, A, B;
    printf(" 1.Normal  \n");
    printf(" 2.Complex \n");
    printf(" 3.Equation \n");
    printf(" 4.Matrix \n");

    printf("Enter your choice: \n");
    scanf("%d", &m);

    printf("\n\n\n");

    switch (m)
    {
    case 1:

        printf(" \t CALCULATOR \n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3 Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");

        printf("Please enter your choice\n");
        scanf("%d", &n);

        switch (n)
        {

        case 1:
        {
            int x;
            printf(" How many numbers do you want to add? :  \n");
            scanf("%d", &x);
            printf("Enter your numbers:-\n");
            double temp = 0;
            for (int i = 0; i < x; i++)
            {

                double num;
                scanf("%lf", &num);
                temp += num;
            }
            printf("%lf", temp);

            break;
        }

        case 2:
        {
            double num, num2;
            printf("Enter your numbers:-\n");
            scanf("%lf", &num);
            scanf("%lf", &num2);
            double ans = num - num2;
            printf("%lf", ans);
            break;
        }

        case 3:
        {
            int x;
            printf(" How many numbers do you want to Multiply? :  \n");
            scanf("%d", &x);
            printf("Enter your numbers:-\n");
            double temp = 1;
            for (int i = 0; i < x; i++)
            {
                double num;
                scanf("%lf", &num);
                temp *= num;
            }
            printf("%lf", temp);
            break;
        }
        case 4:
        {
            double num, num2;
            printf("Enter your numbers:-\n");
            scanf("%lf", &num);
            scanf("%lf", &num2);
            double ans = num / num2;
            printf("%lf", ans);
            break;
        }

        default:
            break;
        }
        break;

    case 2:
    {
        // complex numbers

        printf(" 1.Modulus  \n");
        printf(" 2.Conjugate \n");
        printf(" 3.Argument \n");
        printf(" 5.Subtraction\n");
        printf(" 4.Addition\n");
        printf(" 6 Multiplication\n");
        printf(" 7.Division\n");
        printf(" 8.Square\n");
        printf(" 9.Cube\n");
        printf(" 10.Square root\n");
        printf(" 11.Reciprocal\n");
        printf(" 12.Exponential");

        float mod1, argu1, mod2, argu2;
        int c;
        printf("\nEnter your choice: ");
        scanf("%d", c);

        switch (c)
        {
        case 1:
        {

            printf("** Enter Complex Number  **\n");
            printf("-- Real Part: ");
            scanf("%f", &c1.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c1.img);

            printf("\nComplex Number  : Z - (%f) + (%f)i\n", c1.real, c1.img);
            mod1 = pow((pow(c1.real, 2) + pow(c1.img, 2)), 0.5);
            printf("\nModulus of Complex Number : |Z| - %f\n", mod1);
            break;
        }

        case 2:
        {
            printf("** Enter Complex Number  **\n");
            printf("-- Real Part: ");
            scanf("%f", &c1.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c1.img);

            printf("\nComplex Number  : Z - (%f) + (%f)i\n", c1.real, c1.img);
            printf("\nConjugate of Complex Number-1: C1 = (%f) + (%f)i\n", c1.real, -1 * c1.img);
            break;
        }

        case 3:
        {
            printf("** Enter Complex Number  **\n");
            printf("-- Real Part: ");
            scanf("%f", &c1.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c1.img);

            printf("\nComplex Number  : Z - (%f) + (%f)i\n", c1.real, c1.img);

            argu1 = atan(c1.img / c1.real);
            printf("Argument of Complex Number: ARG(Z)= %f\n", argu1);
            break;
        }

        case 4:
        {
            printf("** Enter Complex Number -1 **\n");
            printf("-- Real Part: ");
            scanf("%f", &c1.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c1.img);
            printf("** Enter Complex Number -2 **\n");
            printf("-- Real Part: ");
            scanf("%f", &c2.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c2.img);

            printf("\nComplex Number  : Z1 - (%f) + (%f)i\n", c1.real, c1.img);
            printf("\nComplex Number  : Z2 - (%f) + (%f)i\n", c2.real, c2.img);

            printf("\nComplex Number after Addition: (Z1+Z2) = (%f) + (%f)i\n", c1.real + c2.real, c1.img + c2.img);
            break;
        }

        case 5:
        {
            printf("** Enter Complex Number -1 **\n");
            printf("-- Real Part: ");
            scanf("%f", &c1.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c1.img);
            printf("** Enter Complex Number -2 **\n");
            printf("-- Real Part: ");
            scanf("%f", &c2.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c2.img);

            printf("\nComplex Number  : Z1 - (%f) + (%f)i\n", c1.real, c1.img);
            printf("\nComplex Number  : Z2 - (%f) + (%f)i\n", c2.real, c2.img);

            printf("Complex Number after Subtraction: (C1-C2) = (%f) + (%f)i\n", c1.real - c2.real, c1.img - c2.img);
            break;
        }

        case 6:
        {
            printf("** Enter Complex Number -1 **\n");
            printf("-- Real Part: ");
            scanf("%f", &c1.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c1.img);
            printf("** Enter Complex Number -2 **\n");
            printf("-- Real Part: ");
            scanf("%f", &c2.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c2.img);

            printf("\nComplex Number  : Z1 - (%f) + (%f)i\n", c1.real, c1.img);
            printf("\nComplex Number  : Z2 - (%f) + (%f)i\n", c2.real, c2.img);

            printf("Complex Number after Multiplication: (C1*C2) = (%f) + (%f)i\n", (c1.real * c2.real - c1.img * c2.img), (c1.real * c2.img + c2.real * c1.img));
            break;
        }

        case 7:
        {

            printf("** Enter Complex Number -1 **\n");
            printf("-- Real Part: ");
            scanf("%f", &c1.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c1.img);
            printf("** Enter Complex Number -2 **\n");
            printf("-- Real Part: ");
            scanf("%f", &c2.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c2.img);

            printf("\nComplex Number  : Z1 - (%f) + (%f)i\n", c1.real, c1.img);
            printf("\nComplex Number  : Z2 - (%f) + (%f)i\n", c2.real, c2.img);

            printf("Complex Number after Divison: (C1/C2) = (%f) + (%f)i\n", (c1.real * c2.real + c1.img * c2.img) / (pow(c2.real, 2) + pow(c2.img, 2)), (c1.img * c2.real - c1.real * c2.img) / (pow(c2.real, 2) + pow(c2.img, 2)));
            break;
        }

        case 8:
        {
            printf("** Enter Complex Number  **\n");
            printf("-- Real Part: ");
            scanf("%f", &c1.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c1.img);

            printf("\nComplex Number  : Z - (%f) + (%f)i\n", c1.real, c1.img);

            printf("\nSquare of Complex Number : Z^2 - (%f) + (%f)i\n", pow(c1.real, 2) - pow(c1.img, 2), 2 * c1.real * c1.img);
            break;
        }
        case 9:
        {
            printf("** Enter Complex Number  **\n");
            printf("-- Real Part: ");
            scanf("%f", &c1.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c1.img);

            printf("\nComplex Number  : Z - (%f) + (%f)i\n", c1.real, c1.img);
            printf("\nCube of Complex Number : Z^3 - (%f) + (%f)i\n", (pow(c1.real, 3) - 3 * c1.real * pow(c1.img, 2)), 3 * pow(c1.real, 2) * c1.img - pow(c1.img, 3));
            break;
        }

        case 10:
        {
            printf("** Enter Complex Number  **\n");
            printf("-- Real Part: ");
            scanf("%f", &c1.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c1.img);

            printf("\nComplex Number  : Z - (%f) + (%f)i\n", c1.real, c1.img);
            if (c1.img < 0)
                printf("Square root of Complex Number-1 : SQRT(C1) = (+/-) [(%f) + -(%f)i]\n", sqrt((c1.real + sqrt(pow(c1.real, 2) + pow(c1.img, 2))) / 2), sqrt((-c1.real + sqrt(pow(c1.real, 2) + pow(c1.img, 2))) / 2));
            else
                printf("Square root of Complex Number-1 : SQRT(C1) = (+/-) [(%f) + (%f)i]\n", sqrt((c1.real + sqrt(pow(c1.real, 2) + pow(c1.img, 2))) / 2), sqrt((-c1.real + sqrt(pow(c1.real, 2) + pow(c1.img, 2))) / 2));

            break;
        }

        case 11:
        {
            printf("** Enter Complex Number  **\n");
            printf("-- Real Part: ");
            scanf("%f", &c1.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c1.img);

            printf("\nComplex Number  : Z - (%f) + (%f)i\n", c1.real, c1.img);

            printf("Reciprocal of Complex Number : 1/Z = (%f) + (%f)i\n", c1.real / (pow(c1.real, 2) + pow(c1.img, 2)), -c1.img / (pow(c1.real, 2) + pow(c1.img, 2)));
            printf("The reciprocal of a complex number = conjugate of the same ccomplex number,  dummy!");
            break;
        }

        case 12:
        {
            printf("** Enter Complex Number  **\n");
            printf("-- Real Part: ");
            scanf("%f", &c1.real);
            printf("-- Imaginary Part: ");
            scanf("%f", &c1.img);

            printf("\nComplex Number  : Z - (%f) + (%f)i\n", c1.real, c1.img);
            printf("Exponential of Complex Number : e^-Z = (%f) + (%f)i\n", exp(c1.real) * cos(c1.img), exp(c1.real) * sin(c1.img));
            break;
        }

        default:
            break;
        }
        break;
    }
    case 3:
    {

        int p;
        printf("1. Linear Equation\n");
        printf("2. Quadratic Equation\n");
        printf("3.Transendental Equation\n");
        scanf("%d", &p);

        switch (p)
        {
        case 1:
        {

            printf(" ax+by-A=0\n cx+dy-B=0 \n");
            printf("a= ");
            scanf("%d", &a);

            printf("b= ");
            scanf("%d", &b);

            printf("A= ");
            scanf("%d", &A);

            printf("\nc= ");
            scanf("%d", &c);

            printf("d= ");
            scanf("%d", &d);

            printf("B= ");
            scanf("%d", &B);

            printf(" %dx+%dy-%d=0\n %dx+%dy-%d=0 \n", a, b, A, c, d, B);
            /*
                   x     =      y     =      1
                ________    ________   ___________
               /b   A/     / A   a/    /a   b/
             / d   B/     / B    c/    /c   d/

             =>   x     =     y    =      1
               ________   ________   __________
                  P          Q           R

             */

            float P, Q, R;

            P = (b * B - A * d);
            Q = (c * A - a * B);
            R = -(a * d - b * c);

            printf("\tx= %f\n ", (P / R));
            printf("\ty= %f\n ", (Q / R));
            break;
        }

        case 2:
        {
            printf("\t ax^2+bx+c\n\n");

            double a, b, c, D, x, t, s; // change the variables
            printf("Enter the value of a: ");
            scanf(" %lf", &a);
            printf("Enter the value of b: ");
            scanf(" %lf", &b);
            printf("Enter the value of c: ");
            scanf(" %lf", &c);

            s = ((-b + sqrt(D)) / 2 * a);
            t = ((-b - sqrt(D)) / 2 * a);
            D = pow(b, 2) - 4 * a * c;

            printf("The roots of the equation are: %lf%lf", &x, &t);
        }
        default:
            break;
        }
    }

    case 4:
    {
        printf("1.Add\n");
        printf("2.Multiply\n");
        printf("3.Transpose\n");

        scanf("%d", &q);

        switch (q)
        {
        case 1:
        {
            int k, l, m = 3, n = 5, x, y;
            // press alt + up or down arrow
            printf("\n\n\n");

            printf("enter row: ");
            scanf("%d", &x);

            printf("\nenter culumn: ");
            scanf("%d", &y);

            int arr[x][y], arr2[x][y], arr3[x][y];

            printf("\n\n\n");

            printf("enter elements:\n\n");

            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    scanf("%d", &arr[i][j]);
                }
            }

            printf("enter elements:\n");

            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    scanf("%d", &arr2[i][j]);
                }
            }

            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    if (j == 0)
                        printf("|");
                    printf("%d ", arr[i][j]);
                }
                printf("|\n");
            }

            printf("\n\n\n");

            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    if (j == 0)
                        printf("|");
                    printf("%d ", arr2[i][j]);
                }
                printf("|\n");
            }

            printf("\n\n\n");

            for (k = 0; k < x; k++)
            {
                for (l = 0; l < y; l++)
                {
                    arr3[k][l] = arr[k][l] + arr2[k][l];
                }
            }

            for (k = 0; k < x; k++)
            {
                for (l = 0; l < y; l++)
                {
                    if (l == 0)
                        printf("|");
                    printf("%d  ", arr3[k][l]);
                }

                printf("|\n");
            }

            printf("\n\n\n");
            break;
        }
        case 2:
        {
            int x1, y1, x2, y2;
            // press alt + up or down arrow
            printf("\n\n\n");

            printf("for Matrix-1\n");
            printf("enter row: ");
            scanf("%d", &x1);

            printf("\nenter column: ");
            scanf("%d", &y1);

            printf("\n\n\n");

            printf("for Matrix-2\n");
            printf("enter row: ");
            scanf("%d", &x2);

            printf("\nenter column: ");
            scanf("%d", &y2);

            int arr[x1][y1], arr2[x2][y2], arr3[x1][y2];

            printf("\n\n\n");
            printf("Enter elements of A:\n");
            for (int i = 0; i < x1; i++)
            {
                for (int j = 0; j < y1; j++)
                {
                    scanf("%d", &arr[i][j]);
                }
            }
            printf("Enter elements of B:\n");
            for (int i = 0; i < x2; i++)
            {
                for (int j = 0; j < y2; j++)
                {

                    scanf("%d", &arr2[i][j]);
                }
            }
            printf("A =\n");
            for (int i = 0; i < x1; i++)
            {
                for (int j = 0; j < y1; j++)
                {

                    if (i == 0)
                        printf("|");

                    printf("%d ", arr[i][j]);
                }

                printf("|\n");
            }

            printf("\n\n\n");

            printf("B =\n");
            for (int i = 0; i < x2; i++)
            {
                for (int j = 0; j < y2; j++)
                {
                    if (j == 0)
                        printf("|");

                    printf("%d ", arr2[i][j]);
                }

                printf("|\n");
            }

            printf("\n\n\n");

            if (y1 == x2)
            {

                for (int i = 0; i < x1; i++)
                {
                    for (int j = 0; j < y2; j++)
                    {

                        int temp = 0;
                        for (int l = 0; l < y2; l++)
                        {
                            temp += arr[i][l] * arr2[l][j];
                        }
                        arr3[i][j] = temp;
                    }
                }
                printf(" A x B =\n");
                for (int i = 0; i < x1; i++)
                {
                    for (int j = 0; j < y2; j++)
                    {

                        if (j == 0)
                            printf("|");

                        printf("%d  ", arr3[i][j]);
                    }

                    printf("|\n");
                }

                printf("\n\n\n");
            }

            else
                printf("Dimention error\n");
            break;
        }

        case 3:
        {
            int arr[3][5];

            printf("\n\n\n");

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    scanf("%d", arr[i][j]); // rand() % 10;
                }
            }

            printf("\n\n\n");

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (j == 0)
                    {
                        printf("|");
                    }

                    printf("%d ", arr[i][j]);
                }
                printf("|\n");
            }

            printf("\n\n\n");

            printf("transpose of the given matrix = \n");

            for (int j = 0; j < 5; j++)
            {
                for (int i = 0; i < 3; i++)
                {
                    if (i == 0)
                    {
                        printf("|");
                    }

                    printf("%d ", arr[i][j]);
                }
                printf("|\n");
            }

            printf("\n\n\n");

            break;
        }

        default:
            break;
        }
    case 5:
    {
     //VECTOR 
    }

    default:
        break;
    }
    }

    return 0;
}
