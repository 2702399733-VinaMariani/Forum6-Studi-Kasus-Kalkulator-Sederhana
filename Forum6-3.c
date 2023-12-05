#include <stdio.h>

int main()
{
    //deklarasi variable
    char operator;
    double num1, num2, result;
 
    //input menu yang diinginkan
    printf("Pilih Menu operasi yang akan dilakukan : \n (+) untuk penambahan \n (-) untuk pengurangan \n (*) untuk pembagian \n (/) untuk pembagian \n\n");
    printf("Menu yang dipilih : ");
    scanf ("%c", &operator);

    //input bilangan yang akan dioperasikan
    printf("Masukkan dua bilangan yang akan dihitung sesuai operasi yang telah dipilih :  ");
    scanf("%lf %lf", &num1, &num2);

    //melakukan operasi sesuai dengan operasi yang dipilih
    switch (operator)
    {
        case '+':
            result = num1 + num2;
            printf("Hasil : %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Hasil : %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Hasil : %.2lf\n", result);
            break;

        case '/':
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("Hasil : %.2lf\n", result);
            }
            else
            {
                printf("Error, Pembagian oleh nol tidak diizinkan. \n");
            }
            break;

        default:
            printf("Operasi Tidak valid");
            break;
    }    
    return 0;
}