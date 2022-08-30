#include<iostream>
using namespace std;
 int main (){
    int row,column;
    cout<<"enter number of rows = ";
    cin>>row;
    cout<<"enter number of columns = ";
    cin>>column;
    int list[row][column];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            cout<<"start entering elements row wise ";
            cin>>list[i][j];
        }
        
    }  for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            printf("%u",list[i][j]);
        }
        cout<<"\n";
    }
    int x;
    int y;
    cout<<"enter coordinate in Row[x] = ";
    cin>>x;
    cout<<"enter coordinate in column[y] = ";
    cin>>y;
    printf("%u",6422168+(x*4+y)*4);

 }