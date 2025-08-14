#include<iostream> 
#include<vector>
using namespace std;

class Book {
	public:

		Book(){
			title = ""; 
			author = ""; 
			year = 1900; 
			pages = 20; 
			price = 5.0; 

		}

		Book(string bookTitle, string bookAuthor, int bookYear, int bookPages, float bookPrice) {
			// use setter to check and set the data
			setTitle(bookTitle);
			setAuthor(bookAuthor);
			setYear(bookYear);
			setPages(bookPages);
			setPrice(bookPrice);
		}

		void setTitle(string bookTitle) {
			title = bookTitle;
		}
		void setAuthor(string authorName) {
			author = authorName;
		}
		void setYear(int bookYear) {
			// no book before year 1900
			year = (bookYear < 1900) ? 1900 : bookYear;
		}
		void setPages(int bookPages) {
			// min pages is 20
			pages = (bookPages < 20) ? 20 : bookPages;
		}
		void setPrice(float bookPrice) {
			// min price is 5.0
			price = (bookPrice < 5.0) ? 5.0 : bookPrice;
		}

		void getBookName() {
			cout << title; 
		}

		void displayBookInfo() {
			cout << "The Book: " << title << endl;
			cout << "Written by: " << author << endl;
			cout << "Year: " << year << endl;
			cout << "Book pages: " << pages << endl;
			cout << "Book price: " << price << endl;
		}

	private:
		string title;
		string author;
		int year;
		int pages;
		float price;
};

class Library {
	private : 
		vector<Book> books = {};
		int bookCount = 0; 

	public : 
		void addBook(Book newBook) {
			if (bookCount == 5) {
				cout << "Library is Full" << endl; 

			}
			else {
				books.push_back(newBook);
				bookCount ++ ; 
				books[bookCount-1].displayBookInfo() ; 
				cout << "Successful Add" << endl; 
				cout << "========================================================" << endl; 


			}
		}

		void printBooksName() {
			int length = books.size(); 
			for (int i = 0; i < length; i++) {
				cout << (i + 1) << "- " ; 
				books[i].getBookName(); 
				cout << endl; 
			}
		}
};


int main()
{
	Library library; 
	library.addBook(Book("Book1" ,"Abdelrhman" , 2005 , 200 , 25.5));
	library.addBook(Book("Book2" ,"Ahmde" , 2020 , 330 , 23));
	library.addBook(Book("Book3" ,"Mohamed" , 2025 , 150 , 90));
	library.addBook(Book("Book3" ,"Mohamed" , 2025 , 150 , 90));
	library.addBook(Book("Book3" ,"Mohamed" , 2025 , 150 , 90));
	library.addBook(Book("Book3" ,"Mohamed" , 2025 , 150 , 90));


	library.printBooksName(); 

}