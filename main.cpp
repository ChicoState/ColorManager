#include <iostream>
#include <cstring>

bool all_hex(char*);

using std::cout, std::strlen, std::endl;

int main(int argc, char* argv[]) {
  if (argc > 2){
    std::cerr << "ERR_MISSING: One or more RGB values should be provided as arguments, separated by spaces" << std::endl;
    return 1;
  }
  int valid_colors = 0;

  for(int i=1; i < argc; i++) {
    int length = strlen(argv[i]);
    if( (length == 3 || length == 6) && all_hex(argv[i]) ) {
      std::cout << "#" << argv[i] << std::endl;
    }
    if (length != 3 || length != 6){
      std::cerr << argv[i] << " ERR_LENGTH: RGB values must be either 3 or 6 characters long" << std::endl;
    }
      std::cout << "#" << argv[i] << std::endl;
    }  
  }
  return 0;
}

bool all_hex(char* word) {
  for(int i=0; i<strlen(word); i++) {
    if((word[i] >= '0' && word[i] <= '9') || (word[i] >= 'a' && word[i] <= 'f')
      || (word[i] >= 'A' && word[i] <='F')) {
      continue;
    }
    else {
      std::cerr << word << " ERR_VALUE: RGB values must be in 0-F range" << std::endl;
      return false;
    }
  }

  //no non-hex characters found
  return true;
}