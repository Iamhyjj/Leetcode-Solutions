int min(int x,int y){
    return x<y?x:y;
}
int area(int* height,int left,int right){
	int i,result=0,surface_height=min(height[left],height[right]);
	for(i=left+1;i<right;i++){
		result+=-height[i]+surface_height;
	}
	return result;
}
int trap(int* height, int heightSize) {
    int i,left=0,right=0,max_index=0,result=0;
    for(i=0;i<heightSize;i++){
    	max_index=height[i]>height[max_index]?i:max_index;
	}
    while(right<max_index){
		while(right<max_index&&height[right]<=height[left]){
    		right++;
		}
		result+=area(height,left,right);
		left=right;
	}
	left=right=heightSize-1;
	while(left>max_index){
		while(left>max_index&&height[left]<=height[right]){
    		left--;
		}
		result+=area(height,left,right);
		right=left;
	}
	return result;
}