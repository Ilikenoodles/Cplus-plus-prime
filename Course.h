#ifndef COURSE_H
#define COURSE_H
#include<iostream>
#include <string>
static int id=0;
using namespace std;
		class Course //一个课程的ID与名称
		{
		 friend class CourseManager;
		 friend class CmdCour; 
		 friend bool isShorter(const Course&,const Course&);		
		 friend istream& read(istream&,Course&);
		 
		   friend int generate_ID();
		   friend ostream& print_all(ostream &os,Course &Cour);
		   friend ostream& print_ID(ostream &os,Course &Cour);
		   friend ostream& print_name(ostream &os,Course &Cour);

		  public: //构造函数
			
			Course()=default;
			Course(const string &n):ID(++id),name(n){}
			
			Course(const int &a_id):ID(a_id)
				{name="none1";}
			
			Course(istream &is);
						
			ostream& printinfo(ostream&);
			ostream& printinfo_ID(ostream&);
			ostream& printinfo_name(ostream&);
			
			private:
			int ID;			
			string name="NONE";
						
		};
		int generate_ID();
		  bool   isShorter(const Course&,const Course&);
		istream& read(istream&,Course&);	
		ostream& print_ID(ostream &os,Course &Cour);
		ostream& print_all(ostream &os,Course &Cour);
		ostream& print_name(ostream &os,Course &Cour);

		ostream& print_all(ostream &os,Course &Cour);
		ostream& print_ID(ostream &os,Course &Cour);
		ostream& print_name(ostream &os,Course &Cour);
#endif
