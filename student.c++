
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
                        cout<<"Enter student's ID, Name and Roll No."<<endl;
                        cin>>id>>name>>roll_no
                        cout<<"The given information is as follows:"<<endl;
                        cout<<"Student's Name:"<<ends<<name<<endl;
                        cout<<"Student's ID:"<<ends<<id<<endl;
                        cout<<"Student's Roll No.:"<<ends<<roll_no<<endl;
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
	s1.result();
        return 0;
}

void result()
{
	for (int i=0; i<4;i++)
	{ 
		if (sub[i]<40)
		{
                    cout<<"Failed";
		}
		else
		{
                    cout<<"Passed";
		}
	}
}


/*driver program
Enter student's ID, Name and Roll No.
500076374
Tanishka
R171219037*/

/*OUTPUT
The given information is as follows:
Name:Tanishka
ID:500076374
Roll No.:R171219037*/



        

