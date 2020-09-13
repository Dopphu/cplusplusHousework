#ifndef LIST_H
#define LIST_H
#include"student.h"
class List{
	public:
		void addStudent(Student student);
		Student searchStudent(string argument);
		void changeScore(string argument);
		void printAllStudent(); 
		List(){
			counter = 0;
			head = NULL;
		}
	private:
		int counter;
		Student *head;
}; 

#endif
