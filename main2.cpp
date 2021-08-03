#include <iostream>
#include <conio.h>
#include<stdio.h>
#include <Windows.h>  //includes

using namespace std;

double a,b,c;
char wybor,wyb;
string color;
//veriables


//function for change color
enum Kolor
{
    CZARNY,
    CIEMNONIEBIESKI,
    ZIELONY,
    TURKUSOWY,
    BRAZOWY,
    MORSKI,
    OLIWKOWY,
    JASNOSZARY,
    SZARY,
    NIEBIESKI,
    JASNOZIELONY,
    JASNONIEBIESKI,
    CZEROWNY,
    ROZOWY,
    ZLOTY,
    BIALY

};


void kolor( Kolor c )
{
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), c );
}


//function calc
double dzialanie(char znak,double a,double b)
{

    double wynik;

    if(znak=='1')
    {
        wynik= a+b;
        return wynik;
    }
       if(znak=='2')
    {
        wynik= a-b;
        return wynik;
    }
       if(znak=='3')
    {
        wynik= a*b;
        return wynik;
    }
       if(znak=='4')
    {
        wynik= a/b;
        return wynik;
    }
}


//function main
int main()
{






do {



  HANDLE hOut;
    hOut = GetStdHandle( STD_OUTPUT_HANDLE );
//menu
kolor(ZIELONY);    cout << "ROSZEK CALCULATOR "; kolor( OLIWKOWY); cout<<"             ROSZEK STUDIO";  kolor(ZLOTY);cout<<"                   VERSION: 1.0"<<endl;
    cout<<"------------------------------------------------------------------"<<endl;

kolor( CZEROWNY);
  cout<<" MAIN MENU "<<endl;
  cout<<"1. CALCULATE"<<endl;
  cout<<"2. EXIT"<<endl;

wyb=getch();
switch (wyb)
{ kolor(ZIELONY);
    case '1':{     cout<<"------------------------------------------------------------------"<<endl<<endl;
    cout<<"ENTER 1 NUMBER"<<endl;
    cin>>a;
    cout<<"ENTER 2 NUMBER"<<endl;
    cin>>b;


system("cls");
 kolor(ZIELONY);
cout<<"---------------------------------------------------------------------"<<endl;
cout<<"1. ADD "<<endl;
cout<<"2. SUBTRACT"<<endl;
cout<<"3.  MULTIPLE"<<endl;
cout<<"4.  DEVIDE"<<endl;


wybor=getch();
    switch (wybor)
    {


case '1':    dzialanie( wybor,  a,  b  );   break;

case '2':     dzialanie( wybor,  a,  b ) ;   break;
case '3':     dzialanie( wybor,  a,  b ) ;   break;
case '4':     dzialanie( wybor,  a,  b ) ;   break;

}
system("cls");
cout<<"\n\n YOUR RESOLT: "<<dzialanie(wybor,a,b)<<endl<<endl;

break;
}
case '2': exit(0); break;



}






 }while(true);
  getchar(); return 0;
}
