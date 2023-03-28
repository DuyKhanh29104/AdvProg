#include<iostream>

using namespace std;

int strlen(const char a[])
{
    int n=0;
    while(true)
    {
        if(a[n]=='\0') return n;
        else n++;
    }

}
void strcpy(char A[], const char B[])
{
	int n = 0;
	do
	{
		A[n] = B[n];
		n++;
	}
	while (B[n] != '\0');
}


char* reverse(const char a[])
{
    int n=strlen(a);
    char* c= new char[n];
    for(int i=0;i<n;i++)
    {
        c[i]=a[n-i-1];
    }
    c[n]='\0';
    return c;
}

char* delete_char(const char a[], char c)
{
    int n=strlen(a);
    char* b=new char[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==c) continue;
        b[k++]=a[i];
    }
    b[k]='\0';
    return b;
}

char* pad_right(const char a[], int n)
{
    int m= strlen(a);
    char* c= new char[n];
    strcpy(c,a);
    for(int i=m;i<n;i++) c[i]=' ';
    c[n]='\0';
    return c;
}

char* pad_left(const char a[], int n)
{
    int m= strlen(a);
    int k=n-m;
    char* c=new char[n];
    strcpy(c,a);
    for(int i=n-1;i>=k;i--)
    {
        c[i]=c[i-k];
    }
    c[n]='\0';
    for(int i=0;i<k;i++)
    {
        c[i]=' ';
    }
    return c;
}

char* truncate(const char a[], int n)
{
    int m=strlen(a);
    char* c= new char[m];
    strcpy(c,a);
    c[n]='\0';
    return c;
}



char* trim_left(const char a[])
{
    int m= strlen(a);
    char* c= new char[m];
    strcpy(c,a);
    while(c[0]==' ')
    {
        for(int i=0;i<m;i++)
            c[i]=c[i+1];
        m--;
    }
    c[m]='\0';
    return c;
}

 char* trim_right(const char a[])
 {
     int m= strlen(a);
     char *c=new char[m];
     strcpy(c,a);
     while(c[m-1]==' ') m--;
     c[m]='\0';
     return c;
 }

int main()
{
    char a[]= "abcdefghik";
    char* c=reverse(a);
    cout << c << endl;
    c= delete_char(a,'c');
    cout << c << endl;
    c= pad_right(a,20);
    cout << c << "-" << endl;
    c= pad_left(a,20);
    cout << c << "-" << endl;
    c= truncate(a,5);
    cout << c << "-" << endl;
    char b[]= "     12345     ";
    c=trim_left(b);
    cout << c << "-" << endl;
    c=trim_right(b);
    cout << c << "-" << endl;
}

