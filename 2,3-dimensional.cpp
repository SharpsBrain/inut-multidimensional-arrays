#include <iostream>

using namespace std;

int main()
{
 /*   int numbers[2][3];
    cout<<"Enter 6 numbers :"<<endl;
    //storing user input in the array:
    for(int t=0;t<2;++t){
        for(int c=0;c<3;++c){
            cin>>numbers[t][c];
        }
    }
    cout<<"the numbers are :"<<endl;
    //printing array elements:
    for(int i=0;i<2;++i){
        for(int j=0;j<3;++j){
            cout<<"numbers[" <<i<<"]: "<<numbers[i][j]<<endl;

        }
    }
    return 0;
}
*/
//array declaration:
int test[2][3][2]={
{{1,2},
{3,4},
{3,4},


},

{


   {3,4},
    {5,7},
    {6,9},
}
};
//displaying the values with proper index:
for(int i=0;i<2;++i){
for(int j=0;j<2;++j){
 for(int k=0;k<2;++k){
    cout<<"test[" <<i<<"]["<<j<<"]["<<k<<"] ="<<test[i][j][k]<<endl;

}
}
}
return 0;
}//---------------------sharpsbrain----------------------//
