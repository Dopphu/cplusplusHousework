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
	cout<<"ѧ��"<<setw(10)<<"����"<<setw(6)<<"����"<<setw(6)<<"��ѧ"<<setw(6)<<"Ӣ��"<<setw(6)<<"�ܷ�"<<endl;
	while(temp){
		temp->printAll(); 
		temp = temp->next;
	}
	cout<<"ѧ����������"<<counter<<endl;
}
