#include<iostream>
#include<string>
#include"student.h"
#include"list.h"
using namespace std;
Student demo1("Dopphu", "201978030304", 100, 99, 98);
void addStudent();
void changeScore();
int main(){
	cout<<"��ӭ����ѧ����Ϣ����ϵͳ"<<endl;
//    Student demo1("Dopphu", "201978030304", 100, 99, 98);
//    Student demo2("Doyyli", "201978030314", 82, 79, 68);
//    Student demo3("���", "201978030324", 70, 90, 98);
//    demo1.printAll();
//	demo1.setScore("math", 66);
//    demo1.printAll();
    cout<<"project running"<<endl;
    int times = 0;
    char selection;
    List demo;
	//����Ϸһ����������ѭ����ʼ�� 
	while(true){
    		cout<<"Q/q �˳���"<<endl
			<<"A/a ¼��ѧ����Ϣ"<<endl
			<<"C/c �޸�ѧ���ɼ�"<<endl;
    		cin>>selection;
    		//�ж�ѡ���Ƿ�ΪQ/q�������˳����� 
    		if(selection == 'Q'||selection == 'q'){
				break; 
			} 
    		times++;
    		switch(selection){
    			case 'A':
    			case 'a':
    				addStudent();
    				break;
				case 'C':
				case 'c':
					changeScore();
					break;
			}//switch������ 
    		cout<<"��"<<times<<"�����н���..."<<endl;
	}
	cout<<"project end..."<<endl;
    return 0;
}

void addStudent(){
	string n;
	string num;
	float m, c, e;
	/*��������������������switch������ �����while�⣿*/ 
	cout<<"���������룺ѧ�� ���� ���ĳɼ� ��ѧ�ɼ� Ӣ��ɼ�"<<endl;
	cin>>n>>num>>c>>m>>e;
	//ȷ����Ϣ��ʽ����ֵ�Ƿ�׼ȷ 
	cout<<"�Ƿ�ȷ���޸ģ�(y/n)"<<
	"ѧ�ţ�"<<n<<
	"������"<<num<< 
	"���ĳɼ���"<<c<<
	"��ѧ�ɼ���"<<m<<
	"Ӣ��ɼ���"<<e<<endl;
	char flag = 'n';
	cin>>flag;
	if(flag == 'y'){
		Student temp(n, num, c, m, e); 
		
		/*ȱ��һ����ѧ������ӵĹ���,ֻ�Ǵ�����û�����������*/
		cout<<"��Ϣ�ɹ�¼�룡"<<endl;
	}else{
		cout<<"��Ϣδ¼�롣"<<endl; 
	} 
}

void changeScore(){
	/*��Ȼ��Ҫ���ʹ�ã���ΪҪͨ���������ж�λ*/
	cout<<"�������޸Ŀ�Ŀ������"<<endl;
	string subject;
	float score;
	cin>>subject>>score; 
	/*��demo1ʵ��һ��*/
	demo1.setScore(subject, score); 
}
