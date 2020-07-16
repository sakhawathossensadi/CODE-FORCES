#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len1,len2,total=0,res,min;
    int arr1[30]= {0},arr2[30]= {0};
    char s1[1100],s2[1100],c;
    gets(s1);
    gets(s2);
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0; i<len1; i++)
    {
        c=s1[i];
        if(c=='a')
        {
            arr1[0]=arr1[0]+1;
        }
        else if(c=='b')
        {
            arr1[1]=arr1[1]+1;
        }
        else if(c=='c')
        {
            arr1[2]=arr1[2]+1;
        }
        else if(c=='d')
        {
            arr1[3]=arr1[3]+1;
        }
        else if(c=='e')
        {
            arr1[4]=arr1[4]+1;
        }
        else if(c=='f')
        {
            arr1[5]=arr1[5]+1;
        }
        else if(c=='g')
        {
            arr1[6]=arr1[6]+1;
        }
        else if(c=='h')
        {
            arr1[7]=arr1[7]+1;
        }
        else if(c=='i')
        {
            arr1[8]=arr1[8]+1;
        }
        else if(c=='j')
        {
            arr1[9]=arr1[9]+1;
        }
        else if(c=='k')
        {
            arr1[10]=arr1[10]+1;
        }
        else if(c=='l')
        {
            arr1[11]=arr1[11]+1;
        }
        else if(c=='m')
        {
            arr1[12]=arr1[12]+1;
        }
        else if(c=='n')
        {
            arr1[13]=arr1[13]+1;
        }
        else if(c=='o')
        {
            arr1[14]=arr1[14]+1;
        }
        else if(c=='p')
        {
            arr1[15]=arr1[15]+1;
        }
        else if(c=='q')
        {
            arr1[16]=arr1[16]+1;
        }
        else if(c=='r')
        {
            arr1[17]=arr1[17]+1;
        }
        else if(c=='s')
        {
            arr1[18]=arr1[18]+1;
        }
        else if(c=='t')
        {
            arr1[19]=arr1[19]+1;
        }
        else if(c=='u')
        {
            arr1[20]=arr1[20]+1;
        }
        else if(c=='v')
        {
            arr1[21]=arr1[21]+1;
        }
        else if(c=='w')
        {
            arr1[22]=arr1[22]+1;
        }
        else if(c=='x')
        {
            arr1[23]=arr1[23]+1;
        }
        else if(c=='y')
        {
            arr1[24]=arr1[24]+1;
        }
        else if(c=='z')
        {
            arr1[25]=arr1[25]+1;
        }
    }
    for(i=0; i<len2; i++)
    {
        c=s2[i];
        if(c=='a')
        {
            arr2[0]=arr2[0]+1;
        }
        else if(c=='b')
        {
            arr2[1]=arr2[1]+1;
        }
        else if(c=='c')
        {
            arr2[2]=arr2[2]+1;
        }
        else if(c=='d')
        {
            arr2[3]=arr2[3]+1;
        }
        else if(c=='e')
        {
            arr2[4]=arr2[4]+1;
        }
        else if(c=='f')
        {
            arr2[5]=arr2[5]+1;
        }
        else if(c=='g')
        {
            arr2[6]=arr2[6]+1;
        }
        else if(c=='h')
        {
            arr2[7]=arr2[7]+1;
        }
        else if(c=='i')
        {
            arr2[8]=arr2[8]+1;
        }
        else if(c=='j')
        {
            arr2[9]=arr2[9]+1;
        }
        else if(c=='k')
        {
            arr2[10]=arr2[10]+1;
        }
        else if(c=='l')
        {
            arr2[11]=arr2[11]+1;
        }
        else if(c=='m')
        {
            arr2[12]=arr2[12]+1;
        }
        else if(c=='n')
        {
            arr2[13]=arr2[13]+1;
        }
        else if(c=='o')
        {
            arr2[14]=arr2[14]+1;
        }
        else if(c=='p')
        {
            arr2[15]=arr2[15]+1;
        }
        else if(c=='q')
        {
            arr2[16]=arr2[16]+1;
        }
        else if(c=='r')
        {
            arr2[17]=arr2[17]+1;
        }
        else if(c=='s')
        {
            arr2[18]=arr2[18]+1;
        }
        else if(c=='t')
        {
            arr2[19]=arr2[19]+1;
        }
        else if(c=='u')
        {
            arr2[20]=arr2[20]+1;
        }
        else if(c=='v')
        {
            arr2[21]=arr2[21]+1;
        }
        else if(c=='w')
        {
            arr2[22]=arr2[22]+1;
        }
        else if(c=='x')
        {
            arr2[23]=arr2[23]+1;
        }
        else if(c=='y')
        {
            arr2[24]=arr2[24]+1;
        }
        else if(c=='z')
        {
            arr2[25]=arr2[25]+1;
        }
    }
    for(i=0; i<26; i++)
    {
        if(arr2[i])
        {
            if(arr1[i])
            {
                if(arr1[i]<arr2[i])
                {
                    min=arr1[i];
                }
                else
                {
                    min=arr2[i];
                }
                total=total+min;
            }
            else
            {
                total=0;
                break;
            }
        }
    }
    if(total==0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n",total);
    }
    return 0;
}
