#include<bits/stdc++.h>
using namespace std;
#define tusar() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    tusar();

    int tc;
    cin>>tc;

    while(tc--)
        {
            int n;
            cin>>n;
            string s,s1;
            cin>>s>>s1;
            int c1=0;
            int c2=0;


            sort(s.rbegin(),s.rend());
            sort(s1.rbegin(),s1.rend());
            //cout<<s<<endl;
            cout<<s1<<endl;



            for(int i= 0;i<n;i++){
                if(s[i] == 'R'){
                    c1++;
                }
            }
             for(int i= 0;i<n;i++){
                if(s1[i] == 'R'){
                    c2++;
                }
            }
            if(c1 == c2) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";

        }
    return 0;
}

