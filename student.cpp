#include "student.h"
#include<iostream>
#include<iomanip>

//自定义构造函数的实现 
Student::Student(string n, string num, float m, float c, float e):name(n), number(num), math(m), chinese(c), english(e){
    average = (math+chinese+english)/3;
    total = math+chinese+english;
    next = NULL;
	cout<<"student constructed!"<<endl;
}
//按照科目修改分数功能 
void Student::setScore(string subject, float  score){
	/*这三个cout应该可以在优化一下*/
	if(subject == "math"){
		this->math = score;
		cout<<"修改成功->math:"<<score<<endl; 
	}else if(subject == "chinese"){
		this->chinese = score;
		cout<<"修改成功->chinese:"<<score<<endl; 
	}else if(subject == "english"){
		this->english = score;
		cout<<"修改成功->english:"<<score<<endl; 
	}else{
		cout<<"科目不存在"<<endl; 
	}
	average = (math+chinese+english)/3;
    total = math+chinese+english;
}

void Student::printAll(void){
	cout<<number<<setw(10)<<name<<setw(6)<<chinese<<setw(6)<<math<<setw(6)<<english<<setw(6)<<total<<endl;
} 
