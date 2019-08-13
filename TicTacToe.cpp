#include<iostream>
using namespace std;
char board[3][3];
int checkwin();
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
            board[i][j]=" ";
        }
    }
}
int checkwin()
{
    int result = 0;
    for(int i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][2]=='x')
    }
}
