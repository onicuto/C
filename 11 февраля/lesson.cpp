#include <iostream>
namespace Audience {
char name_group[4][10];
char group_list[8][50]{"name1", "name2", "name3", "name4",
                       "name5", "name6", "name7", "name8"};
} // namespace Audience

int Present(char spisok[8][50]) {
  int count = 0, answer;
  for (int i = 0; i < 8; i++) {
    std::cout << spisok[i] << " - ";
    std::cin >> answer;
    if (answer)
      count++;
    return count;
  }
}

int main() {
  std::cout << "What groups are present in room 4201" << std::endl;
  for (int i = 0; i < 4; i++) {
    std::cin >> Audience::name_group[i];
  }
}
