#include <iostream>
#include <string.h>
using namespace std;
void csillag()
{
    for(int i=0;i<80;i++)
        cout<<"*";
}
void kozepre(int a)
{
   int y=0;
   y=18+a;
   for(int i=0;i<(80-y)/2;i++)
        cout<<" ";
}

int main()
{
    int vannev,a;
    char nev[50];
    cin>>vannev;

    if(vannev){cin>>nev;a=strlen(nev);
    csillag();
    kozepre(a);
   // cout << "*Good morning " <<nev<<"!*"<< endl;

    cout << "*Happy Eastern, " <<nev<<"!*"<< endl;
    csillag();}
    else    {
        csillag();
        kozepre(10);
    //cout << "*Good morning my friend " <<"!*"<< endl;

    cout << "*Happy Eastern, my friend " <<"!*"<< endl;
    csillag();}
    return 0;
}
