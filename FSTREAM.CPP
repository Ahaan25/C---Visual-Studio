// basic file operations
#include <iostream.h>
#include <fstream.h>
int main () {
  ofstream myfile;
  myfile.open ("example.txt",ios::binary|ios::app);
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}