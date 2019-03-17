// File Objects - Direct Access
// direct.cpp
#include <iostream>
#include <fstream>
int main(int argc, char* argv[]){
    //create or open an output file object from command line argument
    std::ofstream fo(argv[1]);
    //insert data in to that file
    fo << "Line 1" << std::endl;
    fo << "Line 2" << std::endl;
    fo << "Line 3" << std::endl;
    //position the file pointer to the beg of the file
    //also offset the file pointer by 0 char from the beg
    fo.seekp(0,std::ios::beg);
    //insert data in to the file in current pointer location
    fo << "****";
    //move the current file pointer to the 4th position from 
    //current pointer position
    fo.seekp(4,std::ios::cur);
    //insert data into file in current pointer position
    fo << '#';
    //create a std::streampos type variable and store teh value 
    //of the curren pointer to the file
    std::streampos p = fo.tellp();
    //move the pointer to the file to the end and offset by 0
    fo.seekp(0,std::ios::end);
    //insert new data to the current position of pointer
    fo << "The last line\n";
    //move the pointer to the stored position in variable p
    fo.seekp(p);
    //insert data in the current position of pointer
    fo << '^';
    //close the currently opened file
    fo.close();
    //open an input file object from the command line argument
    std::ifstream fi(argv[1]);
    char c;
    //read from the opened file object and print to standard output
    while(fi.get(c)){ std::cout << c; }
    //clear the file pointer flag
    fi.clear();
    //move the file pointer to 8 characters before the end
    fi.seekg(-8,std::ios::end);
    //read from the file and print to standard output
    while(fi.get(c)){ std::cout << c; }


}