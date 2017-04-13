/* Author: Ashish Patel
 * National Institute of Technoology, Agartala
 * Date: 09/04/2017
 * Program prints the sum of all even values in fibonacci series not exceeding 4 million.
 */



#include <iostream>
using namespace std;

int fiboc() {
    int total = 0;
    int prev = 0;
    int curr = 1;
    for (int i = 0; curr <= 4000000; i++) {
        int temp = prev;
        if (curr % 2 == 0)
            total += curr;
        prev = curr;
        curr += temp;
    }
    return total;
}

int main() {
	// your code goes here
	cout << fiboc();
	return 0;
}
