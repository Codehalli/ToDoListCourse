/*
Author: Pranav Rao
Date: 5/8/2019
Purpose: To create a TodoList class
*/

#include "ToDoList.h"
//The default constructor 
ToDoList::ToDoList()
{
	count = 0;
	size = 10;
	whatIGotToDo = new ToDo[size];

}
//The ~ ToDoList Function
ToDoList::~ToDoList()
{
	
	count = 0;
	size = 10;
	delete [] whatIGotToDo;
	whatIGotToDo = nullptr;
}
//Get function for count
//Returns count
int ToDoList::getToDoCount() const
{
	return count;
}
//AddToDo function 
//For allowing it to grow if size and count are same
void ToDoList::addToDo(ToDo addMe)
{
	if( count == size)
	{
		grow();
	}
		whatIGotToDo[count] = addMe;
		count++;
}

//AddToDo function
//Function will grow it and add to the open hole
void ToDoList::addToDo( ToDo addMe, int atThisLocation) 
{
	if(count == size)
	{
		grow();
	}

	if( atThisLocation < 0)
	{
		makeAHoleHere(0);
		whatIGotToDo[0] = addMe;
		count++;
	}
	else if(atThisLocation >=count)
	{
		whatIGotToDo[count] = addMe;
		count++;
	}
	else
	{
		makeAHoleHere(atThisLocation);
		whatIGotToDo[atThisLocation] = addMe;
		count++;
	}
}
//get function
//To determine the fromThisLocation 
ToDo ToDoList::getToDo( int fromThisLocation ) const
{
	if(fromThisLocation > count || fromThisLocation < 0)
		return ToDo();
	else
		return whatIGotToDo[fromThisLocation];
}
//RemoveFunction
//Removes the ToDoList
ToDo ToDoList::removeToDo( int fromThisLocation ) 
{
	
	if(fromThisLocation > count || fromThisLocation < 0)
		return ToDo();
	else
	{
		return whatIGotToDo[fromThisLocation];
		
		for (int i=fromThisLocation; i <= count ; i++)
		{
			whatIGotToDo[i-1]= whatIGotToDo[i];
		}
		count--;
	} 
}
//printWhatIHaveToDo
//Displays the output
void ToDoList::printWhatIHaveToDo(std::ostream &out) const
{
	out << "Here's what I've got to do:" << endl;
	whatIGotToDo->printToDo(out);
}
//Grow Function 
void ToDoList::grow()
{
	size = size*2;
	ToDo *temp = nullptr;
	temp = whatIGotToDo;
	whatIGotToDo = new ToDo[size];
	
	for(int i = 0; i < size/2; i++)
	{
		whatIGotToDo[i] = temp[i];
	}
	
	delete [] temp;
}
//MakeAHoleHere Function
void ToDoList::makeAHoleHere(int location)
{
	
	for(int i = count; i > location; i--)
	{
		whatIGotToDo[i] = whatIGotToDo[i-1];
	}
}
//CoverupThisLocation Function 
void ToDoList::coverUpThisLocation(int location)
{
	
	for( int i = location; i < count; i++)
	{
		whatIGotToDo[i] = whatIGotToDo[i+1];
	}

}

