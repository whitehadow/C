#include <stdio.h>

int Binary[32];
int i = 0;
int Dec_to_Bin(int n)
{

    while (n > 0)
    {
        Binary[i] = n % 2;
        n = n / 2;
        i++;
    }    
        for(int j = i - 1; j >= 0; j--)
        {
            printf("%d", Binary[j]);
        }
}

int Bin_to_Dec(int n)
{

}
int main()
{
    int Decimalnumber;
    int Binarynumber;
    int userchoice;

    printf("Welcome to Binary to decimal calculator or vice versa\n");
    printf("-----------------------------------------------------\n");
    printf("1 = Decimal to binary\n");
    printf("2 = Binary to Decimal\n");
    printf("3 = Exit program\n");
    printf("Type here what you want do\n");
    scanf("%d",&userchoice);

    switch (userchoice)
    {
    case 1:
        printf("Type a decimal number: \n");
        scanf("%d",&Decimalnumber);
        Dec_to_Bin(Decimalnumber);
        break;
    case 2:
        printf("Type a Binary number : \n");
        scanf("%d",&Binarynumber);
        Bin_to_Dec(Binarynumber);   
    case 3: 
        break;

    default:
        break;
    }

    return 0;
}