#include <iostream>
#include <fstream>

int main(){

    const int W = 8;
    const int H = 8;

    std::ofstream fout("testppm.txt");
    if(fout.fail()) return -1;

    fout << "P3\n";
    fout << W << " " << H << "\n";
    fout << "255\n";

    fout.close();
    return 0;
}