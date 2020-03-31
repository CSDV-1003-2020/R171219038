
#include<iostream>
using namespace std;
class stu
{
        private:
                int id;
                char name[20];
                int roll_no;
		int sub[4];
		int sum=0;
		int avg;
        public:
                void student_details()
                {
                        cout<<"Eter student's ID, Name and Roll No."<<endl;
                        cin>>id>>name>>roll_no
                        cout<<"The given information is as follows:"<<endl;
                        cout<<"Name:"<<ends<<name<<endl;
                        cout<<"ID:"<<ends<<id<<endl;
                        cout<<"Roll No.:"<<ends<<roll_no<<endl;
                }
		void getmarks()
		{
                         cout<<"Enter marks of a student:"<<endl;
                        for(int i=0;i<4;i++)
                        {
                                cin>>sub[i];
                        }
                        for(int i=0;i<4;i++)
			{
				sum=sum+sub[i];
                        }
			cout<<"So total marks of a student are "<<sum<<endl;
			avg=sum/4;
			cout<<"and average marks of a student are "<<avg<<endl;

                }	
};
int main()
{
        stu s1;
        s1.student_details();
	s1.getmarks();
        return 0;
}

