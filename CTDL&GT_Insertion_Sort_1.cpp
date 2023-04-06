void InsertionSort(int a[], int n){	
	int pos, x;
	for(int i = 1; i < n; i++){ //đoạn a[0] đã sắp
		x = a[i]; 
		pos = i;
		while(pos > 0 && x < a[pos-1]){
			a[pos] = a[pos-1];	// dời chỗ
			pos--;
		}
		a[pos] = x;
	}
}
