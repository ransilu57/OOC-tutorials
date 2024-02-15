#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
    char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};

    cout<<setw(5)<<left<<"No";
    cout<<setw(12)<<right<<"Name";
    cout<<setw(9)<<"Marks"<<endl;

    for(int r = 0; r < 5; r++)
    {
        cout<<setw(5)<<left<<r+1;
        cout<<setw(12)<<right<<names[r];
        cout<<setw(9)<<marks[r]<<endl;       
    }
    return 0;
}