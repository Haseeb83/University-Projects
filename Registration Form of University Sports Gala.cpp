#include<iostream>
using namespace std;

template <class T>
class Registeration{
	private:
		string id;
		string name;
		int age;
		T height;
		T weight;
		int game;
		
	public:
		Registeration(){
			this->id = "";
			this->name="";
			this->age=12;
			this->height=23;
			this->weight=22;
		}
		Registeration(string id, string name, int age, T height, T weight, int game){
			this->id = id;
			this->name=name;
			this->age=age;
			this->height=height;
			this->weight=weight;
		}
		//Setters
		void setID(string id){
			this->id=id;
		}
		void setName(string name){
			this->name=name;
		}
		void setAge(int age){
			this->age=age;
		}
		void setHeight(T height){
			this->height=height;
		}
		void setWeight(T weight){
			this->weight=weight;
		}
		
		//Getters
		string getId(){
			return id;
		}
		string getName(){
			return name;
		}
		
		
		void EnterData(){
			cout<<"Enter Student ID: ";
			cin.ignore();
			getline(cin, id);

			cout<<"Enter Student name: ";
			getline(cin, name);
			cout<<"Enter Age: ";
			cin>>age;
			cout<<"Enter Height(cms): ";
			cin>>height;
			cout<<"Enter Weight(lbs): ";
			cin>>weight;
			Again:
			cout<<"We are offering the following Sports, please choose from the given options:"<<endl;
			cout<<"Press 1 - 100 Meter Race"<<endl;
			cout<<"Press 2 - 200 Meter Race"<<endl;
			cout<<"Press 3 - 400 Meter Race"<<endl;
			cout<<"Press 4 - 100 Meter Sack Race"<<endl;
			cin>>game;
			if(!(game>=1 && game <=4))
			{
				cout<<"Invalid Choice!"<<endl;
				goto Again;
			}
			
		}
		void DisplayData(){
			cout<<"ID: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Height in cms: "<<height<<endl;
			cout<<"Weight in lbs: "<<weight<<endl;
			if(game == 1)
				cout<<"Chosen Sport: 100 Meter Race "<<endl;
			else if(game == 2)
				cout<<"Chosen Sport: 200 Meter Race "<<endl;
			else if(game == 3)
				cout<<"Chosen Sport: 400 Meter Race "<<endl;
			else if(game == 3)
				cout<<"Chosen Sport: 100 Meter Sack Race "<<endl;
		}
};
int main()
{
	cout<<"Online Registeration Form"<<endl;
	cout<<"__________________________________"<<endl;
	Registeration<int> r1;
	r1.EnterData();
	cout<<endl<<"__________________________________"<<endl;
	
	Registeration<float> r2;
	r2.EnterData();
	cout<<endl<<"__________________________________"<<endl;
	r1.DisplayData();
	cout<<endl<<endl<<"__________________________________"<<endl;
	r2.DisplayData();
}
