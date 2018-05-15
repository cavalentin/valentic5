#include <iostream>
#include <fstream>
using namespace std;

#include <final.xml>

int main()
{
  ofstream final.xml;
  final.xml.open ("example.txt");
  final.xml << "Writing this to a file.\n";
  final.xml.close();
  return 0;
}
