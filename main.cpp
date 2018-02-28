#include <iostream>

using namespace std;
void csillag()
{
    for(int i=0;i<80;i++)
        cout<<"*";
}
int main()
{
    char nev[50];
    cin>>nev;
    csillag();
    cout << "Good morning " <<nev<<"!"<< endl;

    cout << "Happy Eastern, " <<nev<<"!"<< endl;
    csillag();
    return 0;
}
