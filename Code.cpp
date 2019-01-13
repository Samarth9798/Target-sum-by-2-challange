#include<bits/stdc++.h> //header file to include all containers

using namespace std;

int main()
{
    int n; //to store no of elements in the array

    int a[10000]; //input array

    int i,j; //used to itterate in the array

    int x; //to store the value of the sum

    cin >> n; //input the size of an array

    for(i = 0; i < n; i++)
    {
        cin >> a[i]; //input array elements
    }

    cin >> x; //input the desired sum from the user

    //start 
    
    sort(a,a+n); //sort the array elements in ascending order to optimize the approach

    vector< pair<int, int> > v; //to store the pairs

    pair<int, int> p; //to construct a pair

    for(i = 0; i < n; i++) //itterate 'i' from 0 to n-1 in a array
    {
        if(a[i] < x) //if the value of a[i] is less than the desired sum value (x)
        {
            j = i + 1; //initialize the j as i + 1 to compute different different values as pairs

            while(a[i] + a[j] <= x and j<n) //while the value to a[i]+a[j] is less than or equal to the desired sum
            {
                if(a[i] + a[j] == x) //if the sum of pairs is equal to the desired sum
                {
                    p = make_pair(a[i],a[j]); //contruct the pair

                    v.push_back(p); //push the pair in a vector
                }
                j++; //incement the 'j' by 1
            }
        }
        else //if the value of x is greater than the desired sum (x)
        {
            break; //break the first loop
        }
    }
    for(i = 0; i < v.size(); i++) //itterate in the pair vector where we store the desired pairs
    {
        cout << v[i].first << ' ' << v[i].second << endl; //print those pairs in the output
    }

    //end
}
