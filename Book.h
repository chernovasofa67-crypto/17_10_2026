//
// Created by Евгения on 17.10.2026.
//

#ifndef INC_17_10_2026_BOOK_H
#define INC_17_10_2026_BOOK_H


#include <string>
#include <iostream>


class Book {
protected:
    std::string author;
    std::string edition;
    std::string publication_date;
    long isbn;
public:
    Book(std::string auth, std:: string ed, std::string p_date, long id)
        :author(auth), edition(ed), publication_date(p_date),isbn(id){}

    void showBook() {
        std::cout <<"Книга: \"" << edition<< "\", Автор:"<< author
        <<"Дата,:"<< publication_date <<", ISBN:"<<isbn <<"\n";
    }
};
#endif //INC_17_10_2026_BOOK_H
