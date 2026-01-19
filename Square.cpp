#include <iostream>
#include <fstream>

int main(){

    const int W = 8; //number of pixels in a single row
    const int H = 8; //number of pixrls in a single column

    std::ofstream fout("testppm.ppm"); //creating a txt file to write to
    if(fout.fail()) return -1; //close the program if file not created

    fout << "P3\n";  //P3 means that we can write using ASCII characters 
    fout << W << " " << H << "\n";  //the range of pixels getting affected row, column
    fout << "255\n"; //max value of intensity of a pixel

    for(int r=1;r<=8;r++){
        for(int c=1;c<=8;c++){
            if((r>=2 && r<=7) && (c>=2 && c<=7)){
                if((r>=3 && r<=6) && (c>=3 && c<=6)){
                    fout << "0 0 0 ";
                }
                else{
                    fout << "255 0 0 ";
                }
            }
            else if(c==8){
                fout << "0 0 0 \n";
            }
            else{
                fout << "0 0 0 ";
            }
        }
    }

    fout.close(); //close the file
    return 0;
}