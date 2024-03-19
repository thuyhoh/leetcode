int firstUniqChar(char* s) {
    int *nums = (int*)malloc(sizeof(s)*strlen(s));
    int i = 0;
    while(*(s+i) != '\0'){
        nums[i] = 1;
        int j = 0;
        for(j = 0; j<i; j++ ){
        	
            if(*(s+i) == *(s+j)){
                nums[j] += 1;
                nums[i] = 0;
            	break;
			}
        }
        i++;
    }
    int j;
    printf("inday\n");
    for(j = 0; j< i; j++){
    	printf("%d ",nums[j]);
	}
    printf("\n");
    for(j = 0; j<i; j++){
        if(nums[j] == 1) return j;
    }
    return -1;
}