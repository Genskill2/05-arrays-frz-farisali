/* Enter your solutions in this file */
#include <stdio.h>

int max(int str[],int num)
{
  int mx=0;
  for (int i=0;i<num;i++)
  {
    if (str[i]>mx)
      mx=str[i];
  }
  return mx;
}

int min(int str[],int num)
{
  int mn=str[0];
  for (int i=0;i<num;i++)
  {
    if (min>str[i])
      mn=str[i];
  }
  return mn;
}

float average(int str[],int num)
{
  float sum=0,avg=0;
  for (int i=o;i<num;i++)
  {
    sum+=str[i];
  }
  avg=sum/(float)num;
  return avg;
}

int mode(int str[], int num)
{
  int mxV=0, mxC=0, i,j;
  
  for (i=0; i<n; ++i)
  {
    int ct=0;
    
    for (j=0;j<n;++j)
    {
      if (str[j]==str[i])
        ++ct;
    }
    if ( ct> mxC)
    {
      mxC=ct;
      mxV=str[i];
    }
  }
  return mxV;
}

int factors( int ftr, int rt[])
{
  int hfr=ftr/2,j=0;
  for (int i=2; i<hfr+1;)
  {
    if(ftr%i==0)
    {
      rt[j]=i;
      j++;
      ftr=ftr/i;
    }
    else
    {
      i++;
    }
  }
  return j;
}
