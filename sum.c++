#include<iostream>
using namespace std;
class demo
{
	private:
		int a[10];
		int sum=0;
	        int avg;
	public:
		void fun_sum()
		{
			cout<<"Enter the number:"<<ends;
			for(int i=0;i<10;i++)
			{
				cin>a[i];
			}
			for(int i=0;i<10;i++)
			{
				sum=sum+a[i];
			}	
			cout<<"Sum of the entered number is"<<ends<<sum<<endl;
			avg=sum/10;
			cout<<"So the average of input numbers is "<<avg<<endl;
		}
};
int main()
{
	demo d1;
	d1.fun_sum();
	return 0;
}	
