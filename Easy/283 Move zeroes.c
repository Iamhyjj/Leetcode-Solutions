<<<<<<< HEAD
#include<stdio.h>
void moveZeroes(int* nums,int numSize){
	int temp;
	int left=0;
	int right=0;
	while(right<numSize){
		if(nums[right]){
			temp=nums[left];
			nums[left]=nums[right];
			nums[right]=temp;
			left++;
		}
		right++;
	}
}
int main(){
	int a[]={0,0,1,2};
	int i;
	moveZeroes(a,4);
	for(i=0;i<4;i++){
		printf("%d",a[i]);
	}
	return 0;
}

=======
#include<stdio.h>
void moveZeroes(int* nums,int numSize){
	int temp;
	int left=0;
	int right=0;
	while(right<numSize){
		if(nums[right]){
			temp=nums[left];
			nums[left]=nums[right];
			nums[right]=temp;
			left++;
		}
		right++;
	}
}
int main(){
	int a[]={0,0,1,2};
	int i;
	moveZeroes(a,4);
	for(i=0;i<4;i++){
		printf("%d",a[i]);
	}
	return 0;
}

>>>>>>> 0e2459e6883aba3b6ed65130cc0dec22406c2f2e
