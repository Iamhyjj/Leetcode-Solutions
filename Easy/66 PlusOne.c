<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize){
	int status=1,flag=1,i;//status表示是否进位，flag表示给定数组是否数字全为9 
	for(i=0;i<digitsSize;i++){
			flag=flag&&(digits[i]==9);
	}
	if(flag){
		*returnSize=digitsSize+1;
	}
	else{
		*returnSize=digitsSize;
	}
	int* result=(int*)malloc((*returnSize)*sizeof(int));
	if(*returnSize>digitsSize){
		result[0]=1;
		for(i=1;i<*returnSize;i++){
			result[i]=0;
		}
	}
	else{
		for(i=*returnSize-1;i>=0;i--){
			if(status){
				result[i]=(digits[i]+1)%10;
				if(result[i]!=0){
					status=0;
				}
			}
			else{
				result[i]=digits[i];
			}
		}
	}
	return result;
}

=======
#include<stdio.h>
#include<stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize){
	int status=1,flag=1,i;//status琛ㄧず鏄惁杩涗綅锛宖lag琛ㄧず缁欏畾鏁扮粍鏄惁鏁板瓧鍏ㄤ负9 
	for(i=0;i<digitsSize;i++){
			flag=flag&&(digits[i]==9);
	}
	if(flag){
		*returnSize=digitsSize+1;
	}
	else{
		*returnSize=digitsSize;
	}
	int* result=(int*)malloc((*returnSize)*sizeof(int));
	if(*returnSize>digitsSize){
		result[0]=1;
		for(i=1;i<*returnSize;i++){
			result[i]=0;
		}
	}
	else{
		for(i=*returnSize-1;i>=0;i--){
			if(status){
				result[i]=(digits[i]+1)%10;
				if(result[i]!=0){
					status=0;
				}
			}
			else{
				result[i]=digits[i];
			}
		}
	}
	return result;
}

>>>>>>> 0e2459e6883aba3b6ed65130cc0dec22406c2f2e
