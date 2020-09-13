#include<iostream>
#include<string>
#include"student.h"
#include"list.h"
using namespace std;
Student demo1("Dopphu", "201978030304", 100, 99, 98);
void addStudent();
void changeScore();
int main(){
	cout<<"欢迎来到学生信息管理系统"<<endl;
//    Student demo1("Dopphu", "201978030304", 100, 99, 98);
//    Student demo2("Doyyli", "201978030314", 82, 79, 68);
//    Student demo3("大哥", "201978030324", 70, 90, 98);
//    demo1.printAll();
//	demo1.setScore("math", 66);
//    demo1.printAll();
    cout<<"project running"<<endl;
    int times = 0;
    char selection;
    List demo;
	//和游戏一样，程序死循环开始！ 
	while(true){
    		cout<<"Q/q 退出！"<<endl
			<<"A/a 录入学生信息"<<endl
			<<"C/c 修改学生成绩"<<endl;
    		cin>>selection;
    		//判断选项是否为Q/q，是则退出程序 
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
			}//switch语句结束 
    		cout<<"第"<<times<<"次运行结束..."<<endl;
	}
	cout<<"project end..."<<endl;
    return 0;
}

void addStudent(){
	string n;
	string num;
	float m, c, e;
	/*数据在这里声明还是在switch外声明 亦或是while外？*/ 
	cout<<"请依次输入：学号 姓名 语文成绩 数学成绩 英语成绩"<<endl;
	cin>>n>>num>>c>>m>>e;
	//确认信息格式或数值是否准确 
	cout<<"是否确认修改？(y/n)"<<
	"学号："<<n<<
	"姓名："<<num<< 
	"语文成绩："<<c<<
	"数学成绩："<<m<<
	"英语成绩："<<e<<endl;
	char flag = 'n';
	cin>>flag;
	if(flag == 'y'){
		Student temp(n, num, c, m, e); 
		
		/*缺少一个往学生表添加的功能,只是创建了没有往表里添加*/
		cout<<"信息成功录入！"<<endl;
	}else{
		cout<<"信息未录入。"<<endl; 
	} 
}

void changeScore(){
	/*仍然需要表的使用，因为要通过姓名进行定位*/
	cout<<"请输入修改科目及分数"<<endl;
	string subject;
	float score;
	cin>>subject>>score; 
	/*用demo1实验一下*/
	demo1.setScore(subject, score); 
}
