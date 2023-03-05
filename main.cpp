#include <iostream>
using namespace std;
class Dog
{
	string name;
	int height;
	string color;
public: Dog(){
	name = " ";
	height = 0;
	color = " ";
}
	  Dog(string fname,int fheight,string fcolor) {
		  name = fname;
		  height = fheight;
		  color = fcolor;
	  }
	  string getName() { return name; }
	  void setName(string fname) { name = fname; }
	  int getHeight() { return height; }
	  void setHeight(int fheight) { height = fheight; }
	  string getColor() { return color; }
	  void setColor(string fcolor) { color = fcolor; }
	  void print() {
		  cout << "Name:" << name << endl
			   << "Height:" << height << endl 
			   << "Color:" << color << endl<<endl;
	  }
	  
};
int main() {
	Dog sharik;
	sharik.setName("sharik");
	sharik.setHeight(50);
	sharik.setColor("black");
	sharik.print();

	Dog kukusik("kukusik", 80, "gray");
	kukusik.print();
}