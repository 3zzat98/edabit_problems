bool isSafeBridge(std::string s) {
	int i=0;
	for(i=0;i<s.length();i++){
		if(s[i]!='#')
			return false;
	}
	return true;
}
