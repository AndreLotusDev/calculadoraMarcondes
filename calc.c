#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    int option = 0;

    void sum()
    {
        double number_one = 0;
        double number_two = 0;
        printf("\nDigite um numero: ");
        scanf("%lf", &number_one);
        //printf("\nNumero digitado: %0.2lf", number_one);
        printf("Digite o segundo numero: ");
        scanf("%lf", &number_two);
        //printf("\nNumero digitado: %0.2lf", number_two);
        printf("\n==========================\n");
        printf("%0.2lf + %0.2lf = %0.2lf", number_one, number_two, number_one + number_two);
        printf("\n==========================\n");
        system("pause");
    }

    void sub()
    {
       double number_one = 0;
        double number_two = 0;
        printf("\nDigite um numero: ");
        scanf("%lf", &number_one);
        //printf("\nNumero digitado: %0.2lf", number_one);
        printf("Digite o segundo numero: ");
        scanf("%lf", &number_two);
        //printf("\nNumero digitado: %0.2lf", number_two);
        printf("\n==========================\n");
        printf("%0.2lf - %0.2lf = %0.2lf", number_one, number_two, number_one - number_two);
        printf("\n==========================\n");
        system("pause");
    }

    void division()
    {
        double number_one = 0;
        double number_two = 0;
        printf("\nDigite um numero: ");
        scanf("%lf", &number_one);
        //printf("\nNumero digitado: %0.2lf", number_one);
        printf("Digite o segundo numero: ");
        scanf("%lf", &number_two);
        //printf("\nNumero digitado: %0.2lf", number_two);
        printf("\n==========================\n");
        printf("%0.2lf : %0.2lf = %0.2lf", number_one, number_two, number_one / number_two);
        printf("\n==========================\n");
        system("pause");
    }

    void mult()
    {
        double number_one = 0;
        double number_two = 0;
        printf("\nDigite um numero: ");
        scanf("%lf", &number_one);
        //printf("\nNumero digitado: %0.2lf", number_one);
        printf("Digite o segundo numero: ");
        scanf("%lf", &number_two);
        //printf("\nNumero digitado: %0.2lf", number_two);
        printf("\n==========================\n");
        printf("%0.2lf * %0.2lf = %0.2lf", number_one, number_two, number_one * number_two);
        printf("\n==========================\n");
        system("pause");
    }

    void square()
    {
        double square_number = 0;

        printf("Digite o numero: ");
        scanf("%lf", &square_number);

        printf("\n==========================\n");
        printf("A raiz quadrada do %0.2lf e: %0.2lf", square_number, sqrt(square_number));
        printf("\n==========================\n");
        system("pause");

    }

    void pow_calc()
    {
        double pow_number = 0;
        printf("Digite o numero: ");
        scanf("%lf", &pow_number);

        int pow_expoent = 0;
        printf("Digite o expoente: ");
        scanf("%i", &pow_expoent);

        printf("\n==========================\n");
        printf("%0.2lf ^^ %i = %0.2lf", pow_number, pow_expoent, pow(pow_number, pow_expoent));
        printf("\n==========================\n");
        system("pause");
    }

    void volume_conversion()
    {
        double value = 0;
        double deca = 0; 
        double hecto = 0;
        double km = 0;
        double dec = 0;
        double cen = 0;
        double mil = 0;

        printf("Digite o m3 - METRO CUBICO - a ser convertido: ");
        scanf("%lf", &value);
        printf("Valor digitado: %lf", value);

        deca = value/1000;
        hecto = deca/1000;
        km = hecto/1000;
        dec = value * 1000;
        cen = dec * 1000;
        mil = cen * 1000;

        printf("\n==================TABELA=======================\n");
        printf("\nDecametro cubico: %0.3lfL", deca);
        printf("\nHectometro cubico: %0.6lfL", hecto);
        printf("\nQuilometro cubico: %0.9lfL", km);
        printf("\nDecimetro cubico: %0.0lfL", dec);
        printf("\nCentimetro cubico: %0.0lfL", cen);
        printf("\nM ilimetro cubico: %0.0lfL", mil);
        printf("\n====================================================\n");
        system("pause");

    }

    void prime_number()
    {
        int number = 0;
        int rest = 0;

        printf("Digite o numero: ");
        scanf("%i", &number);

        for(int i = 1; i <= number; i++)
        {
            int number_temp = 0;
            number_temp = number % i;
            if(number_temp == 0)
            {
                rest++;
            }       
        }

              if(rest == 1 || rest == 2)
            {
                printf("E um numero primo\n");
            }
            else
            {
                printf("Nao e um numero primo\n");
            }

            system("pause");
    }

    void sin()
    {
        double sin_value = 0;
        double hypotenuse = 0;
        double opost_c = 0;

        printf("Digite o valor do cateto oposto: ");
        scanf("%lf", & opost_c);

        printf("Digite o valor da hipotenusa: ");
        scanf("%lf", &hypotenuse);

        sin_value = opost_c/hypotenuse;
        printf("Valor do seno: %0.2lf", sin_value);

        system("pause");
    }

    void cosine()
    {
        double cosine_value = 0;
        double hypotenuse = 0;
        double adjacent_c = 0;

        printf("Digite o valor do cateto adjacente: ");
        scanf("%lf", & adjacent_c);

        printf("Digite o valor da hipotenusa: ");
        scanf("%lf", &hypotenuse);

        cosine_value = adjacent_c/hypotenuse;
        printf("Valor do cosseno: %0.2lf\n", cosine_value);

        system("pause");
    }

    void tangent()
    {
        double tangent_value = 0;
        double opost_c = 0;
        double adjacent_c = 0;

        printf("Digite o valor do cateto adjacente: ");
        scanf("%lf", & adjacent_c);

        printf("Digite o valor do cateto oposto: ");
        scanf("%lf", &opost_c);

        tangent_value = opost_c/adjacent_c;
        printf("Valor do cosseno: %0.2lf\n", tangent_value);

        system("pause");
    }

    void log()
    {   
        int base = 0;
        int logarithming = 0;
        int controller = 1;
        printf("Digite o logaritmando: ");
        scanf("%i", &logarithming);

        printf("Digite a base: ");
        scanf("%i", &base);

        while(pow(logarithming, controller) != base)
        {
            controller ++;
        }

        printf("\nSua logaritmo e: %i\n", controller);
        system("pause");
    }

    void fac_()
    {
        int fac_number = 0;
        int holder = 1;

        printf("Digite o seu fatorial: ");
        scanf("%i", &fac_number);
        printf("O fatorial: %i =", fac_number);

        for(; fac_number > 1; fac_number--)
        {   
            holder *=  fac_number;
        }
        printf(" %i\n", holder);
        system("pause");
        
    }

    void panel()
    {
        printf("\nCalculadora\n");
        printf("======================\n\n");
        printf("\nOpcao 1 - Soma");
        printf("\nopcao 2 - Subtracao");
        printf("\nOpcao 3 - Divisao");
        printf("\nOpcao 4 - Multiplicacao");
        printf("\nOpcao 5 - Raiz Quadrada");
        printf("\nOpcao 6 - Potencia");
        printf("\nOpcao 7 - Medidas de Volume");
        printf("\nOpcao 8 - Numero primo");
        printf("\nOpcao 9 - Sen(a)");
        printf("\npcao 10 - Cosseno(a)");
        printf("\nOpcao 11 - Tangente(a)");
        printf("\nOpcao 12 - Logaritmo ");
        printf("\nOpcao 13 - Fatorial(X!)");
        printf("\n\n======================");

        printf("Digite a opcao escolhida: ");
        scanf("%i", &option);

        switch (option)
        {
        case 1:
            sum();
            panel();
            break;
        
        case 2:
            sub();
            panel();
            break;

        case 3:
            division(); 
            panel();
            break;

        case 4:
            mult();
            panel();
            break;
        
        case 5:
            square();
            panel();
            break;

        case 6:
            pow_calc();
            panel();
            break;
        
        case 7:
            volume_conversion();
            panel();
            break;

        case 8:
            prime_number();
            panel();
            break;

        case 9:
            sin();
            panel();
            break;

        case 10:
            cosine();
            panel();
            break;

        case 11:
            tangent();
            panel();
            break;

        case 12:
            log();
            panel();
            break;
        
        case 13:

            fac_();
            panel();
            break;

        default:
            break;
        }

    }  

    panel();
}