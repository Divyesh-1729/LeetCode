class Solution {
public:
    string capitalizeTitle(string title) {

        for (int i = 0; i < title.length(); i++) {
            title[i] = tolower(title[i]);
        }

        if (title.length() > 2 && title[1] != ' ' && title[2] != ' ') {
            title[0] = toupper(title[0]);
        }

        for (int i = 0; i < title.length(); i++) {
            if (title[i] == ' ') {
                int j = i + 1;
                int l = 0;
                while (j < title.length() && title[j] != ' ') {
                    l++;
                    j++;
                }

                if (l > 2) {
                    title[i + 1] = toupper(title[i + 1]);
                }
            }
        }

        return title;
    }
};