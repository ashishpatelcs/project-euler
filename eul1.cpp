/* Author: Ashish Patel
 * Date: 13/04/2017
 * Euler Project Problem : finding smallest positive integer evenly divisible by all numbers from 1 to 20.
*/
 
#include <iostream>
using namespace std;


int main(void) {
	int flag = 0, temp = 0, count = 1;
	
	while(!flag) {
		
		for (int i = 2520; i <= 20; i+=2520) {
			if (count % i == 0) {
				temp += 1;
				if (temp == 20) {
					flag = 1;
					break;
				}
			}
		}
		
		count++;
		cout << count << endl;
		temp = 0;
	}
	
	cout << "\n\t\t-------------------\n\t\t|| OUTPUT: " << count-1 << "  ||\n\t\t-------------------" << endl << endl;
	
	return 0;
}

/*
int main(void) {
	int num = 20;
	long lcm = 1L;
	for (int i = 2; i <= num; i++) {
		int hcf = 1;
		for (int j = 2; j <= i; j++) {
			if (i % j == 0 && lcm % j == 0)
				hcf = j;
		}
		lcm = (lcm * i) / hcf;
	}
	cout << "\n\t\t-------------------\n\t\t|| OUTPUT: " << lcm << "  ||\n\t\t-------------------" << endl << endl;
}*/
