#include <stdio.h>
#include <windows.h>
#include <math.h>
void bmi () {
    double mass , height , bmi;
    printf("==============================Calculatrice de BMI==================================\n");
    printf("entrer votre mass en kilogram : \n");
    scanf("%lf" , &mass);
    printf("entrer votre hauteur en metre : \n");
    scanf("%lf" , &height);
    bmi = mass/pow(height, 2);
    printf("votre bmi est : %.2lf\n" , bmi);
    printf("=====================================================================================\n");
}
void distance3d () {
    float x1, x2, y1, y2, z1, z2, distance;
    printf("=====================Calculatrice du Distance Dans un plan 3D========================\n");
    printf("veuillez entrer x1 : \n");
    scanf("%f", &x1);
    printf("veuillez entrer x2 : \n");
    scanf("%f", &x2);
    printf("veuillez entrer y1 : \n");
    scanf("%f", &y1);
    printf("veuillez entrer y2 : \n");
    scanf("%f", &y2);
    printf("veuillez entrer z1 : \n");
    scanf("%f", &z1);
    printf("veuillez entrer z2 : \n");
    scanf("%f", &z2);
    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
    printf("la distance est : %.2f\n", distance);
    printf("=====================================================================================\n");
}
void distance (){
    float km ;
    float yards ;
    printf("=============================Calculatrice de Distance==============================\n");
    printf("vouillier entrer la distance en km : \n");
    scanf("%f" ,&km);
    yards = km * 1093.61;
    system("cls");
    printf("la distance est equivalant a %.2f yards .\n", yards);
    printf("=====================================================================================\n");
}
void etat () {
    float c;
    printf("=====================Calculatrice de L'etat d'un Liquide===========================\n");
    printf("entrer votre temperature  en C°: \n");
    scanf("%f" ,&c);
    if( c < 0 ){
        printf("l'etat de l'eau est solide\n");
    }
    else if (0 < c && c < 100){
        printf("l'etat de l'eau est liquide\n");
    }
    else if (c >= 100){
        printf("l'etat de l'eau est gazeux\n");
    }
    printf("=====================================================================================\n");
}
void fact(){
    int n , fact = 1;
    printf("======================Calculatrice de Factoriel d'un Nombre========================\n");
    printf("entrer le nombre : \n");
    scanf("%d",&n);
    for (int i = 1 ; i <= n ; i++){
        fact*= i ;
    }
    printf("le nombre est :%d\n" , fact);
    printf("=====================================================================================\n");
}
void moyennegeo(){
    float a , b , c , pw , moyenne;
    printf("====================Calculatrice de Moyenne Geometrique=============================\n");
    printf("vouillez entrer le premier nombre : \n");
    scanf("%f",&a);
    printf("vouillez entrer le deuxieme nombre : \n");
    scanf("%f",&b);
    printf("vouillez entrer le troisieme nombre : \n");
    scanf("%f",&c);
    pw = (a * b * c);
    moyenne = pow(pw, (1.0 / 3));
    printf("La moyenne geometrique des nombres est : %.2f\n" , moyenne);
    printf("=====================================================================================\n");
}
void moyennepon(){
    float a , b , c ;
    float moy ;
    printf("=======================Calculatrice de Moyenne Ponderer============================\n");
    printf("entrer le premier nombre : \n");
    scanf("%f",&a);
    printf("entrer le deuxieme nombre : \n");
    scanf("%f", &b);
    printf("entrer le troisieme nombre : \n");
    scanf("%f", &c);
    a = a * 2;
    b = b * 3;
    c = c * 5;
    moy = (a + b + c) / 10;
    printf("la moyen ponderer des nombre est %.2f\n" , moy);
    printf("=====================================================================================\n");
}
void speed(){
    float kmh ;
    float ms ;
    printf("============================Calculatrice de Vitesse================================\n");
    printf("vouillier entrer la vitesse en km/h : \n");
    scanf("%f" ,&kmh);
    ms = kmh * 0.27778;
    system("cls");
    printf("la vitesse est equivalant a %.2f m/s .\n", ms);
    printf("=====================================================================================\n");
}
void temp(){
    float C , K;
    printf("====================Calculatrice de Temperature KELVIN=============================\n");
    printf("vouillier entrer la temperature in C : \n");
    scanf("%f" ,&C);
    K = C + 273.15;
    system("cls");
    printf("votre temperature est equivalant a %.2f kelvin .\n", K);
    printf("=====================================================================================\n");
}
void volume(){
    float r , volume , pi = 3.14159265359 ;
    printf("====================Calculatrice de Volume d'un Sphere=============================\n");
    printf("entrer le rayon du sphere : \n");
    scanf("%f", &r);
    volume = (4/3)*pi*pow(r,3);
    printf("le volume du sphere est : %.2f\n" , volume);
    printf("=====================================================================================\n");
}
void calculatrice(){
    float n1 , n2 , result;
    char operator;
    printf("====================================Calculatrice===================================\n");
    printf("entrer le premier nombre : ");
    scanf("%f" , &n1);
    printf("entrer le deuxieme nombre : ");
    scanf("%f" , &n2);
    printf("entrer l'operateur que vous voulez (+ , - , * , / , ^) : ");
    scanf(" %c" , &operator);
    if (operator == '+')
    {
        result = n1 + n2;
        printf ("  %.2f  \n",  result);
    }
    if (operator == '-')
    {
        result = n1 - n2;
        printf ("  %.2f  \n",  result);
    }
    if (operator == '*')
    {
        result = n1 * n2;
        printf ("  %.2f  \n",  result);
    }
    if (operator == '/')
    {
        result = n1 / n2;
        printf ("  %.2f  \n",  result);
    }
    if (operator == '^')
    {
        result = pow(n1 , n2);
        printf ("  %.2f  \n",  result);
    }
    printf("=====================================================================================\n");
}
int main(){
    int option;
    do{
    printf("========================Welcome to the Super Calculator==============================\n");
    printf("choisie le type de calculation que vous voulez : \n");
    printf(" 1- Calculatrice Normale .\n");
    printf(" 2- Calculatrice du Factoriel d'un nombre .\n");
    printf(" 3- Calculatrice du BMI .\n");
    printf(" 4- Calculatrice du Moyenne Ponderer du trois nombres .\n");
    printf(" 5- Calculatrice du Moyenne Geometrique du trois nombres .\n");
    printf(" 6- Calculatrice du Distance de deux points dans un plan 3D .\n");
    printf(" 7- Calculatrice du Distance (km to yard) .\n");
    printf(" 8- Calculatrice du Volume d'un sphere .\n");
    printf(" 9- Calculatrice du Temperature (C to KELVIN) .\n");
    printf(" 10- Calculatrice du L etat d'un liquide .\n");
    printf("=====================================================================================\n");
    scanf("%d" , &option);
    switch(option){
        case 1 :
            system("cls");
            calculatrice() ;
            break;
        case 2 :
            system("cls");
            fact() ;
            break;
        case 3 :
            system("cls");
            bmi() ;
            break;
        case 4 :
            system("cls");
            moyennepon();
            break ;
        case 5 :
            system("cls");
            moyennegeo() ;
            break;
        case 6 :
            system("cls");
            distance3d() ;
            break;
        case 7 :
            system("cls");
            distance() ;
            break;
        case 8 :
            system("cls");
            volume() ;
            break;
        case 9 :
            system("cls");
            temp() ;
            break ;
        case 10 :
            system("cls");
            etat() ;
            break ;
        default :
            printf("vouillez entre un choix valid : ");
            system("cls");
        }
    }while(option != 10);
    return 0;
}
