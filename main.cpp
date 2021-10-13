#include <iostream>

using namespace std;

void bases();
bool validateInput(int num, int sourceBase);
bool validateBinary(int num);
bool validateOctal(int num);
bool validateDecimal(int num);
bool validateHexaDecimal(int num);
int convert_binary_octal(int num);
int convert_binary_decimal(int num);
int convert_binary_hexa(int num);
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
    if (sourceBase == 1)
    {
        validateBinary(num);
    }
    else if (sourceBase == 2)
    {
        validateOctal(num);
    }
    else if (sourceBase == 3)
    {
        validateDecimal(num);
    }
    else if (sourceBase == 4)
    {
        validateHexaDecimal(num);
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
}
int convert_binary_decimal(int num)
{
}
int convert_binary_hexa(int num)
{
}
int convert_octal_binary(int num)
{
}
// int convert_octal_decimal(int num)
// {
// }
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
