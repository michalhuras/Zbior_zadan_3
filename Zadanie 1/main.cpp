#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib> //rand
#include <time.h> //lub ctime -pobieranie czasu systemowego

using namespace std;

string szyfrowanie1(string tekst)
{

    string szukaj="a";
    int pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"1");
        pozycja =tekst.find(szukaj);
    }
    szukaj="b";
    pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"2");
        pozycja =tekst.find(szukaj);
    }
    szukaj="c";
    pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"3");
        pozycja =tekst.find(szukaj);
    }
    szukaj="d";
    pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"4");
        pozycja =tekst.find(szukaj);
    }
     szukaj="e";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"5");
        pozycja =tekst.find(szukaj);
    }
     szukaj="f";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,")");
        pozycja =tekst.find(szukaj);
    }
     szukaj="g";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"(");
        pozycja =tekst.find(szukaj);
    }
     szukaj="h";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"+");
        pozycja =tekst.find(szukaj);
    }
     szukaj="i";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"-");
        pozycja =tekst.find(szukaj);
    }
     szukaj="j";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"=");
        pozycja =tekst.find(szukaj);
    }
     szukaj="k";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,":");
        pozycja =tekst.find(szukaj);
    }
     szukaj="l";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"j");
        pozycja =tekst.find(szukaj);
    }
     szukaj="m";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"i");
        pozycja =tekst.find(szukaj);
    }
     szukaj="n";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"7");
        pozycja =tekst.find(szukaj);
    }
     szukaj="o";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"h");
        pozycja =tekst.find(szukaj);
    }
     szukaj="p";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"8");
        pozycja =tekst.find(szukaj);
    }
     szukaj="r";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"g");
        pozycja =tekst.find(szukaj);
    }
     szukaj="s";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"9");
        pozycja =tekst.find(szukaj);
    }
     szukaj="t";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"f");
        pozycja =tekst.find(szukaj);
    }
     szukaj="w";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"e");
        pozycja =tekst.find(szukaj);
    }
     szukaj="u";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"d");
        pozycja =tekst.find(szukaj);
    }
     szukaj="x";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"b");
        pozycja =tekst.find(szukaj);
    }
     szukaj="y";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"c");
        pozycja =tekst.find(szukaj);
    }
     szukaj="z";
     pozycja =tekst.find(szukaj);
    while (pozycja!=string::npos)
    {   tekst.replace(pozycja,1,"a");
        pozycja =tekst.find(szukaj);
    }
    return tekst;
}

void sortowanie_babelkowe(int *wsk_tablica,int n)
{
    int pomocnicza=0;
    for (int k=0;k<n;k++)
    {
          for (int j=0;j<n;j++)
        {
            if (*(wsk_tablica+j)>*(wsk_tablica+j+1))
            {
            pomocnicza=*(wsk_tablica+j);
            *(wsk_tablica+j)=*(wsk_tablica+j+1);
            *(wsk_tablica+j+1)=pomocnicza;
            }
        }
    }




}

void quick_sort(int *wsk_tablicy,int p, int q)
{
    int v=wsk_tablicy[(p+q)/2];
    int i=p,j=q,x;
    do {
        while (wsk_tablicy[i]<v)i++;
        while (wsk_tablicy[j]>v)j--;
        if(i<=j)
        {
            x=wsk_tablicy[i];
            wsk_tablicy[i]=wsk_tablicy[j];
            wsk_tablicy[j]=x;
            i++;j--;
        }
    }while (i<=j);
    if (j>p) quick_sort(wsk_tablicy,p,j);
    if (j<q) quick_sort(wsk_tablicy,i,q);
}


int main()
{
    //ZADANIE 1
    /*
    //Wyświetl liczby od 1 do 100. Jeżeli liczba jest podzielna przez 3, to zamiast
    //liczby wyświetl słowo “Fizz”. Jeżeli liczba jest podzielna przez 5 to zamiast
    //liczby wyświetl słowo “Buzz”. Jeżeli liczba jest podzielna zarówno przez 3 jak
    //i 5, wyświetl “FizzBuzz”

    for (int i=1;i<=100;i++)
    {
        if ((i%3==0) && (i%5!=0)) cout<<"Fizz"<<endl;
        else if ((i%5==0) &&(i%3!=0)) cout<<"Buzz"<<endl;
        else if ((i%3==0) && (i%3==0))cout<<"FizzBuzz"<<endl;
        else cout<<i<<endl;

    }
    */

    //ZADANIE 2
    /*
    // tabliczka mnożenia

    for (int i=1;i<=10;i++)
    {
        for (int j=1;j<=10;j++)
        {
        cout <<i * j<<"  ";
        }
        cout<< endl;
    }
    */


    //ZADANIE 3
    /*
    //Napisz program szyfrujący
    //1. Zadeklaruj zmienną String która chcesz zaszyfrować, np: “kołek”
    //2. Zadeklaruj zmienną tekstową z wartością inicjalną: “Zaszyfrowany tekst to: “, do
    //której później dokleisz wynik szyfrowania
    //3. Użyj szyfru podmieniającego znaki, a następnie szyfruj podmieniając dane litery na
    //inne. Np. tekst “kołek” może zaszyfrować jako “3wp13″, gdzie 3 to k, w to o, p to ł, a 1
    //to e.
    //4. Wydrukuj zaszyfrowany tekst

    string tekst="kotek";
    cout <<"Niezaszyfrowany tekst:  "<<tekst<<endl;

    cout <<"Zaszyfrowany tekst:  "<<szyfrowanie1(tekst)<<endl;
    */

    //ZADANIE 4*
    //Zaimplementuj metodę sortującą tablicę liczb wykorzystując algorytm sortowania bąbelkowego
    int n;
    cout<<"Podaj wielkosc tablicy"<<endl;
    cin >> n;
    int tablica[n];
    srand(time(NULL));
    for (int i=0;i<n;i++)
    {
        tablica[i]=rand()%100+1;
        cout <<tablica[i]<<"   ";
    }
    cout <<endl;

    int *wsk_tablica;
    wsk_tablica=&tablica[0];


    //sortowanie_babelkowe(wsk_tablica,n);
    quick_sort(wsk_tablica,0,n);

    cout<<"Posortowane wartości: "<<endl;
    for (int i=0;i<n;i++)
    {
        cout <<tablica[i]<<"   ";
    }


    return 0;
}
