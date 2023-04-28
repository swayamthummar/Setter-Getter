#include<iostream>
using namespace std;
class stud
{
	    private :
		int roll;
		char name[100];
		int std;
		char contact[12];
		char add[100];
		
	    public :
	    	
		void setData()
		{
			cout<<"Enter Students Roll No->";
			cin>>roll;
			cout<<"Enter Students Name->";
			cin>>name;
			cout<<"Enter Students Standard->";
			cin>>std;
			cout<<"Enter Students Contact Details->";
			cin>>contact;
			cout<<"Enter Students Address->";
			cin>>add;
			
		}
		void ()getData
		{
	    	cout<<"Roll No->"<<roll<<endl;
			cout<<"Name->"<<name<<endl;
			cout<<"Standard->"<<std<<endl;
			cout<<"Contact No->"<<contact<<endl;
			cout<<"Address->"<<add<<endl;		
		}
};
main()
{
	stud s1,s2,s3,s4,s5;
	
	cout<<endl;
	
	s1.setData();
	s2.setData();
	s3.setData();
	s4.setData();
	s5.setData();
	
    cout<<endl;	

	s1.getData();
	s2.getData();
	s3.getData();
	s4.getData();
	s5.getData();
}
