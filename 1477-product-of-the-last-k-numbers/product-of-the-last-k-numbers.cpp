class ProductOfNumbers {
public:
    vector<int>v;
    int p;
    ProductOfNumbers() {
        p=0;
    }
    
    void add(int num) {
        if(num==0){
            v.clear();
            p=0;
        }
       else if(p==0){
            v.push_back(num);
            p++;
        }
       else{
         v.push_back(v.back()*num);
         p++;
       }
    }

    int getProduct(int k) {
       int a=p-k-1;
       if(k==p){
        return v.back();
       }else if(k>p)return 0;
       
       return v.back()/v[a];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */