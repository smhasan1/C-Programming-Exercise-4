# C-Programming-Exercise-3
Write a C program to do some checking and display of students performance in a class. The input is taken from the keyboard.  
The input is on the form of lines. The first line contains an integer n that represents the number of records (lines) in the file.  
Each of the next n lines contains the following (separated by white spaces)  
• Student ID (sequence of 8 digits)  
• Student first name (max 8 characters, no spaces).  
• Student last name (max 8 characters, no spaces).  
• Final exam marks (0-100 and integer)  
• Midterm marks (0-100 and integer)  
• 3 quizzes each out of 10 (could be float)  

After the n+1 lines, a sequence of commands, each command is on a line. The program reads the commands and perform the appropriate task, it stops when there are no more commands to read (EOF). The total mark of the student is calculated as 60% final exam, 25% midterm, and each quiz 5%. The commands are.  
• “F” Display the ID's of the failing students (total marks less than 50%). each ID is displayed as 8 digits followed by a new line.  
• “top” Display the ID of the top student (the student with the highest overall mark), followed by 2 spaces followed by the student last name followed by a new line. If more than one student, repeat for each student.  
• “A” Displays the ID of the students followed by 2 spaces, followed by the student last name followed by a new line for students with an overall mark of 80% or more.  
• “PerA” the percentage of student with 80% or more overall average. The percentage should be displayed as (followed by a new line).  
 “Percentage of students with an average of A:xx.xx%” where xx.xx is the percentage with 2 digits after the decimal point
• “Anomaly” Displays just “YES” or “NO” followed by a new line. “YES” if the course marks are anomalous, “NO” it is not. We will use the same criterion we use in the EECS department. The course is anomalous if the percentage of students with a grade of “A” or “F” is more than 30% AND the number of students in the class is greater than 15.  
• “q” or “Q” the program displays “Thanks” followed by a new line and quits. Note that the program also quits at end of file but without displaying Thanks.  

The quotation marks surrounded the output is not a part of the output, for example when it says “YES” you display YES not “YES”  
