#include "student.h"
#include<iostream>
#include<iomanip>

//�Զ��幹�캯����ʵ�� 
Student::Student(string n, string num, float m, float c, float e):name(n), number(num), math(m), chinese(c), english(e){
    average = (math+chinese+english)/3;
    total = math+chinese+english;
    next = NULL;
	cout<<"student constructed!"<<endl;
}
//���տ�Ŀ�޸ķ������� 
void Student::setScore(string subject, float  score){
	/*������coutӦ�ÿ������Ż�һ��*/
	if(subject == "math"){
		this->math = score;
		cout<<"�޸ĳɹ�->math:"<<score<<endl; 
	}else if(subject == "chinese"){
		this->chinese = score;
		cout<<"�޸ĳɹ�->chinese:"<<score<<endl; 
	}else if(subject == "english"){
		this->english = score;
		cout<<"�޸ĳɹ�->english:"<<score<<endl; 
	}else{
		cout<<"��Ŀ������"<<endl; 
	}
	average = (math+chinese+english)/3;
    total = math+chinese+english;
}

void Student::printAll(void){
	cout<<number<<setw(10)<<name<<setw(6)<<chinese<<setw(6)<<math<<setw(6)<<english<<setw(6)<<total<<endl;
} 
