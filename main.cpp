#include<iostream>
#include<fstream>
using namespace std;

//director:
//http://www.cnblogs.com/absfree/p/5502705.html

enum token_type
{
    START_OBJ,
    END_OBJ,
    START_ARRAY,
    END_ARRAY,
    NIL,
    NUMBER,
    STRING,
    BOOLEAN,
    COLON,
    COMMA,
    END_FILE
};

class token
{
private:
    token_type type;
    string value;
public:
    token(token_type __type,string __value)
    {
        this->type = __type;
        this->value = __value;
    }

    token_type get_type()
    {
        return this->type;
    }

    string get_value()
    {
        return this->value;
    }
};

token start_tokenize()
{
    for(int i = 0;i < json_string.length();)
    {
        while(is_space(json_string[i]))
        {
            i++;
        }
        if(is_null(json_string[i]))
        {

        }
    }
}

int main()
{
    ifstream input_file("input.json");
	string json_string("");
    if(input_file == NULL) cout << "!!!" << endl;
	string str;
    while(input_file >> str)
    {
        //cout << str << endl;
        json_string = json_string + str + " ";
        //cout << str << endl;
    }
	input_file.close();
	//cout << json_string << endl;



	return 0;
}
