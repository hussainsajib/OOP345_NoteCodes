// Closing a connection early
// fileCopy2.cpp
#include <fstream>
int main(int argc, char* argv[]){
    std::ifstream source;
    std::ofstream destination(argv[3]);
    source.open(argv[1]);
    destination << src.rdbuf();
    source.close();
    source.open(argv[2]);
    destination << source.rdbug();
    return 0;
}