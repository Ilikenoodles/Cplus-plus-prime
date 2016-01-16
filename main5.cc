#include "CmdCourse.h"

int main()
{
cout<<"welcome!\n input cmd num 0 for help_info\n";
fstream recoed;
	recoed.open("sylCour.txt");
CmdCour cmd_syl;
  cmd_syl.cmd_main();

	 /* Course cour1("c++");
	  Course cour2("JAVA");
	  Course cour3(234);
	  Course cour4;
	  vector<Course> Cour_list;
	  Cour_list.push_back(cour1);
	  Cour_list.push_back(cour2);
 Cour_list.push_back(cour3);
 Cour_list.push_back(cour4);
	for(auto it=Cour_list.begin();it!=Cour_list.end();++it)
	 {  
	   it->printinfo(cout)<<endl;	
	  }  */ 
return 0;
}
