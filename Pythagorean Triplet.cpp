bool isTriplet(int n1, int n2, int n3) {
	if (n1>n2&&n1>n3){
		if((n2*n2+n3*n3)==n1*n1)
			return true;
		else 
			return false;
	}
		else if (n2>n1&&n2>n3){
		if((n3*n3+n1*n1)==n2*n2)
			return true;
		else 
			return false;	
	}
		else{
		if((n2*n2+n1*n1)==n3*n3)
			return true;
		else 
			return false;
	}
}
