// Today we learn about conditional statement in c++ , where we get to know condition statement are the statement where we check and try to turn the flow of the program as per the condition we want to give 
// we also learn about AND statement , OR statement in c++ , 
// Whenever we are using any conditional statement with AND both the condition which we are giving needs to be true 
// But when we talk about OR statement either one of the statement are need to be true to execute it:
//Now lets see these in the example below :=

#include<iostream>
using namespace std;

int main()
{
	int a=0,b=0,c=0,d=0;
	
	cout<<"enter the value of a,b,c,d"<<endl;
	cin>>a>>b>>c>>d;
	
	cout<<((a>b)&&(c>d)); // for this statement both the condition present inside the bracket need to be true to get the answer  = 1
	cout<<endl;
	cout<<((a>b)||(c>d)); // for this statement one of the condition need to be true to get the 1:
	
	
	
	return 0;
}
