#include <bits/stdc++.h>

using namespace std;

void regresion(double x[], double y[], int n)
{
    double sumx = 0, sumxy = 0, st = 0, sumy = 0, sumx2 = 0, sr = 0, sumy2 = 0, xm, ym, a1, a0, syx, r2;
    for(int i = 0; i<n; i++)
    {
        sumx += x[i]; 
        sumy += y[i]; 
        sumxy += x[i] * y[i]; 
        sumx2 += x[i] * x[i]; 
        sumy2 += y[i] * y[i]; 
    }
    xm = sumx/n;
    ym = sumy/n;
    a1 = (n * sumxy - sumx * sumy) / (n * sumx2 - sumx * sumx);
    a0 = ym-a1*xm;
    for(int i = 0; i < n; i++)
    {
        st += pow((y[i] - ym),2);
        sr += pow(y[i] - a1*x[i] - a0,2);
    }
    syx = pow(sr/(n-2),0.5);
    r2 = (st - sr) / st;
    printf("Regresion lineal\n");
    printf("X\t\tY\n");
    for(int i = 0; i<n; i++)
        printf("%lf\t%lf\n\n", x[i], y[i]);
    printf("\na1: %lf\n", a1);
    printf("a0: %lf\n", a0);
    printf("sy|x: %lf\n", syx);
    printf("r^2: %lf\n", r2);
}

int main()
{
    int n;
    printf("Regresion lineal\n");
    printf("Ingresa la cantidad de coordenadas a capturar: ");
    scanf("%d",&n);
    system("cls");
    double x[n-1],y[n-1];
    for(int i = 0; i < n; i++)
    {
    	printf("Regresion lineal\n");
        printf("\nIngresa el valor X%i: ", i + 1);
        scanf("%lf", &x[i]);
        printf("\nIngresa el valor Y%i: ", i + 1);
        scanf("%lf", &y[i]);
        system("cls");
    }
    regresion(x, y, n);
    system("PAUSE");
    return 0;
}
