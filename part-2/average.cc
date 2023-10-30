// Maritza Esparza
// maritzae@csu.fullerton.edu
// @Maritzae
// Partners:@MatthewL0pez

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number" << std::endl;
    return 1;
  }

  double sum = 0.0;
  int count = 0;

  for (const std::string& arg :
       std::vector<std::string>(arguments.begin() + 1, arguments.end())) {
    try {
      double num = std::stod(arg);
      sum += num;
      count++;
    } catch (const std::invalid_argument& e) {
      std::cout << "Invalid argument: " << arg << std::endl;
    }
  }

  if (count > 0) {
    double average = sum / count;
    std::cout << "average = " << average << std::endl;
  } else {
    std::cout << "No valid numbers found for calculation" << std::endl;
  }

  return 0;
}

// Validate that there is at least one command line argument.
// If not, print an error message and return a non-zero value.

// Write a for-each loop to sum (add up) all of the command line
// arguments.
// Use a double or float type so that your program preserves fractional
// values.
// The loop needs to skip over the command name, which is the first element
// of the arguments vector.
// Each argument is a std::string. You will need to convert each string into
// a number with the std::stod or std::stof function.

// After the loop has finished summing the arguments, calculate the
// average of the values. Recall that the average is the total value divided
// by the number of values.

// Use cout to print out a message of the form
// average = *AVERAGE*
// on its own line.
