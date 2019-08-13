#include<iostream>
using namespace std;
string board[3][3];
void display();
void start();
int main()
{

}
void display()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<board[i][j]<<"|";
        }
        cout<<endl;
    }
}
void start()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            board[i][j]<<" ";
        }
    }
}
