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



//Program-3
#include<iostream>
using namespace std;

int main(){
    int x, y;
    
    cout<<"Enter X-Coordinate:";
    cin>>x;
    
    cout<<"Enter Y-Coordinate:";
    cin>>y;
    
    if(x>0 && y>0){
       cout<<"1st Quadrant.";
    }
    else if(x==0 && y>0 || x==0 && y<0){
            cout<<"Y-axis.";
        }
    else if(y==0 && x>0 || y==0 && x<0){
            cout<<"X-axis.";
        }
        
    else if(x<0 && y>0){
        cout<<"2nd Quadrant.";
    }
    else if(x<0 && y<0){
        cout<<"3rd Quadrant.";
    }
    else if(x>0 && y<0){
        cout<<"4th Quadrant.";
    }
    else{
        cout<<"Point is at Origin.";
    }
    
    return 0;
}