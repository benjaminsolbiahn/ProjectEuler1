#include <iostream>

int main(){

int three_total = 0, five_total = 0, total = 0;
int three_counter = 0, five_counter = 0, counter = 0;

/*  while(three_counter < 1000){
    three_counter = three_counter + 3;
    three_total = three_total + three_counter;
  }

  while(five_counter < 1000){
    if((five_counter + 5) % 3 == 0) {
      five_counter = five_counter + 5;
    }
    else{
      five_counter = five_counter + 5;
      five_total = five_total + five_counter;
    }
  }

  total = five_total + three_total;
*/

for (counter = 0; counter < 1000; counter++) {
  if (counter % 3 == 0 || counter % 5 == 0) {
    total = total + counter;
  }
}

  std::cout << "The answer to number 1 of Project Euler is: " << total;

  return 0;
}
