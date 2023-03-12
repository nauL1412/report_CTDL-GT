#include "testlib.h"
#include <bits/stdc++.h>
int main(int argc, char *argv[]){
    registerGen(argc, argv, 1);

    //Increasing number
    std::ofstream out1("../tests\\1-increasing.txt");
    for(int i = 0; i < 1000000; ++i){
        double value = i + rnd.next(0.0000, 0.9999);
        out1 << std::fixed << std::setprecision(4) << value << ' ';
    }
    out1.close();

    //Decreasing number
    std::ofstream out2("../tests\\2-decreasing.txt");
    for(int i = 1000000; i > 0; --i){
        double value = i + rnd.next(0.0000, 0.9999);
        out2 << std::fixed << std::setprecision(4) << value << ' ';
    }
    out2.close();

    //Random number
    for(int tc = 3; tc <= 10; ++tc){
        std::string file_name = "../tests\\" + std::to_string(tc) + "-random.txt";
        std::ofstream out(file_name);
        for(int i = 0; i < 1000000; ++i){
            double value = 1.0 * rnd.next(-1000000, 1000000) + (1.0 * rnd.next(0.0000, 0.9999) * rnd.next(0.0000, 0.9999) * rnd.next(0.0000, 0.9999));
            out << std::fixed << std::setprecision(4) << value << ' ';
        }
        out.close();
    }
}
//contribute by AnoTherK-ATK
