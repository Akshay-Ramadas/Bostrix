
#include<iostream>
using namespace std;
int main()
{
  int num,i;
  int fact = 1;
  cout<<"Enter the number :";
  cin>>num;
  if(num<0){
    cout<<"Not possible on -ve ";
  }
  else{
  for(i=1;i<=num;i++){
    fact = fact *i;
  }
  cout<<"factorial of: "<<num <<" = "<<fact;
  }
    
return 0;
}
