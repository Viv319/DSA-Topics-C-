 #include<iostream>
 using namespace std; 
 void heapsort(int[],int);
 void buildheap(int[],int);
 void satisfyheap(int[],int,int);
 int main()
 {
 	int a[10],i,size;
 	cout<<"enter size of list";
 	cin>>size;
 	cout<<"enter"<<size<<"elements";
 	for (i=0;i<size;i++)
 	{
 		cin>>a[i];
	 }
	 heapsort(a,size);
 }
 void heapsort(int a[],int length)
 {
 	buildheap(a,length);
 	int heapsize,i,temp;
 	heapsize=length-1;
 	for (i=heapsize;i>=0;i--)
 	{
 		temp=a[0];
 		a[0]=a[heapsize];
 		a[heapsize]=temp;
 		heapsize--;
 		satisfyheap(a,0,heapsize);
	 }
	 for(i=0;i<length;i++)
	 {
	 	cout<<"\t"<<a[i];
	 }
 }
 void buildheap(int a[],int length)
 {
 	int i,heapsize;
 	heapsize=length-1;
 	for(i=(length/2);i>=0;i++)
 	{
 		satisfyheap(a,i,heapsize);
	 }
 }
 void satisfyheap(int a[],int i,int heapsize)
 {
 	int l,r,largest,temp;
 	l=2i,r=2i+1;
 	if(l<=heapsize&&a[l]>a[i])
 	{
 		largest=l;
	 }
	 else
	 {
	 	largest=i;
	 }
	 if(r<=heapsize&&a[r]>a[largest])
	 {
	 	largest=n;
	 }
	 if(largest!=i)
	 {
	 	temp=a[i];
	 	a[i]=a[largest];
	 	a[largest]=temp;
	 	satisfyheap(a,largest,heapsize);
	 }
 }
