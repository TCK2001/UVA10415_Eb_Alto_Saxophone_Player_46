/*
Sample Input
3
cdefgab
BAGFEDC
CbCaDCbCbCCbCbabCCbCbabae
Sample Output
0 1 1 1 0 0 1 1 1 1
1 1 1 1 0 0 1 1 1 0
1 8 10 2 0 0 2 2 1 0
*/

//이 문제는 인터넷 참고함; 
#include <iostream>
#include <map>
#include <vector>
using namespace std;
 
int main() 
{
    map <char,vector<int>> save; //map으로 빠르게 풀기; 
    save['c']={0,0,1,1,1,0,0,1,1,1,1};
    save['d']={0,0,1,1,1,0,0,1,1,1,0};
    save['e']={0,0,1,1,1,0,0,1,1,0,0};
    save['f']={0,0,1,1,1,0,0,1,0,0,0};
    save['g']={0,0,1,1,1,0,0,0,0,0,0};
    save['a']={0,0,1,1,0,0,0,0,0,0,0};
    save['b']={0,0,1,0,0,0,0,0,0,0,0};
    save['C']={0,0,0,1,0,0,0,0,0,0,0};
    save['D']={0,1,1,1,1,0,0,1,1,1,0};
    save['E']={0,1,1,1,1,0,0,1,1,0,0};
    save['F']={0,1,1,1,1,0,0,1,0,0,0};
    save['G']={0,1,1,1,1,0,0,0,0,0,0};
    save['A']={0,1,1,1,0,0,0,0,0,0,0};
    save['B']={0,1,1,0,0,0,0,0,0,0,0};
    
	int n;
	string in;
	cin>>n;
	getline(cin,in); //우선 선언 해야됨; 
	while(n--)
	{
		getline(cin,in);
		int count[11]={0};
		int check[11]={0};
		for(int i=0;i<in.size();i++) //사이즈 만큼 체크; 
		{
			for(int j=1;j<=10;j++) //1 혹은 0 체크; 
			{
				if(save[in[i]][j]) //만약에 내가 누른버튼이 저것중에 하나고; 
				{
					if(check[j]) //만약에 안에 수가 1이면; 
					{
						continue; //이어서 다음 코드; 
					}
					else
					{
						check[j]=1; //아니면 누른다고 1로 바꾸고; 
						count[j]++; //횟수 더하기; 
					}
				}
				else
				{
					check[j]=0; //안 누르고 있으면  0; 
				}
			}
		}
		for(int i=1;i<=10;i++)
		{
			cout<<count[i]<<" "; //출력; 
		}
		if(n!=0)
		{
			cout<<endl; //마지막 줄 빼고 줄 띄움 함; 
		}
	} 
   
return 0;
}
