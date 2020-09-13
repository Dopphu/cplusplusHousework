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
	cout<<"学号\t"<<setw(15)<<"姓名\t"<<setw(10)<<"语文\t"<<setw(10)<<"数学\t"<<setw(10)<<"英语\t"<<setw(10)<<"总分\t"<<endl;
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
		}else{
			return NULL;
		}
	}
}

