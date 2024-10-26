void plusMinus(vector<int> arr) {
    float pos=0; float zero=0; float neg=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]==0){
            zero++;
        }
        else{
            neg++;
        }
    }
    double r1= pos/arr.size();
    double r2= neg/arr.size();
    double r3= zero/arr.size();
    cout<<r1<<endl;
    cout<<r2<<endl;
    cout<<r3<<endl;
}
