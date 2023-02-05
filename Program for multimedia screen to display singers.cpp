#include <iostream>
#include<string>
using namespace std;
class music_category
{
	private:
	string categoryname;
	string instrument;
	public:
	void setcategoryname(string name)
	{
		categoryname=name;
	}
	void setinstrument(string inst)
	{
		instrument=inst;
	}
	void display()
	{
		cout<<"category name:"<<categoryname<<std::endl;
		cout<<"instrument:"<<instrument<<std::endl;
	}
	
};
class music_band
{
	private:
		string bandname;
		music_category category;
		public:
			void setbandname(string name)
			{
				bandname = name;
			}
			void setcategory(string name,string inst)
			{
				category.setcategoryname(name);
				category.setinstrument(inst);
			}
			void display()
			{
				cout<<"Band NAme:"<<bandname<<endl;
				category.display();
			}
};
class artist
{
	private:
		string artistName;
		music_band band;
		public:
			void setartistname(string name)
			{
				artistName = name;
			}
			void setband(string name, string category, string inst)
			{
				band.setbandname(name);
				band.setcategory(category,inst);
			}
			void display()
			{
				cout<<"Artist Name:"<<artistName<<endl;
				band.display();
			}
};
class pop:public artist
{
};
class classic:public artist
{
};
int main()
{
	string artist_name,band_name,music_category_name,instrument_name;
	cout<<"VUID:"<<"BC190402477\n\n"<<endl;
	cout<<"Enter Artist name: ";
	cin >> artist_name;
	cout<<"Enter Music Band name: ";
	cin>>band_name;
	cout<<"Enter Music Category Name: ";
	cin>>music_category_name;
	cout<<"Enter Instrument Name: ";
	cin>>instrument_name;
	cout<<"\n";
	pop pop;
	pop.setartistname(artist_name);
	pop.setband(band_name,music_category_name,instrument_name);
	cout<<"Enter Artist name: ";
	cin>>artist_name;
	cout<<"Enter Music Band name: ";
	cin>>band_name;
	cout<<"Enter Music Category Name: ";
	cin>>music_category_name;
	cout<<"Enter Instrument Name:";
	cin>>instrument_name;
	classic classic;
	classic.setartistname(artist_name);
	classic.setband(band_name,music_category_name,instrument_name);
	cout<<"\nData of First Artist\n"<<endl;
	pop.display();
	cout<<"\nData of Second Artist\n"<<endl;
	classic.display();
	return 0;
	}