#include <iostream>;
#include <vector>;

using std::cout;
std::cin, std::endl, std::vector, std::string;

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

bool in_range(short to_check, short min_lim, short max_lim) {
  if ((to_check >= min_lim) and (to_check < max_lim)) {
    return (true);
  }
  return (false);
}

// convert one integer into roman number
string convert_romans(short single_integer) {
  string roman_eq;
  while (single_integer > 0) {
    if (single_integer >= 1000) {
      single_integer -= 1000;
      roman_eq += "M";
    }
    else if (in_range(single_integer, 400, 500) or in_range(single_integer, 900, 1000)) {
      single_integer += 100;
      roman_eq += "C";
    }
    else if (single_integer >= 500) {
      single_integer -= 500;
      roman_eq += "D";
    }
    else if (single_integer >= 100) {
      single_integer -= 100;
      roman_eq += "C";
    }
    else if (in_range(single_integer, 40, 50) or in_range(single_integer, 90, 100)) {
      single_integer += 10;
      roman_eq += "X";
    }
    else if (single_integer >= 50) {
      single_integer -= 50;
      roman_eq += "L";
    }
    else if (single_integer >= 10) {
      single_integer -= 10;
      roman_eq += "X";
    }
    else if ((single_integer == 9) or (single_integer == 4)) {
      single_integer += 1;
      roman_eq += "I";
    }
    else if (single_integer >= 5) {
      single_integer -= 5;
      roman_eq += "V";
    }
    else {
      single_integer -= 1;
      roman_eq += "I";
    }
  }
  return roman_eq;
}

// prints the whole triangle, row by row.
void print_table(vector<vector<short>>& triangle) {
  for (int i{}; i < triangle.size(); i++) {
    // triangle[i] is the row
    for (int j{}; j < triangle[i].size(); j++) {
      cout << convert_romans(triangle[i][j]) << "\t";
    }
    cout << endl;
  }
}
pascal_triangle.cpp
