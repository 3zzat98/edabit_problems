std::vector<int> sortNumsAscending(std::vector<int> arr) {
	int temp=0,i=0,j=0;
	for(i=0;i<arr.size()-1;i++){
		for(j=0;j<arr.size()-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return arr;
}
