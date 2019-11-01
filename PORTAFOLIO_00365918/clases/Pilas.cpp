// Obtener el segundo elemento

#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<int> s;
	int segundo = 0;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	s.pop();

	cout << "El segundo elemento es: " << s.top() << endl;

	return 0;
}
