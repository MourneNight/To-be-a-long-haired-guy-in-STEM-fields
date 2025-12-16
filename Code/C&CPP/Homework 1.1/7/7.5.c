#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool compare_x(int **arr,int a,int m,int n,int row);
bool compare_y(int **arr,int a,int m,int n,int col);

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int **arr = (int **)malloc(m * sizeof(int));
	for(int i = 0; i < m; i++){
		arr[i] = (int *)malloc(n * sizeof(int));
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			 bool x_max = compare_x(arr,arr[i][j],m,n,i);
			 bool y_min = compare_y(arr,arr[i][j],m,n,j);
			 if(x_max && y_min){
			 	printf("%d %d %d",i,j,arr[i][j]);
			 }
		}	
	}
	for(int i = 0; i < m; i++){
		free(arr[i]);
	}
	free(arr);
	return 0;	
}

bool compare_x(int **arr,int a,int m,int n,int row){
	int max = 0;
	for(int i = 0;i < m; i++){
			if(max <= arr[row][i]){
				max = arr[row][i];
		    }
	}
	return max == a;
}

bool compare_y(int **arr,int a,int m,int n,int col){
	int min = a;
	for(int i = 0;i < m; i++){
			if(min >= arr[i][col]){
				min = arr[i][col];
			}
	}
	return min == a;
}