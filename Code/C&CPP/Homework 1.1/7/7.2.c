#include<stdio.h>
#include<stdlib.h>

int main(){
  int n;
  scanf("%d",&n);
  int *dp = (int*)malloc((n + 1) * sizeof(int));
  dp[0] = 1;
  for(int k = 1; k <= n; k++){
    for(int i = k; i <= n; i++){
      dp[i] += dp[i - k];
    }
  }
  printf("%d",dp[n]);
  free(dp);
  return 0;
}
