#include <iostream>
#include <string>
using namespace std;

class TC
{
	public:
		int kolvo_TC;
		
	 	void set()
	 	{
	 	cout << "Ââåäèòå êîë-âî ÒÖ";
	 	cin >> kolvo_TC;	  
		}
		int getKolvo()
		{
			return kolvo_TC;
					}	  	  
};

class Shops
{
 public:
   int kolvo_Shop [];
   
   void set1 (int kolvo_TC_)
   {
   	int i;
   	for (int i=1;i<kolvo_TC_ ; i++ );
   	cout << "Ââåäèòå êîë-âî ìàãàçèíîâ";
   	cin >> kolvo_Shop[i];
	}
};
 

int main(int argc, char** argv) {
	setlocale(0,"");
  	TC ggwp;
  	ggwp.set();
  	Shops ez;
  	int kolvotc = ggwp.getKolvo();
  	ez.set1(kolvotc);
	return 0;
}
