string timeConversion(string s) {
    int hours= stoi(s.substr(0,2));
    int min= stoi(s.substr(3,2));
    int secs = stoi(s.substr(6,2));
    if(s.substr(8,2)=="AM"){
        if(hours==12){
            hours=0;
        }
    }
    if(s.substr(8,2)=="PM"){
       if(hours!=12){
        hours+=12;
       }
    }
    string hrstr = (hours < 10 ? "0" : "") + to_string(hours);
    string minstr = (min < 10 ? "0" : "") + to_string(min);
    string secstr = (secs <10 ? "0" : "") + to_string(secs);
    return hrstr+":"+minstr+":"+secstr;
    
}
