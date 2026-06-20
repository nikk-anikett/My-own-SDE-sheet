class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
      set<int> s1,s2;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==0){
                    s1.insert(i);
                    s2.insert(j);
                }
            }
        }
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(s1.find(i)!=s1.end() || s2.find(j)!=s2.end())
                     m[i][j]=0;
            }
        }
    }
}


I am building a very simple Node.js trading application using the Dhan API. Before building the order placement API, I want to solve authentication and token renewal completely.

Your task is to create a standalone authentication module first.

Read and use the latest Dhan v2 Authentication documentation.

Requirements:

Tech Stack:

* Node.js
* Axios
* dotenv

Project Structure:

project/
│
├── .env
├── auth-test.js
├── services/
│   └── authService.js
├── utils/
│   └── tokenStorage.js
└── package.json

Environment Variables:

DHAN_CLIENT_ID=
DHAN_API_KEY=
DHAN_API_SECRET=
DHAN_ACCESS_TOKEN=

Goal:

Create a standalone script called auth-test.js that verifies authentication and token renewal before I build the trading application.

Implement:

1. authService.js

Functions:

* validateCurrentToken()
* renewToken()
* getValidToken()

2. tokenStorage.js

Functions:

* saveToken()
* loadToken()

Store token information inside a local JSON file.

3. auth-test.js

When executed:

* Load current token
* Display token information
* Attempt token validation
* Attempt token renewal using official Dhan APIs
* Print complete response
* Save newly received token
* Print success or failure message

Logging:

[INFO] Loading token...
[INFO] Validating token...
[INFO] Renewing token...
[SUCCESS] Token renewed successfully.
[ERROR] Authentication failed.
[ERROR] Renewal failed.

Error Handling:

* Handle invalid token
* Handle expired token
* Handle network failures
* Handle API response errors
* Print detailed error messages

Code Requirements:

* Use async/await only
* Use try/catch everywhere
* Add comments explaining every function
* Do not use TypeScript
* Do not use databases
* Do not use Express
* Keep it as a simple CLI script

Most Important Requirement:

Before writing any code, analyze the latest Dhan v2 authentication documentation and determine:

* Whether token renewal requires API Key and Secret
* Whether access-token alone is sufficient
* Exact headers required
* Exact request payload required
* Exact API endpoint required

If any assumption is uncertain, explain it and generate code according to the official documentation.

Output:

Generate complete code for:

* package.json
* .env.example
* auth-test.js
* services/authService.js
* utils/tokenStorage.js

Also provide setup instructions and sample output.

The objective is to have a working authentication and token renewal proof-of-concept before building order placement functionality.
