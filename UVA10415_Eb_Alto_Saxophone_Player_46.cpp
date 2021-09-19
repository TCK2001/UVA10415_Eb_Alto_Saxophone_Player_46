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

//�� ������ ���ͳ� ������; 
#include <iostream>
#include <map>
#include <vector>
using namespace std;
 
int main() 
{
    map <char,vector<int>> save; //map���� ������ Ǯ��; 
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
	getline(cin,in); //�켱 ���� �ؾߵ�; 
	while(n--)
	{
		getline(cin,in);
		int count[11]={0};
		int check[11]={0};
		for(int i=0;i<in.size();i++) //������ ��ŭ üũ; 
		{
			for(int j=1;j<=10;j++) //1 Ȥ�� 0 üũ; 
			{
				if(save[in[i]][j]) //���࿡ ���� ������ư�� �����߿� �ϳ���; 
				{
					if(check[j]) //���࿡ �ȿ� ���� 1�̸�; 
					{
						continue; //�̾ ���� �ڵ�; 
					}
					else
					{
						check[j]=1; //�ƴϸ� �����ٰ� 1�� �ٲٰ�; 
						count[j]++; //Ƚ�� ���ϱ�; 
					}
				}
				else
				{
					check[j]=0; //�� ������ ������  0; 
				}
			}
		}
		for(int i=1;i<=10;i++)
		{
			cout<<count[i]<<" "; //���; 
		}
		if(n!=0)
		{
			cout<<endl; //������ �� ���� �� ��� ��; 
		}
	} 
   
return 0;
}

