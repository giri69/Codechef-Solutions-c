#include <stdio.h>
int arr[10];
int i,j,n,k,l,l1,flage,w=0,t,m,count=0;
int main() {
scanf("%d",&t);
for(i=0;i<t;i++){
    scanf("%d %d %d",&n,&k,&l);
    for(j=0;j<n;j++){
        scanf("%d %d",&m,&l1);
        if(l1==l){
            arr[w]=m;
            w++;
            flage=1;
        }
        else 
        count++;
}
w=0;

if((k==1)&&(count!=n)){
    if(arr[0]>arr[1]){
    printf("%d\n",arr[0]);
    }
    else if (arr[1]>arr[0]){
        printf("%d\n",arr[1]);
    }
    else 
    printf("%d",arr[0]);
    
}
else if(k==2&&(count!=n)){
    printf("%d\n",arr[0]+arr[1]);
}
else if(count==n){
    printf("-1\n");
}
count=0;
}
	return 0;
}