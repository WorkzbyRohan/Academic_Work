#include<iostream>
using namespace std;
int countwords(char p[],int size)
{
    cout<<"in the function \n";
    int count=0;
for(int i=0;i<size;++i)
{
    cout<<p[i];
if(p[i]==' '|| p[i]=='\n')
count++;

}
count=count+1;
return count;


}

int main()
{
int x,count=0;
cout<<"enter the paragraph number=";
cin>>x;
char p1[] = "This is first paragraph with no space at start and no space at end";
char p2[] = " This is first paragraph with one space at start and no space at end";
char p3[] = " This is first paragraph with one space at start and one space at end ";
char p4[] = " this is a sparse paragraph ";
char p5[] = " it is multiline paragraph \n second line of paragraph ";
int words;
if(x==1)
{
    words=countwords(p1,sizeof(p1));
cout<<endl<<" total words are=    "<< words;
}
if(x==2)
{
    words=countwords(p2,sizeof(p2));
cout<<endl<<" total words are=    "<< words;
}
if(x==3)

{
    words=countwords(p3,sizeof(p3));
cout<<endl<<" total words are=    "<< words;
}
if(x==4)

{
    words=countwords(p4,sizeof(p4));
cout<<endl<<" total words are=    "<< words;
}






}