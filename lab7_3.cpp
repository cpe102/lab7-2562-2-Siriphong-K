#include <iostream>
#include <string>
using namespace std;

int main()
{
	string status;
	int age,hgt,money;
cout<<"Input Age :";
cin>>age;
if(age<=20){
cout<<"Input Height :";
cin.ignore();
cin>>hgt;
if(hgt<160){status="UNFRIEND";}
else if(hgt<175){status="FRIEND";}
else{
cout<<"Input Money(Million) :";
cin.ignore();
cin>>money;
if(money>69){status="MARRIED";}
else{status="ONE-NIGHT-STAND";}
}
}
else if(age<30){
cout<<"Input Money(Million) :";
cin.ignore();
cin>>money;
if(money>10){status="BEST FRIEND";}
else{status="UNFRIEND";} 
}
else{status="UNFRIEND";}
cout<<status;
}
