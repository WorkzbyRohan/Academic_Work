
#include<iostream>
using namespace std;
void merge(char p1[],char p2[],char p3[],int s1,int s2,int s3)
{
    int k=0;
for(int i=0;i<s1;++i)
{
    p3[i]=p1[i];
    cout<<p3[i];
    k=i;
}
for(int j=0;j<s2;j++)
{
    p3[k]=p2[j];
    cout<<p3[k];
    k++;
}

}
int main()
{
char p1[] = "This is first paragraph with no space at start and no space at end";
int p1_size = sizeof(p1);
char p2[] = " This is first paragraph with one space at start and no space at end";
int p2_size = sizeof(p2);
int p3_size = sizeof(p1) + sizeof(p2);
char p3[p3_size -1 ];
merge(p1,p2,p3,p1_size,p2_size,p3_size);

}
