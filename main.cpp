#include <iostream>
#include <string.h>
using namespace std;
void csillag()
{
    for(int i=0;i<80;i++)
        cout<<"#";
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

   // cout << "*Good morning " <<nev<<"!*"<< endl;
cout<<"#";
        for(int i=0;i<78;i++)
        cout<<" ";
        cout<<"#";
            kozepre(a);
    cout << "#Happy Eastern, " <<nev<<"!#"<< endl;
    csillag();}
    else    {
        csillag();

    //cout << "*Good morning my friend " <<"!*"<< endl;
cout<<"#";
        for(int i=0;i<78;i++)
        cout<<" ";
        cout<<"#";
        kozepre(10);
    cout << "#Happy Eastern, my friend " <<"!#"<< endl;
    csillag();}
    return 0;
}
