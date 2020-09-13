#include"list.h"
#include<iostream>
#include<iomanip>
using namespace std;
void List::addStudent(Student &student){
	Student *temp = new Student;
	*temp = student;
	temp->next = head;
	head = temp;
	counter++;
}

void List::printAllStudent(){
	Student *temp=this->head;
	cout<<"学号"<<setw(10)<<"姓名"<<setw(6)<<"语文"<<setw(6)<<"数学"<<setw(6)<<"英语"<<setw(6)<<"总分"<<endl;
	while(temp!=NULL){
		temp->printAll();
		temp = temp->next;
	}
	cout<<"学生总人数："<<counter<<endl;
}

Student* List::searchStudent(string argument){
	Student* temp = this->head;
	while(temp!=NULL){
		if(temp->name==argument || temp->number==argument){
			return temp;
		}
	}
}

