#include "Course.h"
		//int id=0;

                int generate_ID()
		{return ++id;
		}

 		bool   isShorter(const Course& c1,const Course& c2)
		{
			return c1.name<c2.name;
		}


		istream& read(istream &is,Course &Cour)
		{
			is>>Cour.ID>>Cour.name;
			return is;
		}
	
		ostream& Course::printinfo(ostream &os)
		{
 		 return print_all(os,*this);
		}

		ostream& Course::printinfo_ID(ostream &os)
		{
 		 return print_ID(os,*this);
		}

		ostream& Course::printinfo_name(ostream &os)
		{
 		 return print_name(os,*this);
		}

			ostream& print_all(ostream &os,Course &Cour)
		{
			//Cour.ID=Cour.generate_ID();
			os<<"NO."<<Cour.ID<<" "<<Cour.name;
			return os;
		}

			ostream& print_ID(ostream &os,Course &Cour)
		{
			
			os<<"NO."<<Cour.ID<<" ";
			return os;
		}
			ostream& print_name(ostream &os,Course &Cour)
		{
			os<<Cour.name<<" ";
			return os;
		}
		Course::Course(istream &is)
		{
			read(is,*this);
		}
