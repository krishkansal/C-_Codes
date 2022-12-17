#include<iostream>
#include<vector>
using namespace std;

int countDecoding(string s, int n){
	vector<int> dp(n+1,0);
	dp[0]=1;dp[1]=1;
	for(int i=2;i<=n;i++){
		int one =(s[i-1]-'0');
		int two =((s[i-2]-'0')*10+(s[i-1]-'0'));
		if(one>=1){ dp[i]+=dp[i-1];}
		if(two>=10 && two<=26){ dp[i]+=dp[i-2]; }
		}
		return dp[n];
		}		
	//	vector<int> dp(n+1,0);
//	dp[0]=1;
//	dp[1]=1;
//	for(int i=2;i<=n;i++){
//		int one =(s[i-1]-'0');
//		int two = ((s[i-2]-'0')*10+(s[i-1]-'0'));
//		
//		if(one>=1){
//			dp[i]+=dp[i-1];
//		}
//		
//		if(two>=10&& two <=26){
//			dp[i]+=dp[i-2];
//			
//		}
int main(){
	cout<<"Enter the message :";
	string s;
	cin>>s;
	int n=s.size();
	int ans=countDecoding(s,n);
	cout<<"Number of ways to decode message : " << ans << '\n';
	return 0;
}
