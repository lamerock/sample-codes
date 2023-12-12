/* Yabe Online Auctions requires its sellers to post items
 * for sale for a six-week period during which the price of
 * any unsold item drops 12 percent each week. For example,
 * an item that costs $10.00 during the first week, the same
 * item is 12 percent less, or $8.80, during the second week.
 * During the third week, the same item is 12 percent less
 * $8.80, or $7.74. Design an application that allows a user
 * to input prices until an appropriate sentinel value is
 * entered. Program output is the price of each item during
 * each week, one through six.
*/
#include <iostream>

using namespace std;

int main()
{
	float item_price = 0;
	int week_number = 1;
	
	cout << "Enter the item price: ";
	cin >> item_price;
	
	do {
		cout << "Week " << week_number << "- Item Price: " << item_price << endl;
		item_price = item_price - (0.12 * item_price); 
		week_number++;
	} while (week_number <= 6);
	
	return 0;
}
