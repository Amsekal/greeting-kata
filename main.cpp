#include <iostream>

using namespace std;
void csillag()
{
    for(int i=0;i<80;i++)
        cout<<"*";
}
int main()
{
    int vannev;
    char nev[50];
    cin>>vannev;

    if(vannev){cin>>nev;
    csillag();
    cout << "*Good morning " <<nev<<"!*"<< endl;

    cout << "*Happy Eastern, " <<nev<<"!*"<< endl;
    csillag();}
    else    {
        csillag();
    cout << "*Good morning my friend " <<"!*"<< endl;

    cout << "*Happy Eastern, my friend " <<"!*"<< endl;
    csillag();}
    return 0;
}
