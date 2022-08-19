#include<iostream>
using namespace std;
class Applicant{
	private:
	int Id, testScore, interviewmarks;
	string name, status;
	Applicant *nextApplicant;
	public: 
		void setId(){
			cin>>Id;
		}
		int getId(){
			return Id;
		}
		void setName(){
			cin>>name;
		}
		string getName(){
			return name;
		}
		void setTestScore(){
			cin>>testScore;
		}
		int getTestScore(){
			return testScore;
		}
		void setInterviewmarks(int i){
			interviewmarks=i;
		}
		int getInterviewmarks(){
			return interviewmarks;
		}
		void setStatus(string s){
			status=s;
		}
		string getstatus(){
			return status;
		}
		void setNextApplicant( Applicant *ptr){
			nextApplicant=ptr;
		}
		Applicant* getNextApplicant(){
			return nextApplicant;
		}
};
class Linked_List{
	Applicant* head;
	Applicant* current;
	public:
		Linked_List(){
			head=NULL;
			current=NULL;
		}
		void addApplicant(){ 
			int i;
			Applicant *newNode= new Applicant;
			cout<<"Enter the ID of Applicant:";
			newNode->setId();
			cout<<"Enter the Name of Applicant:";
			newNode->setName();
			cout<<"Enter the Test Score of Applicant:";
			newNode->setTestScore();
			if(newNode->getTestScore()>=80){
				cout<<"Enter the Interview Marks of Applicant:";
				cin>>i;
				newNode->setInterviewmarks(i);
				if(newNode->getInterviewmarks()>50)
					newNode->setStatus("Eligible");
					else
					newNode->setStatus("Ineligible");
		}
		else
		{ 
		newNode->setInterviewmarks(0);
		newNode->setStatus("Ineligible");
		cout<<"Applicant is not eligible for Job Interview";
		}
		newNode->setNextApplicant(NULL);
		if(head==NULL)
		{
		head=newNode;
		current=newNode;
		
		}
		else{
		current->setNextApplicant(newNode);
		current=newNode;
		}
		}
		void getInformation(){
			
		if(next(head)==true)
		{
		cout<<"No Applicant added yet"<<endl;
		}
		else{
		int count=0;
		Applicant *ptr=head;
		while(next(ptr)==false)
		{
		ptr=ptr->getNextApplicant();
		count++;
		}
		cout<<"Total number of Applicant: "<<count;
		}
		}
		bool next(Applicant *ptr){ 
		if(ptr==NULL){
		return true;
		}
		else{
		return false;
		}
		}
		void updateApplicant(){ 
		if(next(head)==true){
		cout<<"No Applicant Added Yet";
		}
		else{
		int t_id,found=0,i;
		cout<<"Enter Applicant ID:";
		cin>>t_id;
		Applicant *ptr=head;
		while(next(ptr)==false){
		if(t_id==ptr->getId()){
		cout<<"Enter the Name of Applicant:";
		ptr->setName();
		cout<<"Enter the Test Score of Applicant: ";
		ptr->setTestScore();
		if(ptr->getTestScore()>=80)
		{
		cout<<"Enter the Interview Marks os Applicant: ";
		cin>>i;
		ptr->setInterviewmarks(i);
		if(ptr->getInterviewmarks()>50)
		ptr->setStatus("Eligible");
		else 
		ptr->setStatus("Ineligible");
		}
		else{
		ptr->setInterviewmarks(0);
		ptr->setStatus("Ineligible");
		cout<<"Applicant is not Applicable for Job";
		}
	    cout<<"Record Updated";
	    found++;
		}
		ptr=ptr->getNextApplicant();
		}
		if(found==0){
		cout<<"Applicant ID not found";
		}
		}
		}
		friend void displayApplicant(Linked_List *obj, int choice){ 
		if(obj->next(obj->head)==true){
		cout<<"No Applicant Added Yet";
		}
		else{
		if(choice==3)
		{
		Applicant *ptr=obj->head;
		while(obj->next(ptr)==false){
		if(ptr->getstatus()=="Eligible"){
		cout<<endl<<"Applicant ID:"<<ptr->getId()<<endl;
	    cout<<endl<<"Applicant Name:"<<ptr->getName()<<endl;
		cout<<endl<<"Applicant TestScore:"<<ptr->getTestScore()<<endl;
		cout<<endl<<"Applicant Interview MArks:"<<ptr->getInterviewmarks()<<endl;
		cout<<endl<<"Applicant Status: "<<ptr->getstatus()<<endl;
		}
		ptr=ptr->getNextApplicant();
		}
		}
	    else{
	    Applicant *ptr= obj->head;
		while(obj->next(ptr)==false)
		{
		if(ptr->getstatus()=="Ineligible"){
		cout<<endl<<"Applicant ID:"<<ptr->getId()<<endl;
		cout<<endl<<"Applicant Name:"<<ptr->getName()<<endl;
		cout<<endl<<"Applicant TestScore:"<<ptr->getTestScore()<<endl;
		cout<<endl<<"Applicant Interview MArks:"<<ptr->getInterviewmarks()<<endl;
		cout<<endl<<"Applicant Status: "<<ptr->getstatus()<<endl;
		}
		ptr=ptr->getNextApplicant();
		}
		}
		}
		}
};
main()
{
	Linked_List L;
	int choice,number;
	do{
		cout<<endl<<"Enter your Choice: "<<endl;
		cout<<endl<<"1.To add Applicant data"<<endl;
		cout<<endl<<"2.Total number of Applicants"<<endl;
		cout<<endl<<"3.Display data of Eligible Applicants"<<endl;
		cout<<endl<<"4.Display data of Ineligible Applicants"<<endl;
		cout<<endl<<"5.Update Applicant Data"<<endl;
		cout<<"Press other number to close the program ";
		cin>>choice;
		switch(choice){
			case 1:
			cout<<"Enter the number of Applicants you want to add or see result:";
			cin>>number;
			for(int i=1;i<=number;i++){
			L.addApplicant();
			}
			break;
			case 2:
				L.getInformation();
				break;
			case 3:
			    displayApplicant(&L,choice);
				break;
			case 4:
			    displayApplicant(&L,choice);
				break;
			case 5:
			     L.updateApplicant();
				 break;	
		}
	}
	while(choice>=1 && choice<=5);
	return 0;
}

