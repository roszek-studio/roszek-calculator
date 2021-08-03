#include <iostream>
#include <conio.h>
#include<stdio.h>
#include <Windows.h>

using namespace std;

double a,b,c;
char wybor,wyb;
string color;



//funkcja do zmiany koloru
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


//funkcja obliczjaca
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


//funkcja glowna
int main()
{






do {



  HANDLE hOut;
    hOut = GetStdHandle( STD_OUTPUT_HANDLE );

kolor(ZIELONY);    cout << "ROSZEK CALCULATOR "; kolor( OLIWKOWY); cout<<"             ROSZEK STUDIO";  kolor(ZLOTY);cout<<"                   VERSION: 1.0"<<endl;
    cout<<"------------------------------------------------------------------"<<endl;

kolor( CZEROWNY);
  cout<<"MENU GLOWNE"<<endl;
  cout<<"1. OBLICZ"<<endl;
  cout<<"2. WYJDZ"<<endl;

wyb=getch();
switch (wyb)
{ kolor(ZIELONY);
    case '1':{     cout<<"------------------------------------------------------------------"<<endl<<endl;
    cout<<"Podaj 1 liczbe"<<endl;
    cin>>a;
    cout<<"Podaj 2 liczbe"<<endl;
    cin>>b;


system("cls");
 kolor(ZIELONY);
cout<<"---------------------------------------------------------------------"<<endl;
cout<<"1. DODAWANIE "<<endl;
cout<<"2. ODEJMOWANIE"<<endl;
cout<<"3.  MNOZENIE"<<endl;
cout<<"4. DZIELENIE"<<endl;


wybor=getch();
    switch (wybor)
    {


case '1':    dzialanie( wybor,  a,  b  );   break;

case '2':     dzialanie( wybor,  a,  b ) ;   break;
case '3':     dzialanie( wybor,  a,  b ) ;   break;
case '4':     dzialanie( wybor,  a,  b ) ;   break;

}
system("cls");
cout<<"\n\n twoj wynik: "<<dzialanie(wybor,a,b)<<endl<<endl;

break;
}
case '2': exit(0); break;



}






 }while(true);
  getchar(); return 0;
}
