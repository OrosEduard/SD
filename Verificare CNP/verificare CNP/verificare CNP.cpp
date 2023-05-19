// verificare CNP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char CNP[13];

    cout << "Introduceti CNP-ul: ";
    cin.getline(CNP, 13);
    cout << endl;

    switch (CNP[0])
    {
        case '1':cout << "Sex Masculin"; break;
        case '2':cout << "Sex Feminin"; break;
        case '5':cout << "Sex Masculin"; break;
        case '6':cout << "Sex Feminin,"; break;
    }

    cout<< " iar data nasterii este " << CNP[5] << CNP[6] << "." << CNP[3] << CNP[4] << ".";

    switch (CNP[0])
    {
        case '1':cout << "19"; break;
        case '2':cout << "19"; break;
        case '5':cout << "20"; break;
        case '6':cout << "20"; break;
    }
    
    cout << CNP[1] << CNP[2] << " ." << endl;

    return 0;
}


