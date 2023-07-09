#include<stdio.h>
int decimalToBinary(int num){
    int binary[100];
    int i = 0;
    int x = num;

    while (num> 0){ 
        binary[i] = num% 2;
        num= num/ 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}
int decimalToOctal(int num1) {
    int octal[100];
    int i = 0;
    int x = num1;

    while (num1> 0) {
        octal[i] = num1% 8;
    num1= num1/ 8;
        i++;
    }

    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
    return 0;
}

int decimalToHexadecimal(int decimal) {
    int hexadecimal[100];
    int i = 0;
    int x = decimal;

    while (x > 0) {
        int remainder = x % 16;

        if (remainder < 10) {
            hexadecimal[i] = remainder;
        } else {
            hexadecimal[i] = remainder + 55;
        }

        x = x / 16;
        i++;
    }

    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        if (hexadecimal[j] >= 10) {
            printf("%c", hexadecimal[j]);
        } else {
            printf("%d", hexadecimal[j]);
        }
    }
    printf("\n");
    return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    if(num>0){
        decimalToBinary(num); 
        decimalToOctal(num);
        decimalToHexadecimal(num);
    }
    else {
        printf("Error:\tValue should be greater than 0");
    }
    return 0;
}

