#include <iostream>;
#include <vector>;

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

void print_table(vector<vector<short>>& triangle);
void pascal_generate(short total_layers, vector<vector<short>>& triangle);

int main() {
  cout << "Generate Pascal trianle in Roman Numbers!" << endl;
  cout << endl << "Enter number of rows: ";
  short layers;
  cin >> layers;

  return 0;
}

// generate whole pascal triangle
void pascal_generate(short total_layers, vector<vector<short>>& triangle) {
  // code
}


// convert one integer into roman number
string convert_romans(short single_integer) {
    // code
}


// prints the whole triangle, row by row.
void print_table(vector<vector<short>>& triangle) {
  // code
}
