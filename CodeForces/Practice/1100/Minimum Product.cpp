    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int n;
    	cin>>n;
    	for(int i=1;i<=n;i++)
    	{
    		long long a,b,x,y,z;
    		cin>>a>>b>>x>>y>>z;
    		long long max1,max2;
    		max1=max(a-z,x)*max(y,(b-z+a-max(a-z,x)));
    		max2=max(b-z,y)*max(x,(a-z+b-max(b-z,y)));
    		cout<<min(max1,max2)<<endl;
    	}
    	
    }