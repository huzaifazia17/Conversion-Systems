#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void bases();
bool validateInput(int num, int sourceBase);
bool validateBinary(int num);
bool validateOctal(int num);
bool validateDecimal(int num);
bool validateHexaDecimal(int num);
int convert_binary_octal(int num);
int convert_binary_decimal(int num);
string convert_binary_hexa(int num);
int convert_octal_binary(int num);
int convert_octal_decimal(int num);
int convert_octal_hexa(int num);
int convert_decimal_octal(int num);
int convert_decimal_binary(int num);
int convert_decimal_hexa(int num);
int convert_hexa_octal(int num);
int convert_hexa_binary(int num);
int convert_hexa_decimal(int num);

int main()
{
    int num, sourceBase, targetBase;
    bool validInput = false;

    cout << "Welcome to the Numbering System Converter:" << endl;
    cout << "This Progrqam will allow you to convert between all the following:" << endl;
    cout << "Binary--Octal--Decimal--Hexadecimal" << endl;

    cout << "\nEnter a valid number to convert:" << endl;
    cin >> num;

    cout << "What is the source base? Please enter in valid format: " << endl;
    bases();
    cin >> sourceBase;
    validInput = validateInput(num, sourceBase);

    while (validInput == false)
    {
        cout << "\nEnter a valid number to convert that corresponds with the Base:" << endl;
        cin >> num;

        cout << "What is the source base? Please enter in valid format: " << endl;
        bases();
        cin >> sourceBase;
        validInput = validateInput(num, sourceBase);
    }

    cout << "What is the target base? Please enter in valid format: " << endl;
    bases();
    cin >> targetBase;

    if (sourceBase == 1 && targetBase == 2)
    {
    }
    else if (sourceBase == 1 && targetBase == 3)
    {
    }
    else if (sourceBase == 1 && targetBase == 4)
    {
    }
    else if (sourceBase == 2 && targetBase == 1)
    {
    }
    else if (sourceBase == 2 && targetBase == 3)
    {
    }
    else if (sourceBase == 2 && targetBase == 4)
    {
    }
    else if (sourceBase == 3 && targetBase == 1)
    {
    }
    else if (sourceBase == 3 && targetBase == 2)
    {
    }
    else if (sourceBase == 3 && targetBase == 4)
    {
    }
    else if (sourceBase == 4 && targetBase == 1)
    {
    }
    else if (sourceBase == 4 && targetBase == 2)
    {
    }
    else if (sourceBase == 4 && targetBase == 3)
    {
    }
    else
    {
        cout << "Your number after conversion results in: " << num << endl;
    }
}

void bases()
{
    cout << "For Binary: Select 1" << endl;
    cout << "For Octal: Select 2" << endl;
    cout << "For Decimal: Select 3" << endl;
    cout << "For Hexadecimal: Select 4" << endl;
}

//   VALIDATE SOURCE BASE INPUT FUNCTIONS---------------------

bool validateInput(int num, int sourceBase)
{
    bool test;

    if (sourceBase == 1)
    {
        test = validateBinary(num);
        return test;
    }
    else if (sourceBase == 2)
    {
        test = validateOctal(num);
        return test;
    }
    else if (sourceBase == 3)
    {
        test = validateDecimal(num);
        return test;
    }
    else if (sourceBase == 4)
    {
        test = validateHexaDecimal(num);
        return test;
    }
    return false;
}
bool validateBinary(int num)
{
    return true;
}
bool validateOctal(int num)
{
    return true;
}
bool validateDecimal(int num)
{
    return true;
}
bool validateHexaDecimal(int num)
{
    return true;
}

//   CONVERSION BETWEEN NUMBER SYSTEMS FUNCTIONS---------------------

int convert_binary_octal(int num)
{
    int octal = 0, decimal = 0, i = 0, rem;
    //converting binary to decimal
    while (num != 0)
    {
        rem = num % 10;
        int res = rem * pow(2, i);
        decimal += res;
        i++;
        num /= 10;
    }
    i = 1;
    //converting decimal to octal
    while (decimal != 0)
    {
        rem = decimal % 8;
        octal += rem * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}
int convert_binary_decimal(int num)
{
    int decimal = 0, i = 0, rem;

    while (num != 0)
    {
        rem = num % 10;
        int res = rem * pow(2, i);
        decimal += res;
        i++;
        num /= 10;
    }

    return decimal;
}
string convert_binary_hexa(int num)
{
    int hex = 0, mul = 1, chk = 1, i = 0, rem;
    char hexaDecNum[20];
    string output;

    while (num != 0)
    {
        rem = num % 10;
        hex = hex + (rem * mul);
        if (chk % 4 == 0)
        {
            if (hex < 10)
                hexaDecNum[i] = hex + 48;
            else
                hexaDecNum[i] = hex + 55;
            mul = 1;
            hex = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul * 2;
            chk++;
        }
        num = num / 10;
    }
    if (chk != 1)
        hexaDecNum[i] = hex + 48;
    if (chk == 1)
        i--;
    for (i = i; i >= 0; i--)
    {
        char test = hexaDecNum[i];
        output += test;
    }

    return output;
}
int convert_octal_binary(int num)
{
    int decimal = 0, i = 0;
    long binary = 0;
    //converting octal to decimal
    while (num != 0)
    {
        int rem = num % 10;
        int res = rem * pow(8, i);
        decimal += res;
        i++;
        num /= 10;
    }
    i = 1;
    //converting decimal to binary
    while (decimal != 0)
    {
        int rem = decimal % 2;
        binary += rem * i;
        decimal /= 2;
        i *= 10;
    }
    return binary;
}
int convert_octal_decimal(int num)
{
    int decimal = 0, i = 0;
    while (num != 0)
    {
        int rem = num % 10;
        int res = rem * pow(8, i);
        decimal += res;
        i++;
        num /= 10;
    }
    return decimal;
}
// int convert_octal_hexa(int num)
// {
// }
// int convert_decimal_octal(int num)
// {
// }
// int convert_decimal_binary(int num)
// {
// }
// int convert_decimal_hexa(int num)
// {
// }
// int convert_hexa_octal(int num)
// {
// }
// int convert_hexa_binary(int num)
// {
// }
// int convert_hexa_decimal(int num)
// {
// }
