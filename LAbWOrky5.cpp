#include <iostream>
#include <stack>
#include <string>

int main()
{

	std::stack <int> nums;
	std::string input;

	getline(std::cin, input);

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != ' ')
		{
			nums.push(input[i] - '0');
		}
		else if (input[i] == '+' || input[i] == '-' || input[i] == '*')
		{
			if (input[i] == '+')
			{
				int top = nums.top();
				nums.pop();
				nums.top() += top;
			}
			if (input[i] == '-')
			{
				int top = nums.top();
				nums.pop();
				nums.top() -= top;

			}
			if (input[i] == '*')
			{

				int top = nums.top();
				nums.pop();
				nums.top() *= top;
			}
		}
	}
	std::cout << nums.top();
	return 0;
}