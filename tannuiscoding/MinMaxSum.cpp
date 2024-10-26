void miniMaxSum(vector<int> arr) {
    int n = arr.size();
    int largest = arr[0];
    int smallest = arr[0];
    long long total_sum = 0, min_sum = 0, max_sum = 0;
    
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    if (largest == smallest) {
        min_sum = total_sum - largest;
        max_sum = total_sum - smallest;
    } else {
        min_sum = total_sum - largest;
        max_sum = total_sum - smallest;
    }

    cout << min_sum << "\t" << max_sum << endl;
}
