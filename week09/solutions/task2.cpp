#include<iostream>
using namespace std;


int main(){

    int matrix[100][100];

    int n;
    cout<<"Please input the size of the matrix: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Please input matrix["<<i<<"]["<<j<<"] : ";
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++) //вървим до n-2 елемент на всеки ред
                               //за да не сложим една ненужна ; след
                               //последния елемент
        {
            cout<<"matrix["<<i<<"]["<<j<<"] = "<<matrix[i][j]<<" ; ";
        }
        cout<<"matrix["<<i<<"]["<<n-1<<"] = "<<matrix[i][n-1]<<"\n";
    }

}
