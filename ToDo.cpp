/*
Author: Pranav Rao
Date: 5/8/2019
Purpose: To create a Todo class
*/

#include "ToDo.h"
//The default constructor 
ToDo::ToDo()
{
	category = "";
	title = "";
	due = Date();
	description = "";
	
}
//ToDo parameter
//To determine the string for the ouput
ToDo::ToDo(std::string c, std::string t, Date d, std::string des)
{
	category = c;
	title = t;
	due = d;
	description = des;
}

// set functions for  category, title, date, and description.
void ToDo::setCategory( std::string newCategory )
{
	category = newCategory;
}

void ToDo::setTitle( std::string newTitle )
{
	title = newTitle;
}

void ToDo::setDueDate(  Date newDueDate )
{
	due = newDueDate;
}

void ToDo::setDescription( std::string newDescription )
{
	description = newDescription;
}

// The get functions which will return category, title, due, and description
std::string ToDo::getCategory() const
{
	return category;
}

std::string ToDo::getTitle() const
{
	return title;
}

Date ToDo::getDueDate() const
{
	return due;
}

std::string ToDo::getDescription() const
{
	return description;
}

//printToDo
//Displays the output	
void ToDo::printToDo( std::ostream &out ) const
{
	out << "Category:      " << category <<std::endl;
	out << "Title:         " << title <<std::endl;
	out << "Due Date:      "; due.printDate(out);
	out << "Description:   " << description << std::endl;
}










