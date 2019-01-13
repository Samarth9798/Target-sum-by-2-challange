# Target-sum-by-2-challange

Step 1: Explain the problem statement. 

Step 2: Explain my approach to solve the problem.

Step 3: Explain my code step by step.

-----------------------------------------------------------------------------------------------------------------------------------

STEP 1:- PROBLEM STATEMENT

In the problem we need to find the "pairs" of values in a array whose "sum" is equal to the "given"

number. 

For example :- arr[1, 2, 3, 4, 5, 6]

 desired sum = 5

so, pairs are:

		1 + 4 = 5
		    &
		2 + 3 = 5


Note: Every value in the array is distinct
      and can be negative as well...

-----------------------------------------------------------------------------------------------------------------------------------
STEP 2:- APPROACH


Step i: 'sort' the given array in 'ascending order'.

Step ii: itterate 'i' from 1 to n (first loop)

Step iii: in every itteration we check weather the value of 'a[i]' is less than the 
	  desired sum value or not.

Step iv: a) if the value of that a[i] is smaller than the desired sum then we go to "Step v".

	 b) if the value of a[i] is greater or equal to the desired sum than 
	    'break' the 'first loop' and goto "Step vi".

Step v: itterate 'j' from i+1 to n and check weather the sum of "a[i] + a[j]" (pair) is equal to
        the desired sum or not. (second loop)
	
a) If the sum of pair is equal to the desired sum then we simply push the
   pair in our 'vector'. 

b) If the sum of 'a[i] + a[j]' is greater then the "desired sum" than we 'break' the 'second loop'.


Step vi: itterate 'i' form 0 to vector.size() and print the desired pairs.

--------------------------------------------------------------------------------------------------------------------------------

STEP 3:- (see the code file)

---------------------------------------------------------------------------------------------------------------------------------

Thank u !! and hpy coding!!!
