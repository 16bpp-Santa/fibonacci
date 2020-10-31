//Coded by Santa
//all rights reserved © 2020
//GitHub.com

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
long double  a, b, c;

int main()
{   
	system("color 1f");
    a=0;
    b=1;
	cout<<"Thanks for use the Santa's code please comment and share this algorithm"<<endl;
	Sleep(1000);
	cout<<"Santa-All rights reserved © 2020- GitHub"<<endl;
	Sleep(7000);
    for (int i=0; i < 10000 ; i++)
    {
        c=a+b;
        cout<<c<<endl;
        Sleep(1000);
        b=c+a;
        cout<<b<<endl;
        Sleep(1000);
        a=b+c;
        cout<<a<<endl;
        Sleep(1000);
    }	
    getch();
    return 0;
}
