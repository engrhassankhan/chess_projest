#include<iostream>
#include<iomanip>



using namespace::std;



void set_values(int array[][8]){

    for(int i = 0; i < 8; i++ )
        {

    for (int j = 0; j < 8; j++)
    {
        array[i][j] = 0;
    }
    
    
}
}


void print_values(int array[][8]){

int count = 8;
    cout<<"     a    b    c    d    e    f    g    h "<<endl;
    cout<<endl;

    for(int i = 0; i < 8; i++ )
{
    cout<<count;
    for (int j = 0; j < 8; j++)
    {
        cout<<setw(5)<<array[i][j];
    }

    cout<<"     "<<count;
    
    count--;
    cout<<endl;
    cout<<endl;
    
}

cout<<"     a    b    c    d    e    f    g    h "<<endl;

}


void input_value(int array[][8], int index[], int value){




for(int i = 0; i < 8; i++ )
        {

    for (int j = 0; j < 8; j++)
    {
        if(i ==  index[0] && j ==  index[1] ){

            array[i][j] = value;

        }
    }
    
    
}

}


int main(){



int arr_board[8][8];

int index[2];

int value = 99;


cout<<"Enter Index Values "<<endl;
cout<<"'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'"<<endl;
cin>>index[0];

cout<<"'1', '2', '3', '4', '5', '6', '7', '8'"<<endl;
cin>>index[1];


set_values(arr_board);

print_values(arr_board);

input_value(arr_board, index, value);

cout<<"Updated Version : " <<endl;

print_values(arr_board);

return 0;

}


