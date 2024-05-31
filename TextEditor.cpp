#include<iostream>
#include"string"
using namespace std;

int getLength(char* str) 
{
    int length = 0;

    while (str[length] != '\0') 
    {
        length++;
    }

    return length;
}


void copy(char* str1, char* str2)
{
    int i = 0;
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }

    str1[i] = '\0';
}


void makeBook(char* text, char***& book, int& totalPages)
{
    totalPages = 1;
    book = new char** [totalPages + 1];
    book[0] = new char* [1];

    int length = getLength(text);

    book[0][0] = new char[length + 1];

    copy(book[0][0], text);

    book[0][1] = nullptr;
    book[1] = nullptr;
}

void append(char***& book, char** page)
{
    int oldPages = 0;

    while (book[oldPages] != nullptr)
    {
        oldPages++;
    }

    
    char*** newBook = new char** [oldPages + 2];

    for (int i = 0; i < oldPages; i++)
    {
        newBook[i] = book[i];
    }

    newBook[oldPages] = page;
    newBook[oldPages + 1] = nullptr;

    delete[] book;
    book = newBook;
}


void append(char***& book, char* line)
{
    
    int currentPageIndex = 0;

    while (book[currentPageIndex] != nullptr)
    {
        currentPageIndex++;
    }

    currentPageIndex--;

  
    int oldLines = 0;

    while (book[currentPageIndex][oldLines] != nullptr) 
    {
        oldLines++;
    }


    char** newPage = new char* [oldLines + 2];

    for (int i = 0; i < oldLines; i++)
    {
        newPage[i] = book[currentPageIndex][i];
    }

    int lineLength = getLength(line);

    newPage[oldLines] = new char[lineLength + 1];

    copy(newPage[oldLines], line);

    newPage[oldLines + 1] = nullptr;

    delete[] book[currentPageIndex];

    book[currentPageIndex] = newPage;
}


void append(char***& book, char text) 
{
    
    int currentPageIndex = 0;

    while (book[currentPageIndex] != nullptr)
    {
        currentPageIndex++;
    }

    currentPageIndex--;


    int currentLineIndex = 0;

    while (book[currentPageIndex][currentLineIndex] != nullptr) 
    {
        currentLineIndex++;
    }

    currentLineIndex--;


    int oldLength = getLength(book[currentPageIndex][currentLineIndex]);

    char* newLine = new char[oldLength + 2];

    copy(newLine, book[currentPageIndex][currentLineIndex]);

    newLine[oldLength] = text;

    newLine[oldLength + 1] = '\0';

    delete[] book[currentPageIndex][currentLineIndex];
    book[currentPageIndex][currentLineIndex] = newLine;
}


void display(char***& book) 
{
    int pageIndex = 0;

    while (book[pageIndex]) 
    {
        cout << "Page " << pageIndex + 1 << ":" << endl;

        int lineIndex = 0;

        while (book[pageIndex][lineIndex] != nullptr) 
        {
            cout << book[pageIndex][lineIndex] << '\n';
            lineIndex++;
        }

        pageIndex++;

        cout << endl;
    }
}


int main() 
{
    char*** book = nullptr;

    int totalPages = 0;

    const char* initialText = "Hello! My name is Zohaib";

    makeBook(const_cast<char*>(initialText), book, totalPages);

    char** page2 = new char* [2];

    page2[0] = const_cast<char*>("I am 20 Years Old");

    page2[1] = nullptr;

    append(book, page2);

    append(book, const_cast<char*>("I like to code"));

    append(book, '\n');

    append(book, 'T');
    append(book, 'h');
    append(book, 'e');
    append(book, ' ');
    append(book, 'e');
    append(book, 'n');
    append(book, 'd');
    append(book, '.');

    display(book);

    return 0;
}
