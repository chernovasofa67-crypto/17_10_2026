//
// Created by Евгения on 17.10.2026.
//

#ifndef INC_17_10_2026_TALKING_BOOK_H
#define INC_17_10_2026_TALKING_BOOK_H

#include "Book.h"
#include "Voice_recoding.h"


class Talking_book : public Book, public Voice_recoding {
private:
    int Tapes;

public:
    Talking_book(std::string auth, std::string ed , std::string p_date, long id, std::string spk, int dur, std::string r_date, int tapes)
        :Book(auth, ed, p_date, id), Voice_recoding(spk, dur, r_date), Tapes(tapes){}

    void showTalkongBook() {
        std::cout <<"-інформація про аудіокнигу-\n";
        showBook();
        showAudio();
        std::cout <<"кількість носії (Tapes):" <<Tapes<<"\n";
    }
};
#endif //INC_17_10_2026_TALKING_BOOK_H
