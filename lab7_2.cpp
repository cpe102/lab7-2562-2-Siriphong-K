#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
//[Missing Code 1] Write definition of the function findGrade() here.
char findGrade(double a){
   return (a>90?'A':a<90&&a>75?'B':a<75&&a>60?'C':a<60&&a>45?'D':'F');
	
	
	
	
	//if(a>90.00){return 'A'}
	//else if(a>75.00&&a<90){return 'B'}
	//else if(a>60.00&&a<75){return 'C'}
	//else if(a>45.00&&a<60){return 'D'}
	//else if(a<=45.00){return 'F'}
}
int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	double score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
