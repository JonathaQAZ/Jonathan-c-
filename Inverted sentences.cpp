#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
string str;
getline(cin,str);
int n = str.length();
int i=n-1,j=n-1;
while(i>=0){
if(str[i]==' '){
cout<<' ';
i--;
}else{
j=i;
while(j>=0&&str[j]!=' '){
j--;
}
for(int k=j+1;k<=i;k++){
cout<<str[k];
}
i=j;
}
}
 return 0;
} 
