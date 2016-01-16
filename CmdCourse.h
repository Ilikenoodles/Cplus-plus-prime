#ifndef CMDCOURSE_H
#define CMDCOURSE_H

#include "CourseManage.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
class CmdCour{
	public:
	//成员函数
	CmdCour()=default;
	CmdCour(vector<string>&) {}
	//o	打印帮助信息
	void print_help(vector<string>&);
	void cmd_main();
	//参数
		//	支持的命令列表及每个命令的描述
	static vector<string> cmd_list;
	
};
#endif
