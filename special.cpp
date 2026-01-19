#include<stdio.h>
#include<fstream>
int main(){
    const int W = 13;
    const int H = 13;

    std::ofstream fout("test2.ppm");
    if(fout.fail()) return -1;

    fout << "P3\n";
    fout << W << " " << H << "\n";
    fout << "255\n";

    for(int r=1;r<=13;r++){
        for(int c=1;c<=13;c++){

            if((r>=5 && r<=11) && (c>=2 && c<=4)){
                if((c==3 && (r==6 || r==7)) || ((r==9 || r==10) && (c==3 || c==4))){
                    fout << "0 0 0 ";
                }
                else{
                    fout << "255 0 0 ";
                }
            }
            else if((r>=1 && r<=4) && c==6){
                if(r==2){
                    fout << "0 0 0 ";
                }
                else{
                    fout << "255 0 0 ";
                }
            }

            else if((r>=2 && r<=4) && (c>=8 && c<=12)){
                if((r==3 || r==4) && (c==8 || c==10 || c==12)){
                    fout << "0 0 0 ";
                }
                else{
                    fout << "255 0 0 ";
                }
            }

            else if(c==13){
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