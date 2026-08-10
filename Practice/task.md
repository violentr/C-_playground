Goal: Read a text file line by line and count occurrences of suspicious activity.

Input file (access.log): each line looks like this:

INFO 192.168.1.5 GET /index.html 200
WARN 192.168.1.5 POST /login 401
INFO 10.0.0.3 GET /admin 200
WARN 192.168.1.9 GET /admin 403

Requirements:
1. Open the file with ifstream, check it opened successfully
2. Read it line by line (hint: getline)
3. For each line, count how many times the words WARN and ERROR appear
4. Track unique IP addresses (hint: you'll need std::set or std::map)
5. Print a summary:
   Total lines: 4
   Warnings: 2
   Errors: 0
   Unique IPs: 3

Constraints:
- No hardcoded file path — accept it as a command-line argument (argv[1])
- No global variables
- Use std::vector/std::map — no raw arrays
- Handle the case where the file doesn't exist (print a message, don't crash)
  Stretch goals (only if the above is done):
- Print the IP with the most lines
- Skip the header line if the file has one