vector<int> breakingRecords(vector<int> scores) {
        if (scores.empty()) {
            return {0, 0};
         }
    int minRec = scores[0], maxRec = scores[0]; 
    vector <int> breakCount(2,0);
    for(int i = 0; i< scores.size(); i++){
        if(scores[i]>maxRec){
            maxRec=scores[i];
            breakCount[0]++;
        }
        if(scores[i]<minRec){
            minRec = scores[i];
            breakCount[1]++;
        } 
    }
    return breakCount;
}
