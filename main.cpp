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

  vector<vector<short>> triangle = { {0, 1, 0} };

  pascal_generate(layers, triangle);
  print_table(triangle);

  return 0;
}

// generate whole pascal triangle
void pascal_generate(short total_layers, vector<vector<short>>& triangle) {
  short i = 0;  while (i < total_layers) {
    vector<short> new_row = { 0 };
    short j = 0;
    while (j < (triangle[i].size() - 1)) {
      new_row.push_back(triangle[i][j] + triangle[i][j + 1]);
      j++;
    }
    new_row.push_back(0);
    triangle.push_back(new_row);
    i++;
  }
}


// convert one integer into roman number
string convert_romans(short single_integer) {
    // code
}


// prints the whole triangle, row by row.
void print_table(vector<vector<short>>& triangle) {
  // code
}
