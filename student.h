#include<string>
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
class Student{
    public:
    	//Ĭ�Ϲ��캯�� 
        Student(){}
        //�Զ��幹�캯�� 
        Student(string, string, float, float, float);
//      Student getScore(string);
		
		//���տ�Ŀ�޸ķ������� 
		void setScore(string subject, float score); 
		//��ӡѧ��������Ϣ���� 
		void printAll(void);
		 
    private:
        float math, chinese, english, average, total;
        int order;
        string name;
        string number;
        Student *next;
};

#endif
