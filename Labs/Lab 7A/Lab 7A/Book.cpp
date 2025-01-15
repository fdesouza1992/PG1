#define BOOK
#include <string>

class Book {																//Defining a class named Book
	std::string Title;														//Setting private data members for holding title and author
	std::string Author;

public:

	Book() {																//Default Constructor
		Title = "Moby-Dick";												//Setting default values for title and author
		Author = "Herman Melville";
	}

	Book(std::string title, std::string author) {							//Overloaded Constructor that takes title and author as parameters
		this->Title = title;												//Setting the provided title and author
		this->Author = author;
	}

	std::string GetTitle() {												//Accessors, Getter function to return the title
		return Title;
	}

	std::string GetAuthor() {												//Accessors, Getter function to return the author
		return Author;
	}

};