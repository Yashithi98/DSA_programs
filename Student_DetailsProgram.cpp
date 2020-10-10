#include<iostream>
//Name -Yashithi Dharmawimala
//Github ID - Yashithi98
using namespace std;

struct student{
	string name;
	int rollNumber;
	int mark1;
	int mark2;
	int mark3;
};

float average(student student1){
	int sum=student1.mark1+student1.mark2+student1.mark3;
	float avg=int(sum)/3.0;
	return avg;
}

int main(){
	
	student students[20];
	cout<<"Enter Student Details";
	int i;
	
	for(i=0;i<20;i++){
		cout<<"\n\nEnter student "<<i+1<<"s Name : ";
		cin>>students[i].name;
		cout<<"\nEnter student "<<i+1<<"s Roll Number : ";
		cin>>students[i].rollNumber;
		cout<<"\nEnter student "<<i+1<<"s Mark 01 : ";
		cin>>students[i].mark1;
		cout<<"\nEnter student "<<i+1<<"s Mark 02 : ";
		cin>>students[i].mark2;
		cout<<"\nEnter student "<<i+1<<"s Mark 03 : ";
		cin>>students[i].mark3;
	}
	
	for(i=0;i<20;i++){
		cout<<"\n\nAverage of Student"<<i+1<<" :";
		cout<<average(students[i])<<endl;
	}
	
	return 0;
}
