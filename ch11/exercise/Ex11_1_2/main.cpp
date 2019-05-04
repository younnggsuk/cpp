#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Book
{
private:
	char *title;
	char *isbn;
	int price;
public:
	Book(const char *_title, const char *_isbn, int _price) : price(_price)
	{
		title = new char[strlen(_title)+1];
		strcpy(title, _title);
		isbn = new char[strlen(_isbn)+1];
		strcpy(isbn, _isbn);
	}
	Book(const Book& ref) : price(ref.price)
	{
		title = new char[strlen(ref.title)+1];
		strcpy(title, ref.title);
		isbn = new char[strlen(ref.isbn)+1];
		strcpy(isbn, ref.isbn);
	}
	Book& operator=(const Book& ref)
	{
		delete []title;
		delete []isbn;

		title = new char[strlen(ref.title)+1];
		strcpy(title, ref.title);
		isbn = new char[strlen(ref.isbn)+1];
		strcpy(isbn, ref.isbn);

		price = ref.price;
		return *this;
	}
	void ShowBookInfo() const
	{
		cout<<"TITLE  : "<<title<<endl;
		cout<<"ISBN   : "<<isbn<<endl;
		cout<<"PRICE  : "<<price<<endl;
	}
	~Book()
	{
		delete []title;
		delete []isbn;
	}
};

class EBook : public Book
{
private:
	char *DRMKey;
public:
	EBook(const char *_title, const char *_isbn, int _price, const char *_DRMKey)
		: Book(_title, _isbn, _price)
	{
		DRMKey = new char[strlen(_DRMKey)+1];
		strcpy(DRMKey, _DRMKey);
	}
	EBook(const EBook& ref) : Book(ref)
	{
		DRMKey = new char[strlen(ref.DRMKey)+1];
		strcpy(DRMKey, ref.DRMKey);
	}
	EBook& operator=(const EBook& ref)
	{
		Book::operator=(ref);
		delete []DRMKey;

		DRMKey = new char[strlen(ref.DRMKey)+1];
		strcpy(DRMKey, ref.DRMKey);
		
		return *this;
	}
	void ShowEBookInfo() const
	{
		ShowBookInfo();
		cout<<"DRMKEY : "<<DRMKey<<endl;
	}
	~EBook()
	{
		delete []DRMKey;
	}
};

int main()
{
	EBook ebook1("Good C++", "555-12345-890-0", 20000, "fdx9w0i8kiw");
	EBook ebook2 = ebook1;
	ebook2.ShowEBookInfo();
	cout<<endl;

	EBook ebook3("dummy", "dummy", 0, "dummy");
	ebook3 = ebook2;
	ebook3.ShowEBookInfo();
	
	return 0;
}
