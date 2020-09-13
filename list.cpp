#include"list.h"
void List::addStudnet(Student student){
	student.next = head;
	head = &student;
	counter++;
}


