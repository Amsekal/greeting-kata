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
   y=20+a;
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
    csillag();
cout<<"##";
        for(int i=0;i<76;i++)
        cout<<" ";
        cout<<"##";
            kozepre(a);
    cout << "##Happy Eastern, " <<nev<<"!##"<< endl;
    csillag();
    csillag();}
    else    {
        csillag();
        csillag();
cout<<"##";
        for(int i=0;i<76;i++)
        cout<<" ";
        cout<<"##";
        kozepre(10);
    cout << "##Happy Eastern, my friend " <<"!##"<< endl;
    csillag();
    csillag();}
    return 0;
}
