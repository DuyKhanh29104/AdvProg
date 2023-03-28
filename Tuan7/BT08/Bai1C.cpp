#include<iostream>

using namespace std;

int strlen(char a[])
{
    int n=0;
    while(true)
    {
        if(a[n]=='\0') return n;
        else n++;
    }

}

void reverse(char a[])
{
    int n=strlen(a);
    for(int i=0;i<n/2;i++)
    {
        char c=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=c;
    }
}

void delete_char(char a[], char c)
{
    int n=strlen(a);
    char b[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==c) continue;
        b[k++]=a[i];
    }
    for(int i=0;i<k;i++)
    {
        a[i]=b[i];
    }
    a[k]='\0';
}

void pad_right(char a[], int n)
{
    int m= strlen(a);
    if(m>=n) return;
    for(int i = m; i<n;i++) a[i]= ' ';
    a[n]='\0';
}

void pad_left(char a[], int n)
{
    int m= strlen(a);
    if(m>=n) return;
    int k=n-m;
    for(int i=n-1;i>=k;i--)
    {
        a[i]=a[i-k];
    }
    a[n]='\0';
    for(int i=0;i<k;i++)
    {
        a[i]=' ';
    }
}

void truncate(char a[], int n)
{
    int m=strlen(a);
    if(m<=n) return;
    a[n]='\0';
}

bool is_palindrome(char a[])
{
    int m= strlen(a);
    int k = 0;
    while(k<m/2)
    {
        if(a[k] != a[m-1-k]) return false;
        k++;
    }
    return true;
}

void trim_left(char a[])
{
    int m= strlen(a);
    while(a[0]==' ')
    {
        for(int i=0;i<m-1;i++)
            a[i]=a[i+1];
        m--;
    }
}

 void trim_right(char a[])
 {
     int m= strlen(a);
     while(a[m-1]==' ') m--;
     a[m]='\0';
 }

int main()
{
    char a[]= "abcdefghik";
    reverse(a);
    delete_char(a,'c');
    pad_right(a,15);
    pad_left(a,20);
    cout << "-"  << a << "-" << endl;
    char b[]="123456789";
    truncate(b,7);
    cout << b << endl;
    char c[]="012210";
    cout << is_palindrome(c) << endl;
    char d[]="    1234567    ";
    trim_left(d);
    cout << d << "-" << endl;
    trim_right(d);
    cout << d << "-";

}
