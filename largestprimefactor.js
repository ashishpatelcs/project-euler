/* Author: Ashish Patel
 * Program find the largest prime factor of given number
 */
 
function primeFactor(n) {
    var flag = 0;
    for(var i = 2; i < n; i++) {
        for (var j = 2; j < i; j++) {
            if (i % j !== 0) flag = 0;
            else { flag = 1; break; }
        }
       if (!flag) {
            if (n % i === 0) {
                alert(i);
                n = n / i;
                alert(n);
                if (n === 1) return i;
            }
        }
    }
}

var x = primeFactor(600851475143);
