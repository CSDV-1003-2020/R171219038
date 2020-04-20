
//Code for student details

#include<iostream>
using namespace std;
class stu
{
        private:
                int id;
                char name[20]; //An array of size 20 wil be created
                int roll_no
        public:
                void student_details()
                {
                        cout<<"Enter student's ID, Name and Roll No."<<endl;
                        cin>>id>>name>>roll_no
                        cout<<"The given information is as follows:"<<endl;
                        cout<<"Name:"<<ends<<name<<endl;
                        cout<<"ID:"<<ends<<id<<endl;
                        cout<<"Roll No.:"<<ends<<roll_no<<endl;
                }
};
int main()
{
        stu s1;
        s1.student_details();
        return 0;
}

