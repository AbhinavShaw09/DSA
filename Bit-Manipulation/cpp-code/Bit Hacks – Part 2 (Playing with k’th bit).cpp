//Problem 1. Turn off k’th bit in a number

// #include<iostream>
// using namespace std;

// int main()
// {
//   int n,k;
//   cin>>n>>k;
//   cout<<(n&~(1<<(k-1)))<<endl;
//   return 0;
// }
//Problem 2. Turn on k’th bit in a number
// #include<iostream>
// using namespace std;

// int main()
// {
//   int n,k;
//   cin>>n>>k;
//   cout<<(n|(1<<(k-1)))<<endl;
//   return 0;
// }

// Check if k’th bit is set for a number
// #include<iostream>
// using namespace std;

// int main()
// {
//   int n,k;
//   cin>>n>>k;
//   k--;
//   if((n>>k)&1)
//   {
//     cout<<"YES"<<endl;
//   }
//   else{
//     cout<<"No"<<endl;
//   }
//   return 0;
// }

//Problem 4. Toggle the k’th bit
#include<iostream>
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  k--;
  if((n>>k)&1)
  {
    cout<<(n&(~(1<<k)));
  }
  else
  {
    cout<<(n|(1<<k));
  }
  return 0;
}

