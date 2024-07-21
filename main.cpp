#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   char ch ;
   	int counter=0;
   	cout<<"Enter character A to increment counter and Q to quit :";
   
   	while(true){
   		cin>>ch;
   		if(ch=='A')
   		{ counter++;
   		cout<<counter;
		   }
		   
   		else if (ch=='Q')
   		{
   			cout<<"Exiting the program.";
   			break;
		   }
	   }
	   return 0;
}
