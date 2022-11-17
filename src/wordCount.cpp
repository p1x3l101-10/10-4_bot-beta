#include <string>
#include <cstdlib>

int wordCount(std::string string) {
  int words = 0;

  for (long unsigned int i = 0; i < string.size(); i++) {
    if (string[i] == ' ') {
      words++;
    }
  }
  return words + 1;
}
