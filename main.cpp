#include<iostream>
#include<string>
#include"student.h"
#include"list.h"
using namespace std;
Student demo1("Dopphu", "201978030304", 100, 99, 98);
List demo;
Student demo3("���", "201978030324", 70, 90, 98);
void add();
void changeScore();
void searchScore();
void print();
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
//    demo.addStudent(demo1);
//    demo.addStudent(demo2);
//    demo.addStudent(demo3);
//    demo.printAllStudent();
	//����Ϸһ����������ѭ����ʼ�� 
	while(true){
//    		demo.addStudent(demo3);
//			demo.addStudent(demo3);
//   			demo.printAllStudent();
			cout<<"Q/q �˳���"<<endl
    		<<"P/p ��ӡ����ѧ���ɼ�"<<endl 
			<<"A/a ¼��ѧ���ɼ�"<<endl
			<<"S/s ��ѯѧ���ɼ�"<<endl
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
    				add();
    				break;
				case 'C':
				case 'c':
					changeScore();
					break;
				case 'S':
				case 's':
					searchScore();
					break;
				case 'P':
				case 'p':
					print();
					break;	
			}//switch������ 
    		cout<<"��"<<times<<"�����н���..."<<endl;
	}
	cout<<"project exit!"<<endl;
    return 0;
}

void add(){
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
		Student temp(num, n, c, m, e); 
		temp.printAll();
		demo.addStudent(temp);
		/*ȱ��һ����ѧ������ӵĹ���,ֻ�Ǵ�����û�����������*/
		cout<<"��Ϣ�ɹ�¼�룡"<<endl;
	}else{
		cout<<"��Ϣδ¼�롣"<<endl; 
	}
}
void searchScore(){
	//����ֵ�Ķ�ȡ 
	cout<<"���ǲ�ѯ���ܣ�������������ѧ��"<<endl;
	string key;//�ؼ���
	cin>>key; 
	Student *temp = demo.searchStudent(key);
	if(temp){
		cout<<"��ѯ�ɹ���"<<endl;
		temp->printAll();
	}else{
		cout<<"δ��ѯ�������Ϣ!"<<endl; 
	} 
}
void print(){
	demo.printAllStudent();
}
///*����޸Ĺ��������⣬���޸�...me:������ܳ�������Ĳ���ģ��*/�޸��ɹ����汾�ţ� a7d2e83d7b25e8dab2f07244bd61a54ce645ed6c 
void changeScore(){
	/*��Ȼ��Ҫ���ʹ�ã���ΪҪͨ���������ж�λ*/
	cout<<"�������޸Ŀ�Ŀ������"<<endl;
	string subject;
	float score;
	cin>>subject>>score; 
	/*��demo1ʵ��һ��*/
	demo1.setScore(subject, score); 
	demo1.printAll();
}
