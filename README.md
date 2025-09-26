Pointers:
I used pointers when passing in arguments to the functions. That way the function can directly access and change the variable without having to return anything. I also used pointers to store the names that the user inputs since std::string isn't allowed.

The print function also had the gpa passed in as a reference which similarly to pointers allows arguments to be passed into functions without needing to be copied.

Constness was used when passing in some of the arguments for the functions.

I used static casting to cast the double that the average function returns into an int.

At the end of the main, I iterate through the names array to delete each name independently since they are initiated using "new".

I handled exceptions by throwing codes in times when you're accessing an index that's ouside the size for example.

The switch allowed me to run different functions based on different cases, which were determined by the user's inputs. This allows for easier and more readable code as opposed to 5 billion if statements.