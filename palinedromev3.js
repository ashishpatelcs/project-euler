/* Author: Ashish Patel
 * National Institute of Technology, Agartala
 * 11/04/2017
 * Find the largest palindrome number generated by multiplying two 3-digit number
 */
 
function reverse_a_number(n)  
{  
  n = n + "";  
  return n.split("").reverse().join("");  
} 

function palindrome() {
  var palin = 0;
  for (var i = 100; i < 1000; i++) {
      for (var j = 999; j > 99; j--) {
          var prod = i * j;
          var rev = reverse_a_number(prod);
          if (prod == rev) {
              if (prod > palin) palin = prod;
          };
      }
  }
  return palin;
}