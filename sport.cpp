#include <iostream>
using namespace std;
class student
{
	int m,roll[20];
	string name[20];

public:
	void accept()
	{
		cout<<"ENTER THE NUMBER OF STUDENTS \n";
		cin>>m;

		for(int i=0;i<m;i++)
		{
		cout<<"\nENTER YOUR ROLL NO AND NAME=";
		cin>>roll[i]>>name[i];
		}
	}
	void display()
	{
		int j;
		cout<<"{";
		for(j=0;j<m-1;j++)
		{
			cout<<roll[j]<<"-"<<name[j]<<",";
		}
		cout<<roll[j]<<"-"<<name[j]<<"}";
	}
	void unionk(student cric,student bad)

		{
                 int i;
		for(int s=0;s<cric.m;s++)
		{
			roll[i]=cric.roll[i];
			name[i]=cric.name[i];
		}
		for(int j=0;j<bad.m;j++)
			{
				for(int k=0;k<cric.m;k++)
				{
					if(cric.roll[k]==bad.roll[j])
					{
						break;
					}
					else
					{
						roll[i]=bad.roll[j];
						i++;
					}

				}
			}
		cout<<"set playing any one of the games";
		cout<<"{";
		for(int p=0;p<i;p++)
		{
			cout<<roll[i];
		}
		}

};
int main()
{
	student obj,cric,bad,all;

	cout<<"\nENTER THE STUDENTS PLAYING CRICKET";
	cric.accept();
	cout<<"\nENTER THE STUDENTS PLAYING BADMINTON";
	bad.accept();
	cout<<"\n\nList of students who play cricket : \t";
	cric.display();
	cout<<"\n\nList of students who play badminton :\t";
	bad.display();
	all.unionk(cric,bad);
	return 0;
}

