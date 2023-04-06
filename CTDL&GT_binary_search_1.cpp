TH1: tìm x nhỏ nhất mà P(x)=true.

bool P(int x) {
    // Logic của hàm P ở đây
    return true;  // thay giá trị này bằng giá trị đúng logic.
}

int binary_search(int lo, int hi) {
    while (lo < hi) {
        int mid = lo + (hi-lo)/2;
        if (P(mid) == true)
            hi = mid;
        else
            lo = mid+1;
    }
  	
    if (P(lo) == false)
        return -1; // P(x) = false với mọi x thuộc S, bài toán vô nghiệm.
  	
   return lo; // lo là giá trị x nhỏ nhất mà P(x) = true
}

TH2: tìm x lớn nhất mà P(x)=false

bool P(int x) {
    // Logic của hàm P ở đây
    return true;  // thay giá trị này bằng giá trị đúng logic.
}

int binary_search(int lo, int hi) {
    while (lo < hi) {
        int mid = lo + (hi-lo+1)/2;
        if (P(mid) == true)
            hi = mid - 1;
        else
            lo = mid;
    }
  	
    if (P(lo) == true)
        return -1; // P(x) = true với mọi x thuộc S, bài toán vô nghiệm.
  	
   return lo; // lo là giá trị x lớn nhất mà P(x) = false
}
