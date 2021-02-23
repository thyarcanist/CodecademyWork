#include <iostream>

void BookIndex(std::string bookAuthor, std::string bookName){
  std::vector<string> Books;

  Books.push_back(bookAuthor, bookName);
}

int main(){
  std::cout << "Books are great!\n";

  std::string bookname;
  std::string author;

  std::cout << "What is the Book Name: \n";
  std::cin >> bookname;
  std::cout << "\n\n";
  std::cout << "Who is the book's Author? \n";
  std::cin >> author;


  BookIndex(author, bookname);

  std::cout << "Books: " << Books.size();


}
