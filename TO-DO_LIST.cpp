#include<iostream>
#include<vector>
#include<string>
#include <climits>
using namespace std;
struct Task{
    string task_name;
    bool complete;
    Task( const string&task):task_name(task),
    complete(false){}
};

class TOdo{
    private:
    vector<Task>Tasks;
    public:
    void addTask(const string& task_name){
        Tasks.push_back(Task(task_name));
        cout<<"Task add:"<<task_name<<"\n";
    }
    void viewTask(){
        if(Tasks.empty()){
            cout<<"No task"<<"\n";
        }
        else{
            cout<<"Task in list"<<"\n";
            for(int i=0;i<Tasks.size();i++){
                cout<< "<"<<i<<">";
                if(Tasks[i].complete){
                    cout<<"completed";
                }
                cout<<Tasks[i].task_name<<"\n";
            }
        }
    }
    void markTask(int  index){
        if((index>= 1) && (index<=Tasks.size())){
                       Tasks[index-1].complete = true; 
                       cout<<Tasks[index-1].task_name<<"\n";
    }
    else{
        cout<<"Not having task"<<"\n";
    }
}
void removeTask(int index){
    if ((index >= 1 )&& (index <= Tasks.size())) {
        cout<<"Remove :"<<Tasks[index-1].task_name<<"\n";
}
else{
    cout<<"Not have this task"<<"\n";
}
}
};

int main(){
 TOdo todolist;
 int choice;
 while(true){
    cout<<"1 ADD TASK"<<"\n";
    cout<<"2 VIEW TASKS"<<"\n";
    cout<<"3 MARK COMPLETE"<<"\n";
    cout<<"4 REMOVE TASK"<<"\n";
    cout<<"5 EXIT"<<"\n";
    cout<<"Enter choice :";
    cin>>choice;
    switch(choice){
        case 1:
        {
            string task_name;
            cout<<"enter the name of Task:";
            cin.ignore();
            getline(cin,task_name);
            todolist.addTask(task_name);
            break;
           }
           case 2:{
   todolist.viewTask();
           break;
           }
        

           case 3:{
            int index ;
            cout<<"Enter the task index for mark: ";
            cin>>index;
            todolist.markTask(index);
            break;
           }
           case 4:{
            int index;
            cout<<"Enter the task Index For Remove :";
            cin>>index;
            todolist.removeTask(index);
            break;
           }
        default:
        cout<<"Invalid choice"<<"\n";
        break;
        }
 
}
}