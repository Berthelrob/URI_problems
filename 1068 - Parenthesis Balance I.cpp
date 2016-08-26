#include <iostream>
#include <string>

using namespace std; 

int main(void){
	
	string expr;
	int i, p, q;

	while(getline(cin,expr)){
		p = 0;
		q = 0;
		for(i=0; i < expr.length(); i++){
			if(expr[i] == '(')
				p++;
			else if (expr[i] == ')')
				q++;
				if(q>p)
					q++;
		}

		if(p == q)
			cout << "correct" << endl;
		else
			cout << "incorrect" << endl;
	}
	return 0;
}
