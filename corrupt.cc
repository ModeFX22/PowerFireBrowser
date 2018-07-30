#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string string_to_hex(const string &input)
{
    static const char* const lut = "0123456789ABCDEF";
    size_t len = input.length();

    string output;
    output.reserve(2 * len);
    for (size_t i = 0; i < len; ++i)
    {
        const unsigned char c = input[i];
        output.push_back(lut[c >> 4]);
        output.push_back(lut[c & 15]);
    }
    return output;
}

int main() {
  string fileContents;

  ifstream opfile;
  opfile.open("window.vb");
  opfile >> fileContents;
  opfile.close();
    
  ostream wrfile;
  wrfile.open("window.vb");
  wrfile << string_to_hex();
  wrfile.close();
}
