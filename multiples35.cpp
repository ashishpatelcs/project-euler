/* Author: Ashish Patel
 * National Institute of Technology, Agartala
 * Date: 09/04/2017
 */

#include <iostream>
using namespace std;

int sumofmultiples(int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            total += i;
    }
    return total;
}

int main() {
	// your code goes here
	cout << sumofmultiples(1000);
	return 0;
}
