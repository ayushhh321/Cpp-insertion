// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int N;
//   cout<<"no. of element in array"<<endl;
//   cin>>N;

//   vector<int> arr(N);
//   unordered_map<int,int> freq;
// cout<<"enter array element"<<endl;
//   for(int i=0;i<N;i++){
//     cin>>arr[i];
//     freq[arr[i]]++;
//   }

//   for(int i=0;i<N;i++){
//     if(freq[arr[i]]==1){
//       cout<<arr[i];
//       return 0;
//     }
//  };

//  cout<<"none"<<endl;







//   return 0;
// }

// //non repeating element
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string text;
//     cin>>text;

//     unordered_map<char,int> freq;
//     for(int i=0;i<text.size();i++){
//    freq[text[i]]++;
//     };

//  for (int i=0;i<text.size();i++) {
//         if (freq[text[i]] == 1) {
//             cout<<text[i];
//             return 0;
//         }
//     }
// cout<<"no smae"<<endl;
// return 0;
// }


//two sum using nested loops
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int target;
//   cin>>target;

//   int size;
//   cin>>size;
//   int nums[size];
//   for(int i=0;i<size;i++)
// {
//  cin>>nums[i];
// }

// for(int i=0; i<size;i++){
//   for(int j=i+1; j<size; j++){
//     if(target==nums[i]+nums[j]){
//       cout << "[" << i << ", " << j << "]" << endl;
//     };
//   };
// };

// return 0;

// }

//armstrong question

// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     // Write C++ code here
//     int N;
//     cin>>N;
//     int dup=N;
//     int count=0;
    
//     int temp=N;
//     while(temp>0){
//         count = count+1;
//         temp=temp/10;
//     }
//     temp=N;
//     int sum=0;
//     while(temp>0){
//          int ld=temp%10;
//         //count = count+1;
//         sum=sum + pow(ld,count);
//          temp=temp/10;
//     }
// if(sum==dup){
//     cout<<"True"<<endl;
// }
// else
// {
//     cout<<"False"<<endl;
   
// }

//  return 0;
// }

//Smallest and largest elements in the array 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//   vector<int> ayush;
//   int size;
//   cin>>size;
//   for(int i=0; i<size;i++){
//     int value;
//     cin>>value
//     ayush.push_back(value);
//   };
//   sort(ayush.begin(),ayush.end());
//   cout<<ayush[0]<<endl;
//   cout<<ayush[ayush.size()-1]<<endl;

//   return 0;
// }

//Count frequency of each element in the array

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//    vector<int> arry;
//    int arrysize;
//    cin>>arrysize;
//  for(int i=0;i<arrysize;i++)
//  {
//   int value;
//   cin>>value;
//   arry.push_back(value);
//  };
//    unordered_map<int,int> mp;

//    for(int i=0;i<arrysize;i++){
//     mp[arry[i]]++; //ye line basically element and uski frequency dono store kara rha tha like this mp = {
//     // {10, 3},
//     // {5, 2},
//     // {15, 1}
// }

//   //  unordered_map<int,int>::iterator it;
//   //  for(unordered_map<int,int>::iterator it =mp.begin(); it !=mp.end();it++)//yaha mp.begin isiliye hua kyyuki we are tavesing in the map only

//   for(auto it:mp){
//     cout<<it.first<<""<<it.second;//
//   };
//   return 0;
// //if meko largest element ka frequency find krna hota toh like 
// int largestelement = INT_MIN;
// for(auto it:mp){
//   if(it.first>largestelement){
//     largestelement=it.first;
//   };
// };
// cout<<largestelement;

// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    vector<char> alpha;
    int sum = 0;
    
    // Traverse the input string
    for(char ch: s){
        if(isdigit(ch)){  // Check if the character is a digit
            sum += ch - '0';  // Convert the character to its integer value and add to sum
        } else if(isalpha(ch)){  // Check if the character is an alphabet
            alpha.push_back(ch);  // Add the alphabet to the vector
        }
    }
    
    // Sort the alphabetic characters
    sort(alpha.begin(), alpha.end());
    
    // Print the sorted alphabetic characters
    for(char ch: alpha){
        cout << ch;
    }
    
    // Print the sum of the digits
    cout << sum << endl;
    
    return 0;
}

//reverse an array
#include <bits/stdc++.h>
using namespace std;

int main() {
    // int size;
    // cin>>size;
    // vector<int> arr(size);
    // for(int i=0;i<size;i++){
    //     arr.push_back(i);
    // }
    
    // for(int i=arr.size()-1;i>=0;--i){
    //     cout<<arr[i];
    // }
    int size;
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=size-1;i>=0;--i){
        cout<<arr[i];
    }

    return 0;
}

//fibonachi series
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of terms to generate
    
    vector<int> result;
    
    // Handle edge cases for small values of n
    // if (n >= 1) result.push_back(0);  // First term
    // if (n >= 2) result.push_back(1);  // Second term
    
    int firstterm = 0;
    int secondterm = 1;
    int curr;
    result.push_back(firstterm);
    result.push_back(secondterm);
    // Loop starts from 2 as the first two terms are already pushed
    for (int i = 2; i < n; i++) {
        curr = firstterm + secondterm;
        firstterm = secondterm;
        secondterm = curr;
        result.push_back(curr);
    }

    // Output the result
    for (int i : result) {
        cout << i << " ";  // Add space between numbers
    }
    
    return 0;
}

//