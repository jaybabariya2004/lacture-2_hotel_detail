#include<iostream>

using namespace std;

class hotel{
	
	private:
		int id,rating,establish_year,staff_quantity,room_quantity;
		char name[20],type[20];
		static char location[50];
		
	public:
		void setter(){
			
			cout<<"Enter Room Id : ";
			cin>>id;
			
			cout<<"Enter Room Name : ";
			cin>>name;
			
			cout<<"Enter Room Type : ";
			cin>>type;
			
			cout<<"Enter Room Rating : ";
			cin>>rating;
			
//			cout<<"Enter Location : ";
//			cin>>location;
			
			cout<<"Enter Room Establish year : ";
			cin>>establish_year;
			
			cout<<"Enter Room Staff quantity : ";
			cin>>staff_quantity;
			
			cout<<"Enter Room quantity : ";
			cin>>room_quantity;
		}
		void getter(){
			
			cout<<"Id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Room Type : "<<type<<endl;
			cout<<"Room Rating : "<<rating<<endl;
			cout<<"Room Location : "<<location<<endl;
			cout<<"Room Establish year : "<<establish_year<<endl;
			cout<<"Room Staff Quantity : "<<staff_quantity<<endl;
			cout<<"Room Quantity : "<<room_quantity<<endl<<endl;;
		}
};
char hotel :: location[] = "Surat";

int main(){
	
	hotel obj[5];
	int i;
	
	for(i=0; i<=4; i++){
		
		obj[i].setter();
	}
	for(i=0; i<=4; i++){
		
		obj[i].getter();
	}
	
	return 0;
}
