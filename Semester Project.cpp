/*                        STUDENT REPORT MANAGMENT SYSTEM (SEMESTER PROJECT)

          This program stores data of students.You can enter data,search data,display data and edit data.

Ahsan Yaqoob 
*/
#include<iostream>
#include<windows.h>
#include<unistd.h>
using namespace std;
void enter();
void search();
void show ();
void edit();

int all=0,total,i;
struct you {//structure for student data
  string name,father;
  int roll;
  string program;
  int subject[5];
  float result;
  float grade;	
} student[100];//100 student can enter
int main(){
{
	int num;
//	cout<<"ENTER :";
//	cin>>all;
{
	while(true) {
			{
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(h, 2);}
		cout<<"\n\t\t\t\t********************************************************"<<endl;
		cout<<"\t\t\t\t********************************************************"<<endl;
		cout<<"\t\t\t\t\t\tEnter Your Choice:\n\t\t\t\t\t\t1.Enter Student\n\t\t\t\t\t\t2.Search Student\n\t\t\t\t\t\t3.Edit Student Details\n\t\t\t\t\t\t4.Display All Students Record\n\t\t\t\t\t\t5.Exit\n";
		cout<<"\t\t\t\t********************************************************"<<endl;
		cout<<"\t\t\t\t********************************************************"<<endl;
		cin>>num;
		if(num<0||num>5){
			cout<<"Enter the given choices: ",cin>>num;
		}	
		switch(num){
			case 1:enter();break;
			case 2:search();break;
			case 3:edit();break;
			case 4:show();break;
			case 5:return 0;break;
		}
}
}}}
void enter(){
	system("CLS");
	cout<<"\t\t\t********************************************************************"<<endl;
	cout<<"\t\t\t********************************************************************"<<endl;
	cout<<"\n\t\t\t\tHow Many Student You Want To Enter(Maximum 100)\n\n ";
	cout<<"\t\t\t********************************************************************"<<endl;
	cout<<"\t\t\t********************************************************************"<<endl;
	cin>>all;
	if(total==0){
	total+=all;
	for( i=0;i<all;i++){
	cout<<"\n\n";
	cout<<"Enter Data Of Student:\t"<<i+1<<endl;
	cout<<"\nEnter Roll No:\t";
	cin>>student[i].roll;
	if(i>0){
	for(int j=0;j<i;j++){
		while(student[j].roll==student[i].roll){
			cout<<"ID Already Exist:\t";
			cin>>student[i].roll;
		}
	}}
	cin.ignore();
	cout<<"Enter  Name:\t";
	getline(cin,student[i].name);
	cout<<"Enter Father Name:\t";
	getline(cin,student[i].father);
	cout<<"Enter Program:\t";
	getline(cin,student[i].program);
	cout<<"1.Enter Your Marks Of ICT: \t";
	cin>>student[i].subject[0];
	if(student[i].subject[0]>50){
		cout<<"You can not enter more then 50 \n";
		cout<<"1.Enter Your Marks Of ICT: \t";
	cin>>student[i].subject[0];
	}
	cout<<"2.Enter Your Marks Of PF: \t";
	cin>>student[i].subject[1];
     	if(student[i].subject[1]>50){
		cout<<"You can not enter more then 50 \n";
		cout<<"2.Enter Your Marks Of PF: \t";
	cin>>student[i].subject[1];}
	cout<<"3.Enter Your Marks Of AP: \t";
	cin>>student[i].subject[2];
		if(student[i].subject[2]>50){
		cout<<"You can not enter more then 50 \n";
		cout<<"3.Enter Your Marks Of AP: \t";
		cin>>student[i].subject[2];}
		cout<<"4.Enter your marks of PS: \t";
	cin>>student[i].subject[3];
		if(student[i].subject[3]>50){
		cout<<"You can not enter more then 50 \n";
			cout<<"4.Enter Your Marks Of PS: \t";
	cin>>student[i].subject[3];}
	cout<<"5.Enter Your Marks Of EC&C: \t";
	cin>>student[i].subject[4];
		if(student[i].subject[4]>50){
		cout<<"You can not enter more then 50 \n";
			cout<<"5.Enter Your Marks Of EC&C: \t";
	cin>>student[i].subject[4];}
		
	
				cout<<"***************************************************"<<endl;

   student[i].result=student[i].subject[0]+student[i].subject[1]+student[i].subject[2]+student[i].subject[3]+student[i].subject[4];
	student[i].grade=(student[i].result*100)/250;
	Sleep(800);
	system("CLS");
	}}
	else{
		int X=total;
			for( i=total;i<all+total;i++){	
		cout<<"\n\n";
	cout<<" Enter Data Of Student "<<i+1<<endl;
	cout<<"\nEnter  Roll No: \t";
	cin>>student[i].roll;
	cin.ignore();
	for(int k=0;k<X;k++)
	{
		while(student[k].roll==student[i].roll)
		{
			cout<<"ID Already Exits: \t ";
			cin>>student[i].roll;
			cin.ignore();
		}
	}
	X++;
	cout<<"Enter  Name:\t";
	getline(cin,student[i].name);
	cout<<"Enter Father Name:\t";
	getline(cin,student[i].father);
	cout<<"Enter  Program:\t";
	getline(cin,student[i].program);
	cout<<"1.Enter Your Marks Of ICT: \t";
	cin>>student[i].subject[0];
	if(student[i].subject[0]>50){
		cout<<"You can not enter more then 50 \n";
		cout<<"1.Enter Your Marks Of ICT: \t";
	cin>>student[i].subject[0];
	}
	cout<<"2.Enter Your Marks Of PF: \t";
	cin>>student[i].subject[1];
     	if(student[i].subject[1]>50){
		cout<<"You can not enter more then 50 \n";
		cout<<"2.Enter Your Marks Of PF: \t";
	cin>>student[i].subject[1];}
	cout<<"3.Enter Your Marks Of AP: \t";
	cin>>student[i].subject[2];
		if(student[i].subject[2]>50){
		cout<<"You can not enter more then 50 \n";
		cout<<"3.Enter Your Marks Of AP: \t";
		cin>>student[i].subject[2];}
		cout<<"4.Enter your marks of PS: \t";
	cin>>student[i].subject[3];
		if(student[i].subject[3]>50){
		cout<<"You can not enter more then 50 \n";
			cout<<"4.Enter Your Marks Of PS: \t";
	cin>>student[i].subject[3];}
	cout<<"5.Enter Your Marks Of EC&C: \t";
	cin>>student[i].subject[4];
		if(student[i].subject[4]>50){
		cout<<"You can not enter more then 50 \n";
			cout<<"5.Enter Your Marks Of EC&C: \t";
	cin>>student[i].subject[4];}	
		cout<<"***************************************************"<<endl;
	student[i].result=student[i].subject[0]+student[i].subject[1]+student[i].subject[2]+student[i].subject[3]+student[i].subject[4];
	student[i].grade=(student[i].result*100)/250;
//	total++;
	}
	total+=all;
}Sleep(800);
system("CLS");}
void search(){
	int num;
	cout<<"Enter Roll Number:\t";
	cin>>num;
		for(i=0;i<total;i++){
		if(num==student[i].roll){
			cout<<"Roll Number: "<<student[i].roll<<endl;
			cout<<"Name : "<<student[i].name<<endl;
			cout<<"Father Name: "<<student[i].father<<endl;
			cout<<"Program : "<<student[i].program<<endl;
				if(student[i].grade>=90){
				cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
				cout<<"Grade is A\n";
			}
			else if(student[i].grade>=80){
				cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
				cout<<"Grade is B\n";
			}
			else if(student[i].grade>=70){
				cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
				cout<<" Grade is C\n";
			}
			else if(student[i].grade>=60){
			cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
				cout<<"Grade is D\n";
			}
			else if(student[i].grade<60){
		cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
			    cout<<"grade is F\n\n";
		}}
		else
		cout<<"Roll does not exist";
}	
Sleep(5000);	}	
void edit(){
	 int num;
	 cout<<"Enter  Roll Number:\t";
	cin>>num;
	int X=total;
		for(i=0;i<total;i++){
		if(num==student[i].roll){
			cout<<"Prevoius Data:\t\n";
			cout<<"Roll Number:\t "<<student[i].roll<<endl;
			cout<<"Name:\t "<<student[i].name<<endl;
			cout<<"Father Name: \t"<<student[i].father<<endl;
			cout<<"Program:\t "<<student[i].program<<endl;
				if(student[i].grade>=90){
				cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
				cout<<"Grade is A\n";
			}
			else if(student[i].grade>=80){
				cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
				cout<<"Grade is B\n";
			}
			else if(student[i].grade>=70){
				cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
				cout<<" Grade is C\n";
			}
			else if(student[i].grade>=60){
			cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
				cout<<"Grade is D\n";
			}
			else if(student[i].grade<60){
		cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
			    cout<<"grade is F\n\n";
		}
			cout<<"***********************";	
		cout<<"\n\n";
	cout<<" Enter Student Data \n"<<i+1;
	cout<<"\n Enter Roll No:\t";
	cin>>student[i].roll;
	cin.ignore();
		for(int k=0;k<X;k++)
	{
		if(student[k].roll==student[i].roll)
		{
			cout<<"ID Already Exits: \t ";
			cin>>student[i].roll;
			cin.ignore();
		}
	}
	X++;
	cout<<"Enter Name:\t";
	getline(cin,student[i].name);
	cout<<"Enter Father Name:\t";
	getline(cin,student[i].father);
	cout<<"Enter Program\t";
	getline(cin,student[i].program);
cout<<"1.Enter Your Marks Of ICT: \t";
	cin>>student[i].subject[0];
	if(student[i].subject[0]>50){
		cout<<"You can not enter more then 50 \n";
		cout<<"1.Enter Your Marks Of ICT: \t";
	cin>>student[i].subject[0];
	}
	cout<<"2.Enter Your Marks Of PF: \t";
	cin>>student[i].subject[1];
     	if(student[i].subject[1]>50){
		cout<<"You can not enter more then 50 \n";
		cout<<"2.Enter Your Marks Of PF: \t";
	cin>>student[i].subject[1];}
	cout<<"3.Enter Your Marks Of AP: \t";
	cin>>student[i].subject[2];
		if(student[i].subject[2]>50){
		cout<<"You can not enter more then 50 \n";
		cout<<"3.Enter Your Marks Of AP: \t";
		cin>>student[i].subject[2];}
		cout<<"4.Enter your marks of PS: \t";
	cin>>student[i].subject[3];
		if(student[i].subject[3]>50){
		cout<<"You can not enter more then 50 \n";
			cout<<"4.Enter Your Marks Of PS: \t";
	cin>>student[i].subject[3];}
	cout<<"5.Enter Your Marks Of EC&C: \t";
	cin>>student[i].subject[4];
		if(student[i].subject[4]>50){
		cout<<"You can not enter more then 50 \n";
			cout<<"5.Enter Your Marks Of EC&C: \t";
	cin>>student[i].subject[4];}
	student[i].result=student[i].subject[0]+student[i].subject[1]+student[i].subject[2]+student[i].subject[3]+student[i].subject[4];
	student[i].grade=(student[i].result*100)/250;
}}}
void show(){
		for(i=0;i<total;i++){
			cout<<"Roll Number: "<<student[i].roll<<endl;
			cout<<"\nName : "<<student[i].name<<endl;
			
			cout<<"Father Name: "<<student[i].father<<endl;
			cout<<"Program: "<<student[i].program<<endl;
		   	if(student[i].grade>=90){
				cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
				cout<<"Grade is A\n\n";
			}
			else if(student[i].grade>=80){
				cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
				cout<<"Grade is B\n\n";
			}
			else if(student[i].grade>=70){
				cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
				cout<<" Grade is C\n\n";
			}
			else if(student[i].grade>=60){
				cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
				cout<<"Grade is D\n\n";
			}
			else if(student[i].grade<60){
			cout<<"Obtained Marks: "<<student[i].result<<endl;
				cout<<"Percentage : "<<student[i].grade<<"%"<<endl;
			cout<<"Grade is F\n\n";
		}
            	cout<<"***************************************************\n\n";
}Sleep(8000);}
