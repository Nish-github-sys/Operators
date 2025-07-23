//NAME: Nishka Ranadive
//PRN: 24070123082
//Exp-3

//Program-2
#include<iostream>
using namespace std;

int main(){
    
    int DCLD, NT, EDC, SnS, MTT;
    
    cout<<"Enter marks for DCLD:";
    cin>>DCLD;
    
    cout<<"Enter marks for NT:";
    cin>>NT;
    
    cout<<"Enter marks for EDC:";
    cin>>EDC;
    
    cout<<"Enter marks for SnS:";
    cin>>SnS;
    
    cout<<"Enter marks for MTT:";
    cin>>MTT;
    
    int avg=(DCLD+NT+EDC+SnS+MTT)/5;
    cout<<"Average is:"<<avg<<endl;
    
    if(100>=avg && avg>=90){
        cout<<"O Grade.";
    }
    else if(90>avg && avg>=80){
        cout<<"A+ Grade.";
    }
    else if(80>avg && avg>=70){
        cout<<"A Grade.";
    }
    else if(70>avg && avg>=60){
        cout<<"B Grade.";
    }
    else if(60>avg && avg>=50){
        cout<<"C Grade.";
    }
    
    else if(0<=avg && avg<50){
        cout<<"FAIL!";
    }
    else{
        cout<<"Enter valid marks!";
    }
    return 0;
}


/*==========OUTPUTS==========
-->Program-2:
Enter marks for DCLD:90
Enter marks for NT:91
Enter marks for EDC:92
Enter marks for SnS:93
Enter marks for MTT:94
Average is:92
O Grade.
*/
