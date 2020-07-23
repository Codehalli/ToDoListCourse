#ifndef TODO_H
#define TODO_H
 
#include "Date.h"
#include <string>

using namespace std;
class ToDo
{
 private:
     std::string category;
     std::string title;
     Date due;
     std::string description;
 
 public:
     ToDo(); //Default constructor
     ToDo( std::string c, std::string t, Date d, std::string des );
		//parameterized constructor
     void setCategory( std::string newCategory );
     void setTitle( std::string newTitle );
     void setDueDate( Date newDueDate );
     void setDescription( std::string newDescription );
 
     std::string getCategory() const;
     std::string getTitle() const;
     Date getDueDate() const;
     std::string getDescription() const;
 
     void printToDo( std::ostream& out ) const;
};
 
#endif