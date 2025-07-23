//NAME: Nishka Ranadive
//PRN: 24070123082
//Exp-3

//Program-1
#include<iostream>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    
    if(num>0){
        cout<<"Number is POSITIVE.";
    }
    else if(num<0){
        cout<<"Number is NEGATIVE.";
    }
    else{
        cout<<"Number is ZERO.";
    }
    return 0;
}


/*==========OUTPUTS==========
Enter a Number:2
Number is POSITIVE.
Enter a Number:-2
Number is NEGATIVE.
*/
