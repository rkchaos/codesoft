#include<iostream>
#include<cstring>
using namespace std;
int main(){
    float result;
   float num1;
   cout<<"Enter the first number :"<<"\n";
   cin>>num1;
   float num2;
   cout<<"Enter the second number :"<<"\n";
   cin>>num2;
string operation;
cout<<"Enter the operation(+,-,*,/) :"<<"\n";
cin>>operation;

if(operation=="+"){
result=num1+num2;
}
else if(operation=="-"){
    result=num1-num2;
}
else if(operation=="*"){
    result=num1*num2;
}
else if(operation=="/"){
result=num1/num2;
}   
else{
    cout<<"Invalid operator";
}
cout<<"Result is"<<result;
}