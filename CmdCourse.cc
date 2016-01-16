#include "CmdCourse.h"
#include <stdexcept>
#include <fstream> 
 vector<string> CmdCour::cmd_list{
    "Command 0: print the help message",
    "Command 1: add course according the course name",
    "Command 2: delete the newest course",
    "Command 3: delete the course according the course id",
    "Command 4: delete the course according the course name",
    "Command 5: print the course list",
    "Command 6: print the course name",
    "Command 7: print the course id",
    "Command 8: print the number of the course",
    "Command 9: output the course to the file",
    "Command 10: output the course according the ID"
    "Command 11: output the course according the sort abc"
};

void CmdCour::print_help(vector<string> &cmdtext)
 {
	 for(auto it=cmdtext.begin();it!=cmdtext.end();++it)
		 cout<<*it<<endl;
 }

void print_coutinue()
{cout<<"input cmd to continue"<<endl;}

void CmdCour::cmd_main()
{	 	
	CourseManager sylMan("c++","JAVA");
	
	ofstream recoed;
	recoed.open("sylCour.txt");	
	//string user_cmd;
	int user_cmd;
while(cin>>user_cmd)
{	try{
        if (user_cmd>=0&&user_cmd<=11)
		{
			if (user_cmd==0)
			{
			 print_help(cmd_list);
			 print_coutinue();
			 recoed<<"Cmd is show help_info"<<endl;
			}			
			if (user_cmd==1)
			{  // 读取课程name？ Push进去
			 cout<<"please set name of Course ! "<<endl;
			 Course cour_temp;			
			 cin>>cour_temp.name;
			    try{
				 if (cour_temp.name.empty() ) //.....
				 {recoed<<"ERROR!no Course name."<<endl;
				 throw runtime_error("ERROR!!!input some name");}
			         sylMan.add_cour_name(cour_temp.name);			
			   	 print_coutinue();
				 recoed<<"Cmd is add Course"<<endl;
				}
			    catch(runtime_error &e)
			       {cout<<e.what()<<endl;}			
			}
		if (user_cmd==2)
	   	{   
		try 
		{
			if (sylMan.Cour_list.size()==0)
			throw runtime_error("ERROR!!! NO course");//
			sylMan.del_cour();			
			print_coutinue();
			recoed<<"Cmd is DEL Cour"<<endl;
		}catch(runtime_error &e)
			{cout<<e.what()<<endl;
			recoed<<"ERROR!!! NO course to del cmd error"<<endl;}
			
		}
    		if (user_cmd==3)
			{  int find;
			recoed<<"Cmd is del Course accroed ID"<<endl;
			cout<<"input what course_ID to del "<<endl;
			int input_ID;
			//getline(cin, input_name);
			cin>>input_ID;
			find=sylMan.del_cour(input_ID);
			print_coutinue();
			if (find==0)
			recoed<<"ERROR!!! wrong course ID to del"<<endl;
			}
		if (user_cmd==4)
			{  
			cout<<"input what course_NAME to del "<<endl;
			recoed<<"Cmd is del Course accroed name"<<endl;
			string input_name;
			cin>>input_name;
			if (sylMan.del_cour(input_name) )
			recoed<<"OK!!!  del course success"<<endl;
			else 
			recoed<<"Wrong!!! fail to del course "<<endl;
			print_coutinue();
			}
		if (user_cmd==5)
			{  recoed<<"Cmd is show Cour_list"<<endl;
			  sylMan.print_cour_list(sylMan.Cour_list);
			  print_coutinue();
			}
		if (user_cmd==6)
			{  recoed<<"Cmd is show Cour_name"<<endl;
			  sylMan.print_cour_list_name(sylMan.Cour_list);
			  print_coutinue();
			}
		if (user_cmd==7)
			{  recoed<<"Cmd is show Cour_ID"<<endl;
			  sylMan.print_cour_list_ID(sylMan.Cour_list);
			  print_coutinue();
			}
		if (user_cmd==8)
			{  recoed<<"Cmd is shoe num of Cour"<<endl;
			 sylMan.print_cour_list_num(sylMan.Cour_list);
			}
		if (user_cmd==10)
			{  recoed<<"Cmd is find Cour_name accroed ID"<<endl;
			cout<<"input what course_ID to look "<<endl;
			int input_s_ID;			
			cin>>input_s_ID;
			  sylMan.serach_cour(input_s_ID);//
			}
		if (user_cmd==11)
			{  recoed<<"Cmd is sort Cour_name"<<endl;			
			  // sylMan.sort_course();
			   sylMan.sort_course_II();
			   print_coutinue();
			}
		}
     	else
			            //cerr << "there is no course!" << endl;
			throw runtime_error("ERROR!!! input the right commmod 0~10");
    }
    catch(runtime_error &e)
{
        cout<<e.what()<<endl;
    }
}
			
recoed.close();	

}
