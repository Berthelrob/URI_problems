#include <iostream>
#include <queue>

using namespace std; 

int main(void){

	int a_cards, i, first_element;

	cin >> a_cards;
	while(a_cards != 0){
		
		queue <int> r_queue_cards;
		queue <int> d_queue_cards; 
	
		if(a_cards != 0 || a_cards <=50){
			for(i = 1; i<=a_cards; i++){
				r_queue_cards.push(i);
			}
	
			while(r_queue_cards.size()!=1){
				d_queue_cards.push(r_queue_cards.front());
				r_queue_cards.pop();
	
				first_element = r_queue_cards.front();
				r_queue_cards.pop();
				r_queue_cards.push(first_element);
			}
				
			cout << "Discarded cards: " ;
			while(d_queue_cards.size()!=0){
				cout << d_queue_cards.front();
				d_queue_cards.pop();
				if(d_queue_cards.size() >=1)
					cout << ", ";
			}
	
			cout << endl;
			cout << "Remaining card: ";
	
			while(r_queue_cards.size()!=0){	
				cout << r_queue_cards.front() << endl;
				r_queue_cards.pop();
			}
		}
			cin >> a_cards;
	}
	return 0;
}

