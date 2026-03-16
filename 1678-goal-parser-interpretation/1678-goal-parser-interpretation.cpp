class Solution {
public:
    string interpret(string command) {
        string s = "";
        for(int i = 0;i<command.length();i++)
        {
            if(command[i]=='G')
            {
                s = s + 'G';
            }
            if(command[i]=='(' && command[i+1]==')')
            {
                s = s +'o';
            }
            if(command[i]=='('&&command[i+1]=='a'&&command[i+2]=='l'&&command[i+3]==')')
            {
                s = s + "al";
            }
        }
        return s;
    }
};