/* Author: <Hung-Jen Wang>
  Course: <Programming in C>
  Instructor: <Gilbert Pajela>
  Assignment: <Lab 2 - Question 1">

  Recall that n! (read n factorial) is defined to 
  be (1)(2)(3)(4)...(n-1)(n). Many useful computer 
  science problems require the computation of C(n,k) (read n choose k) 
  which is defined as: n! / (k! * (n-k)!), for n >= 0 and 0 <= k <= n. 
  Implement a program that inputs n and k and then computes C(n,k) directly 
  by first computing the three factorials: n!, k!, and (n-k)!. Hint: You can 
  do this by writing one loop each, mostly copy/paste of the first loop. You 
  should represent variables as ints.
*/

#include <stdio.h>

int main(){
	int n, k, i;
	int nf = 1, kf = 1, nfk = 1; //nf -> n! kf -> k! nfk -> (n-k)!
	int c;
	printf("Please enter C(n, k) \n");
	printf("n: ");
	scanf("%d", &n);
	printf("k: ");
	scanf("%d", &k);
	for(i = 1; i<= n; i++){
		nf *= i;
	}
	for(i = 1; i<= k; i++){
		kf *= i;
	}
	for(i = 1; i<= (n-k); i++){
		nfk *= i;
	}
	c = nf / (kf * nfk);

	printf("C(n, k) = %d\n", c);
	return 0;
}