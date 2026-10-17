//
// Created by Евгения on 17.10.2026.
//

#ifndef INC_17_10_2026_VOICE_RECODING_H
#define INC_17_10_2026_VOICE_RECODING_H

#include <string>
#include <iostream>

class Voice_recoding {
protected:
    std::string speaker;
    int duration;
    std::string recoding_date;

public:
    Voice_recoding(std::string spk, int dur, std::string r_date)
        : speaker(spk), duration(dur), recoding_date(r_date){}

    void showAudio() {
        std::cout <<"Запис: Читець:" << speaker << ",Тривалість:" << duration
        <<"хв, Дата:"<< recoding_date <<"\n";
    }
};
#endif //INC_17_10_2026_VOICE_RECODING_H
