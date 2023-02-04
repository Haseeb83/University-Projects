#include<iostream>
using namespace std;
class Artist
{
   string Aname;
   public:
   Artist()
   {
   	Aname="";
   }
	void SetAname()
	{
		cout<<endl<<"Enter Artist name : " ;
		cin>>Aname;
	}	
	void displayA()
	{
		cout<<"Artist name : " <<Aname;
	}
};
class MusicBand
{
	string Band_Name;
	Artist A;
	public:
	MusicBand()
   {
   	Band_Name="";
    }
	void SetMB()
	{
		A.SetAname();
		cout<<"Enter Music Band name : " ;
		cin>>Band_Name;
	}	
	void displayMB()
	{
		A.displayA();
		cout<<endl<<"Music Band name : " <<Band_Name;
	}
};
class Music_Category
{
	string nameofcategory, InstrumentName;
	MusicBand MBO;
	public:
	Music_Category()
   {
   	nameofcategory="";
   	InstrumentName="";
    }
	void SetMCO()
	{
		MBO.SetMB();
		cout<<"Enter Music Category Name : " ;
		cin>>nameofcategory;
	}	
	void SetInstrument()
	{
		cout<<"Enter Instrument Name : " ;
		cin>>InstrumentName;
	}
	void displayMC()
	{
		MBO.displayMB();
		cout<<endl<<"Music Category Name : " <<nameofcategory;
		cout<<endl<<"Instrument Name : " <<InstrumentName;
	}
};
class Pop: public Music_Category
{
	public:
	Pop()
	{
		
	}
};

class Classic: public Music_Category
{
	public:
	Classic()
	{
		
	}
};

int main()
{
	cout<<"VUID: BC00000000(EnterYourownVUID)"<<endl<<endl;
	Pop p;
	Classic c;
	p.SetMCO();
	p.SetInstrument();
	
	c.SetMCO();
	c.SetInstrument();
	
	cout<<endl<<endl<<"Data of First Artist"<<endl<<endl;
	p.displayMC();
	cout<<endl<<endl<<"Data of Second Artist"<<endl<<endl;
	c.displayMC();
}

