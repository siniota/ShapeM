#include<stdio.h>
#include<fstream>
int main(){
    const int W = 8;
    const int H = 8;

    std::ofstream fout("file.ppm");
    if(fout.fail()) return -1;

    fout << "P3\n";
    fout << W << " " << H << "\n";
    fout << "255\n";

    for(int r=1;r<=8;r++){
        for(int c=1;c<=8;c++){
            if((r==2 || r==5) && (c>=2 && c<=7)){
                fout << "255 0 0 ";
            }
            else if((c==2 || c==7) && (r>=2 && r<=7)){
                fout << "255 0 0 ";
            }
            else if(c==8){
                fout << "0 0 0\n";
            }
            else{
                fout << "0 0 0 ";
            }
        }
    }

    fout.close();
    return 0;
}