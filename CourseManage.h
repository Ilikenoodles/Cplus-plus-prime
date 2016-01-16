#ifndef COURSEMANAGE_H
#define COURSEMANAGE_H
#include<iostream>
#include<string>
#include"Course.h"
#include<vector>
#include<algorithm>
using namespace std;
const int init_cour_num=4;
class CourseManager {	
public:
	 //构造函数
	 CourseManager()=default;
	 //CourseManager(const vector<Course>&){}; 
 	 CourseManager(const string &s1,const string &s2)
	{ Course cour1(s1);
	  Course cour2(s2);
	  //vector<Course> Cour_list;
	  Cour_list.push_back(cour1);
	  Cour_list.push_back(cour2);
	}
	 //CourseManager(const Course *beg, const Course *end);   
	
	 void add_cour(Course&);
   	 void add_cour_name(const string&);

	 void del_cour();
	 bool del_cour(const string);
	 int del_cour(int);//写的不好

	 void serach_cour(int);//
	 void serach_cour_name(string);

	 void sort_course();
	 void sort_course_II();

	 void print_cour_list(vector<Course>&);
	 void print_cour_list_ID(vector<Course>&);
  	 void print_cour_list_name(vector<Course>&);
	 void print_cour_list_num(vector<Course>&);
	 //参数  
	 vector<Course> Cour_list; //这个需要包含多个(课程)duixiang 每个duixiang has ID和name
	
	
 };

#endif
