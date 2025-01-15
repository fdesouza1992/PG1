anatomy of a for loop

for(starting variable; condition; increment/decrement)
{
//body
}

Example
If I want to count from 1 to 10 inclusively

//index is starting at 1 as I want to start from 1 in my counting
//this condition is saying run while index is either less than or equal to 10
//I am adding 1 to index everytime I loop so I am incrementing index

for(int index = 1; index <=10; index++)
{
	std::cout << index << std::endl; //if this was being printed we would see the numbers 1 to 10
}

If I wanted to count from 10 to 1 exclusively I would write it like this

//I am starting at 10
//My condition is that while index is less that 0 so excluding 0
//I will decrememnt or minus 1 from 10 each time I loop
for(int index = 10; index > 0; index--)
{
	std::cout << index << std::endl;
}



If I wanted to print every even number from 0 to 20 inclusively I can do this

//i is equal to 0 as that is my starting number
//My condition is the loop will run while i is less than or equal to 20
//I will add 1 to i each time which means I am incrementing by 1 every time I loop
for(int i = 0; i <= 20; i++)
{
	//each time I loop I am checking to see if i divided by 2 has a remainder
	//this is because if I is even it should divide by 2 and have no remainder
	if(i % 2 == 0)
	{
		//Because this statement is in the if check I will only print even numbers
		std::cout << i << std::endl;
	}
}



For the prime number test I recommend first tackling what you know before diving into the loop portion. 
With prime numbers we know that a number is not prime if it is negative, 0 or 1. 
So because we know that think about would it make sense for me to check those before the loop or in the loop? 
When we get to the loop if we know that anything below 2 is not a prime number would it make sense to start at a number below 2, why or why not? 
Another thing to note when it comes to the definition of prime numbers they are numbers that are ONLY divisible by 1 or itself. 
For example 7 can only be divisible by 1 or 7 so therefore it is prime where as 4 is divisible by 1,2, and 4 so it is not prime.





















