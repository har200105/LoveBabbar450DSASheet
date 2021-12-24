bool checkString(string s1,string s2){
	
	int l1 =  s1.length();
	int l2 =  s2.length();

	if(l1 != l2){
		return false;
	}

	else{

		string temp = s1 + s2;
		
		if(temp.find(s2) != string:npos){
			return true;
		}
		
		return false;
	}
}