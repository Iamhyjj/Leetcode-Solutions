int min(int x,int y){
    return x<y?x:y;
}

int recursion(int** grid, int gridSize, int* gridColSize,int** hash){
	if(gridSize==1&&*gridColSize==1){
        hash[1][1]=grid[0][0];
		return grid[0][0];
    }
    if(gridSize==1){
        int i,sum=0;
        for(i=0;i<*gridColSize;i++){
            sum+=grid[0][i];
        }
        hash[gridSize][*gridColSize]=sum;
        return sum;
    }
    if(*gridColSize==1){
        int i,sum=0;
        for(i=0;i<gridSize;i++){
            sum+=grid[i][0];
        }
        hash[gridSize][*gridColSize]=sum;
        return sum;
    }
    int m=gridSize-1,n=*gridColSize-1;
    if(hash[m][*gridColSize]==-1){
    	hash[m][*gridColSize]=recursion(grid,m,gridColSize,hash);
	}
    if(hash[gridSize][n]==-1){
    	hash[gridSize][n]=recursion(grid,gridSize,&n,hash);
	}
	return min(hash[m][*gridColSize],hash[gridSize][n])+grid[gridSize-1][*gridColSize-1];
}
int minPathSum(int** grid, int gridSize, int* gridColSize) {
	int** hash=(int**)malloc((1+gridSize)*sizeof(int*));
	int i,result;
	for(i=0;i<gridSize+1;i++){
		hash[i]=(int*)malloc((*gridColSize+1)*sizeof(int));
		memset(hash[i],-1,4*(*gridColSize+1));
	}
    result=recursion(grid,gridSize,gridColSize,hash);
    for(i=0;i<gridSize+1;i++){
        free(hash[i]);
	}
    free(hash);
	return result;
}
