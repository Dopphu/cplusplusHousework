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
	cout<<"ѧ��\t"<<setw(15)<<"����\t"<<setw(10)<<"����\t"<<setw(10)<<"��ѧ\t"<<setw(10)<<"Ӣ��\t"<<setw(10)<<"�ܷ�\t"<<endl;
	while(temp!=NULL){
		temp->printAll();
		temp = temp->next;
	}
	cout<<"ѧ����������"<<counter<<endl;
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

