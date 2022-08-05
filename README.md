# 25 unique letters

This is code written to solve the question from the StandupMaths video https://www.youtube.com/watch?v=_-AfhLQfb6w 

For ease of use the Code is split into six Files 

5LWords.c
5LWords_b.c
5LWords_c.c
5LWords_d.c
5LWords_e.c

The first File, 5LWords.c, reads in the Word List, and rewrites it to a new Textfile having removed all Words which contain duplicate letters or are not 5 Letters long

The Second File, 5LWords_b.c, is a run time optimisation method if one only cares about the existence of A solution in a given List of words. It further reduces the list to only the first occurance of any one letter combination (So of the Words "magic" and "gamic", only "gamic" would be kept. Words with identical letters in different order are trivially excahangable in solution, so this doesn't affect the presence of solutions, merely the amount)

The third File, 5LWords_c.c, reads from the reduced Word List and converts the Word List to a Boolean Matrix with 26 Columns and as many Rows as words. This is done for ease and simplicity of comparison between different words. If a Word contains a letter, the corresponding cell in the Matrix is True, if it does not the Cell is false. E.g. if the second Word were "bcdef" the second, third, fourth, fith and sixth Cell in the second Matrix row would be True, with the other 21 cells in that row being False. The Matrix is stored on a .txt File

The fourth file, 5LWords_d.c, reads the Matrix and begins running through possible permuations of rows and checking via a comically long boolean expressian if any two rows share any letters. If it finds a solution, the 5 indizes of the solution words are written to a text file

The fifth file, 5LWords_e.c, reads the solution text file as well as the word list and fetches the corresponding words for the indizes, from the word list, and prints the solutions in another text file.


#This Code was written for Fun. It's janky uncommented, and probably an absolute pain for anyone to change or modify because of that. I will likely improve it in the future and put some comments in. 

Because I'm lazy the length of the reduced Word list, which is needed for loop control in Files three, four and five, is not dynamic. It just checked the length of the file in TExt Editor and set the value statically. If you want to run your own Wordlist, do the same and change the value of the variable int n in the last 3 files
