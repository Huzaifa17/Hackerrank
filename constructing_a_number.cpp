string canConstruct(vector<int> a) {
    // Return "Yes" or "No" denoting whether you can construct the required number.
    int sum=0;
    for(int i=0;i<a.size();++i)
    {
        while(a[i])
        {
            sum+=(a[i]%10);
            a[i]/=10;
        }
    }
    if(sum%3==0)
    {
        return "Yes";
    }
    return "No";
}
