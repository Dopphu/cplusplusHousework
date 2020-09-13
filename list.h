#ifndef LIST_H
#define LIST_H
#include"student.h"
class List{
	void addStudnet(Student student);
	Student searchStudent(string argument);
	void changeScore(string argument);
	List(){
		counter = 0;
		head = NULL;
	}
	private:
		int counter;
		Student *head;
}; 

#endif
