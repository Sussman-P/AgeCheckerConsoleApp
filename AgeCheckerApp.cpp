#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	string input;

	while (true)
	{
		cout << "Type your age: ";

		getline(cin, input);

		try
		{
			// Convert the string to an integer
			const int age = stoi(input);

			// Check if the input is not an integer
			if (cin.fail()) {
				cin.clear(); // Clear the fail bit
				cin.ignore(std::numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
				cout << "Invalid input. Please enter a valid age (numeric value).\n";
			}
			else if (age > 20)
			{
				cout << "You are older than 20" << '\n';
				break;
			}
			else if (age == 20)
			{
				cout << "You are 20" << '\n';
				break;
			}
			else
			{
				cout << "You are younger than 20" << '\n';
				break;
			}

		}
		catch (invalid_argument const& e)
		{
			std::cout << "Invalid input. Not a valid integer.\n";
		}
		catch (out_of_range const& e)
		{
			cout << "Input out of range for integer.\n";
		}
	}
	return 0;
}
