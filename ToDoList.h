#ifndef TODOLIST_H
#define TODOLIST_H
 
#include "Date.h"
#include "ToDo.h"
 using namespace std;
class ToDoList
{
 private:
     int count;
     int size;
     ToDo *whatIGotToDo;
 
     void grow();
     void makeAHoleHere( int location );
     void coverUpThisLocation( int location );
 public:
     ToDoList();    //Default constructor
     ~ToDoList();
	 
	//parameterized constructor
     int getToDoCount() const;
 
     void addToDo( ToDo addMe );
 
     void addToDo( ToDo addMe, int atThisLocation );
 
     ToDo getToDo( int fromThisLocation ) const;
 
     ToDo removeToDo( int fromThisLocation );
 
     void printWhatIHaveToDo( std::ostream &out ) const;
};
 
#endif