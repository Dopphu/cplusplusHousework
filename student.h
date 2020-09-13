#include<string>
#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
class Student{
    public:
    	//默认构造函数 
        Student(){}
        //自定义构造函数 
        Student(string, string, float, float, float);
//      Student getScore(string);
		
		//按照科目修改分数功能 
		void setScore(string subject, float score); 
		//打印学生所有信息功能 
		void printAll(void);
		 
    private:
        float math, chinese, english, average, total;
        int order;
        string name;
        string number;
        Student *next;
};

#endif
