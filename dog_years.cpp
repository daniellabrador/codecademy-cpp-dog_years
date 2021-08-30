#include <iostream>

int main() {
  // Declare and initialize variables.
  int dog_age, early_years, later_years, human_years;

  // Ask information from user.
  std::cout<<"Enter your dog's age: ";
  std::cin>>dog_age;

  // The first two years of a dog’s life count as 21 human years.
  early_years=21;

  // Each following year counts as 4 human years.
  later_years = (dog_age-2)*4;

  // Compute dog's human years.
  human_years=early_years+later_years;

  // Output conversion.
  std::cout<<"My name is Russell! Ruff ruff, I am "<<human_years<<" years old in human years.\n";

  return 0;
}