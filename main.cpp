#include<iostream>
#include<fstream>
using namespace std;

//director:
//http://www.cnblogs.com/absfree/p/5502705.html

typedef enum token_type
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
} token_type;

typedef enum error_type
{
    token_ok = 0,
    token_error,

}error_type;

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

class parser
{
private:
    bool is_space(char c)
    {
        if(c == '\n' || c == '\t' || c == ' ' || c == '\n')
        {
            return true;
        }
        return false;
    }

public:
    error_type tokenize(token& t, const string& json_string, size_t& index)
    {
        size_t len = json_string.length();
        while(index < len)
        {
            //过滤空格
            while(this->is_space(json_string[index]))
            {
                index++;
            }

            //是否为null
            if(index + 3 < len && json_string.substr(index,4) == string("null"))
            {
                index += 3;
                token _t(NIL,"null");
            }
            //是否为
            else if()
        }

    }
};


int main()
{
    ifstream input_file("input.json");
	string json_string("");

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
