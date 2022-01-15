                         //DIGITAL CLOCK IN C++........

#include <iostream>
#include <windows.h>     //include sleep function 
#include <iomanip>    //for setting the width of the dogit.(setw, setfill)



using namespace std;

int main(){
    int h,m,s,a,err;
    err=a=0;
    while(err==0){
        cout<<"Enter hour: "<<endl;
        cin>>h;
        cout<<"Enter minute: "<<endl;
        cin>>m;
        cout<<"Enter second: "<<endl;
        cin>>s;
        if(h<24 && m<60 && s<60){
            err++;
        }
        else{
            system("cls");  //It will clear all code written above it.
        }
    }
    while(a==0){
        cout<<setw(2)<<setfill('0')<<h
            <<":"
            <<setw(2)<<setfill('0')<<m
            <<":"
            <<setw(2)<<setfill('0')<<s<<endl;
        Sleep(1000);      //pause the execution for 1000ns.
        s++;
        if(s>59){
            s=0;
            m++;
        }
        if(m>59){
            m=0;
            h++;
        }
        if(h>23){
            h=0;
        }
    }
    return 0;
}