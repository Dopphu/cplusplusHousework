#include"list.h"
#include<iostream>
#include<iomanip>
using namespace std;
void List::addStudent(Student student){
	student.next = this->head;
	this->head = &student;
	counter++;
}

void List::printAllStudent(){
	Student *temp = head;
	cout<<"学号"<<setw(10)<<"姓名"<<setw(6)<<"语文"<<setw(6)<<"数学"<<setw(6)<<"英语"<<setw(6)<<"总分"<<endl;
	while(temp){
		temp->printAll(); 
		temp = temp->next;
	}
	cout<<"学生总人数："<<counter<<endl;
}
