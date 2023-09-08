#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));  
  
cout<< "Random number between 1 and 100 is: "<<"\n";  
        int random_number= (rand() % 10) + 1;   
    int User_guesses;
  while(true){
    cout<<"Enter the any number between(1 to 10)"<<"\n";
    cin>>User_guesses;
     if(User_guesses<1 || User_guesses>10){
    cout<<" Please enter the guess between 1 to 10"<<"\n";
    continue;
  }

    if(random_number==User_guesses){
     cout<<"Congratulations your guess is correct"<<"\n";
     break;
  }
  else if(User_guesses<random_number){
    cout<<"Too low"<<"\n";
  }
  else if(User_guesses>random_number){
    cout<<"too high"<<"\n";
  }
 
}
}