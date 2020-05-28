vector<int> reverseArray(vector<int> a) {
for(int i=0, j=a.size()-1; i<a.size()/2 ; i++,j--)
{
    a[i]=a[i]+a[j];
    a[j]=a[i]-a[j];
    a[i]=a[i]-a[j];
}
return a;
}
