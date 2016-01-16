#include"CourseManage.h"
#include <stdexcept> //?????

//CourseManager::CourseManager(const Course *beg, const Course *end){  //直接获取类的地址？}

void CourseManager::add_cour(Course &cour)
   {
	 cour.ID=generate_ID();  
	Cour_list.push_back(cour);
	   //CourseManager得先是一个vector才行
   }
void CourseManager::add_cour_name(const string &s)
   {
	Course cour(s);	 
		
	 	
	Cour_list.push_back(cour);	   
   }

void CourseManager::del_cour()
   {
	  Cour_list.pop_back();
   }
bool CourseManager::del_cour(const string s)
  {	int find=0;
	 for(auto it=Cour_list.begin();it!=Cour_list.end();++it)
	{
 	  if(it->name==s)
	  {Cour_list.erase(it);
		find++;}
	}
	try {
		if(find==0) 
		  throw runtime_error("ERROR!!! wrong course name");
	      }
	 catch(runtime_error &e)
			{cout<<e.what()<<endl;}	
	return find;
   }

int CourseManager::del_cour(int ID)//写的不好
  {   int find=0;
	 for(auto it=Cour_list.begin();it!=Cour_list.end();++it)
	{ 	  if(it->ID==ID)
			{Cour_list.erase(it);// has bug?????
			++find;	}	
        }
	try {
		if(find==0) 
		  throw runtime_error("ERROR!!! wrong course ID");//
	      }
	 catch(runtime_error &e)
			{cout<<e.what()<<endl;}	
	return find;
  }
void CourseManager::serach_cour(int ID)//
  {
	for(auto it=Cour_list.begin();it!=Cour_list.end();++it)
	 {  if(it->ID==ID)
	   it->printinfo(cout)<<endl;	
	  }	 
   }

void CourseManager::serach_cour_name(string s)
  {
	for(auto it=Cour_list.begin();it!=Cour_list.end();++it)
	 {  if(it->name==s)
	   cout<<"NO."<<it->ID;	
	  }	 
   }



void CourseManager::sort_course()
{ vector<string> temp;
	for(auto it=Cour_list.begin();it!=Cour_list.end();++it)
		temp.push_back(it->name);
		sort(temp.begin(),temp.end() );
	for(auto it=temp.begin();it!=temp.end();++it)
		{serach_cour_name(*it);
		 cout<<*it<<endl;}
}



void CourseManager::sort_course_II()
{ 	sort(Cour_list.begin(),Cour_list.end(),[](const Course &c1,const Course &c2){return c1.name<c2.name;} );
	
//sort(Cour_list.begin(),Cour_list.end(),isShorter);
	print_cour_list(Cour_list);
}

void CourseManager::print_cour_list(vector<Course> &Cour_list) 
   {
	
	 for(auto it=Cour_list.begin();it!=Cour_list.end();++it)
	    it->printinfo(cout)<<endl;	//调用了Course duixiang
	   
   }
void CourseManager::print_cour_list_ID(vector<Course> &Cour_list) 
   {
	 
	 for(auto it=Cour_list.begin();it!=Cour_list.end();++it)
	    it->printinfo_ID(cout);	
	  
   }
void CourseManager::print_cour_list_name(vector<Course> &Cour_list) 
   {
	
	 for(auto it=Cour_list.begin();it!=Cour_list.end();++it)
	    it->printinfo_name(cout);	
	    
   }
 void CourseManager::print_cour_list_num(vector<Course> &Cour_list)
   {
	auto it=Cour_list.size();
	cout<<it<<endl;	
   }
