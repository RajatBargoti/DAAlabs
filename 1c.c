#include <stdio.h>
#include <stdlib.h>
//rajat bargoti  20BCE2880  rajat.bargoti2020@vi//
void input1(int a[], int n)
{
printf("Enter %d elements for array - \n", n);
for(int i=0;i<n;i++)
{
scanf("%d", &a[i]);
}
}
int partition(int a[], int beg, int end)
{
int left, right, temp, loc, flag;
loc = left = beg;
right = end;
flag = 0;
while(flag != 1)
{
    while((a[loc] <= a[right]) && (loc!=right))
right--;
if(loc==right)
flag =1;
else if(a[loc]>a[right])
{
temp = a[loc];
a[loc] = a[right];
a[right] = temp;
loc = right;
}
if(flag!=1)
{
while((a[loc] >= a[left]) && (loc!=left))
left++;
if(loc==left)
flag =1;
else if(a[loc] <a[left])
{
temp = a[loc];
a[loc] = a[left];
a[left] = temp;
loc = left;
}
}
}
return loc;
}
void quickSort(int a[], int beg, int end)
{
int loc;
if(beg<end)
{
loc = partition(a, beg, end);
quickSort(a, beg, loc-1);
quickSort(a, loc+1, end);
}
}
void display(int a[], int n)
{
printf("Displaying - \n");\
for(int i=0;i<n;i++)
{
printf("%d ", a[i]);
}
}
int main()
{
printf("Enter no. of elements in array - \n");
int n;
scanf("%d", &n);
int a[n];
input1(a,n);
quickSort(a, 0, n-1);
display(a,n);
return 0;
}