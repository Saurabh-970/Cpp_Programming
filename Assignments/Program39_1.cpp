#include<iostream>
using namespace std;

// //  Description   : Write a recursive program which display below pattern              
//     A B C D E F

void Display(char ch)
{
    if(ch < 'A')
    {
        return;
    }

    Display(ch - 1);
    cout<<ch<<"\t";
}
int main()
{
    Display('F');
    return 0;

}