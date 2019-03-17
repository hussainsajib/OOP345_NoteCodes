// Copying Files
// fileCopy.cpp
//to run successfully please include two file names as 
//command line argumetns

#include <fstream>
int main(int argc, char* argv[]){
    std::ifstream source(argv[1]);
    std::ofstream destination(argv[2]);
    destination << source.rdbuf();
}