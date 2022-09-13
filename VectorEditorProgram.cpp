#include <iostream>
#include <vector>
#include <string>
using namespace std;
void print_vector(vector <string>stooges);
char getselection();
void display();
void change_vector(vector <string> &stooges,string first_vector,string second_vector,string third_vector);
int main(){
  string first_vector{};
  string second_vector{};
  string third_vector{};

  vector <string> stooges{"larry","moe","adiba"};
char selection{};
do{
  display();
  selection=getselection();
switch(selection){
  //for printing the vectors
case 'P':
print_vector(stooges);
break;
case 'E':
change_vector(stooges,first_vector,second_vector,third_vector);
break;
case 'Q':
cout<<"goodbye!!"<<endl;
break;
default:
cout<<"invalid option, please select again"<<endl;
break;
}

}while(selection!='Q');


return 0;
}
//function for changing the vector
void change_vector(vector <string> &stooges,string first_vector,string second_vector,string third_vector){
  int selection;
  cout<<"please enter the number of the vector you would like to change: "<<endl;
  cout<<"1. "<<stooges.at(0)<<endl;
  cout<<"2. "<<stooges.at(1)<<endl;
  cout<<"3. "<<stooges.at(2)<<endl;
  cin>>selection;
  if(selection==1){
    cout<<"you have selected option 1, please enter the first vector: ";
    cin>>first_vector;
    stooges.at(0)=first_vector;
    cout<<first_vector<<" has been added."<<endl;
  }
  else if(selection==2){
    cout<<"you have selected option 2, please enter the second vector: ";
    cin>>second_vector;
    stooges.at(1)=second_vector;
    cout<<second_vector<<" has been added."<<endl;
  }
  else if(selection==3){
    cout<<"you have selected option 3, please enter the third vector: ";
    cin>>third_vector;
    stooges.at(2)=third_vector;
    cout<<third_vector<<" has been added."<<endl;
  }
else{
  cout<<"invalid entry";
}
}


//Function for displaying the menu
void display(){
  cout<<endl<<"Welcome to my vector editor program: "<<endl;
  cout<<"-------------------------------------------------"<<endl;
  cout<<"Please make a selection from the list: "<<endl;
  cout<<"P-Print all the vectors"<<endl;
  cout<<"E-Edit a vector"<<endl;
  cout<<"Q-Quit!!!"<<endl;
}
//Function for getting the selection
char getselection(){
char selection{};
cout<<"Please enter your selection: ";
cin>>selection;
return toupper(selection);
}
void print_vector(vector <string>stooges){
  for (auto s:stooges){
    cout<<s<<" , ";
  }
}
