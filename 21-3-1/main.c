//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<time.h>
//int main()
//{
//    time_t tm=time(NULL);
//    char*t=ctime(&tm);
//    printf("%s",t);
//    char tmp[5][10];
//    sscanf(t,"%s %s %s %s %s",tmp[0],tmp[1],tmp[2],tmp[3],tmp[4]);
//    printf("%s %s %s %s %s",tmp[4],tmp[1],tmp[2],tmp[3],tmp[0]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,x,fen[101]={0},i,tmp;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&tmp);
//        fen[tmp]++;
//    }
//    scanf("%d",&x);
//    for(i=0;i<x;i++)
//    {
//        scanf("%d",&tmp);
//        i!=0?printf(" %d",fen[tmp]):printf("%d",fen[tmp]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[300]={0},arr2[300]={0},i,sum1=0,sum2=0,flag=0;
//    char tmp;
//    while((tmp=getchar())!='\n')
//        arr[tmp]++;
//    while((tmp=getchar())!='\n')
//        arr[tmp]--;
//    for(i=0;i<300;i++)
//    {
//        if(arr[i]<0)
//        {
//            flag=1;
//            sum2-=arr[i];
//        }
//        else
//            sum1+=arr[i];
//    }
//    if(flag)
//        printf("No %d",sum2);
//    else
//        printf("Yes %d",sum1);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    long long p=0,pa=0,pat=0;
//    char tmp;
//    while((tmp=getchar())!='\n')
//        if(tmp=='P')
//            p++;
//        else if(tmp=='A')
//            pa+=p;
//        else
//            pat+=pa;
//    printf("%lld",pat%1000000007);
//    return 0;
//}
