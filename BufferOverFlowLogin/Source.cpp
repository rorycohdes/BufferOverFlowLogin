#include <stdio.h>
#include <string.h>
#include <iostream>
//Configuration Properties >> C / C++ >> Preporocessor >> Preprocessor Definitions >> _CRT_SECURE_NO_WARNINGS

void accessGranted() {
    std::cout << "\n[+] Access Granted! You've exploited the buffer overflow.\n";
}

int main()
{
    char buff[15];
    std::cout << "Enter the password: ";
    std::cin >> buff;

    if (strcmp(buff, "password123456"))
    {
        std::cout << "Incorrect password";
    }
    else
    {
        std::cout << "Correct password";

    }

    return 0;
}