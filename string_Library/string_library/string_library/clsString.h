#pragma once
#include <iostream>
#include "clsChar.h"
using namespace std;
#include <vector>
#include<string>

class clsString
{
private:
	string _value;

	


public:

	clsString()
	{
		_value = "";
	}

	clsString(string value)
	{
		_value = value;
	}

	void SetValue(string value)
	{
		_value = value;
	}

	string Getvalue()
	{
		return _value;

	}

	__declspec(property(get = Getvalue, put = SetValue)) string value;


	static short Length(string S1)
	{
		return S1.length();
	};


	short Length()
	{
		return _value.length();
	};


	static void PrintFirstLetterOfEachWord(string S1) {
		bool isFirstLetter = true;
		cout << "\nFirst letters of this string: \n";
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && isFirstLetter)
			{
				cout << S1[i] << endl;
			}
			isFirstLetter = (S1[i] == ' ' ? true : false);
		}
	}

	void PrintFirstLetterOfEachWord()
	{
		return PrintFirstLetterOfEachWord(_value);
	}

	static string  UpperFirstLetterOfEachWord(string S1) {
		bool isFirstLetter = true;
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && isFirstLetter)
			{
				S1[i] = toupper(S1[i]);
			}
			isFirstLetter = (S1[i] == ' ' ? true : false);
		}
		return S1;
	}


	string UpperFirstLetterOfEachWord()
	{
		return UpperFirstLetterOfEachWord(_value);
	}

	static string  LowerFirstLetterOfEachWord(string S1)
	{
		bool isFirstLetter = true;
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && isFirstLetter)
			{
				S1[i] = tolower(S1[i]);
			}
			isFirstLetter = (S1[i] == ' ' ? true : false);
		}
		return S1;
	}

	string LowerFirstLetterOfEachWord()
	{
		return LowerFirstLetterOfEachWord(_value);
	}


	static string  UpperAllString(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = toupper(S1[i]);
		} return S1;
	}

	string UpperAllString()
	{
		return UpperAllString(_value);
	}

	static string  LowerAllString(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = tolower(S1[i]);
		}
		return S1;
	}

	string LowerAllString()
	{
		return LowerAllString(_value);
	}

	static short  CountCapitalLetters(string S1)
	{
		short Counter = 0; for (short i = 0; i < S1.length(); i++)
		{
			if (isupper(S1[i]))
				Counter++;
		}
		return Counter;
	}

	short CountCapitalLetters()
	{
		return CountCapitalLetters(_value);
	}

	static short  CountSmallLetters(string S1)
	{
		short Counter = 0; for (short i = 0; i < S1.length(); i++)
		{
			if (islower(S1[i]))
				Counter++;
		}
		return Counter;
	}

	short CountSmallLetters()
	{
		return CountSmallLetters(_value);
	}




	enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 3 };

	static short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
	{
		if (WhatToCount == enWhatToCount::All)
		{
			return S1.length();
		}

		short Counter = 0;

		for (short i = 0; i < S1.length(); i++)
		{
			if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
				Counter++;
			if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))             Counter++;
		} return
			Counter;
	}

	short CountLetters()
	{
		return CountLetters(_value);
	}

	static string  InvertAllStringLettersCase(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = clsChar::InvertLetterCase(S1[i]);
		}
		return S1;
	}

	string InvertAllStringLettersCase()
	{
		return InvertAllStringLettersCase(_value);
	}


	static short  CountLetter(string S1, char Letter)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] == Letter)
				Counter++;
		}
		return Counter;
	}

	short CountLetter(char Letter)
	{
		return CountLetter(_value, Letter);
	}




	static short  CountLetters(string S1, char Letter, bool MatchCase = true)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (MatchCase) {
				if (S1[i] == Letter)

					Counter++;
			}
			else
			{

				if (tolower(S1[i]) == tolower(Letter))
					Counter++;
			}
		}

		return Counter;
	}

	short CountLetters(char Letter, bool MatchCase = true)
	{
		return CountLetters(_value, Letter, MatchCase);
	}


	static short  CountVowels(string S1)
	{
		short Counter = 0; for (short i = 0; i < S1.length(); i++)
		{
			if (clsChar::IsVowel(S1[i]))
				Counter++;
		}
		return Counter;
	}

	short CountVowels()
	{
		return CountVowels(_value);
	}


	static void PrintVowels(string S1)
	{
		cout << "\nVowels in string are: ";
		for (short i = 0; i < S1.length(); i++)
		{
			if (clsChar::IsVowel(S1[i]))

				cout << S1[i] << "    ";
		}
	}

	void PrintVowels()
	{
		return PrintVowels(_value);
	}


	static void PrintEachWordInString(string S1) {
		string delim = " "; // delimiter   
		cout << "\nYour string wrords are: \n\n";
		short pos = 0; string sWord; // define a string variable 
		// use find() function to get the position of the delimiters 
		while ((pos = S1.find(delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos);
			// store the word  
			if (sWord != "")
			{
				cout << sWord << endl;
			}
			S1.erase(0, pos + delim.length());
			/* erase() until positon and move to next word. */
		}
		if (S1 != "")
		{
			cout << S1 << endl; // it print last word of the string.  
		}
	}

	void PrintEachWordInString()
	{
		return PrintEachWordInString(_value);
	}


	static short CountWords(string S1) {
		string delim = " ";
		// delimiter
		short Counter = 0;
		short pos = 0;
		string sWord;
		// define a string variable  
		// use find() function to get the position of the delimiters 
		while ((pos = S1.find(delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos);
			// store the word  
			if (sWord != "")
			{

				Counter++;
			}
			//erase() until positon and move to next word.
			S1.erase(0, pos + delim.length());
		}
		if (S1 != "")
		{
			Counter++;
			// it counts the last word of the string.
		}
		return Counter;
	}

	short CountWords()
	{
		return  CountWords(_value);
	}



	static string TrimLeft(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(i, S1.length() - i);
			}
		}
		return "";
	}

	string TrimLeft()
	{
		return TrimLeft(_value);
	}



	static string TrimRight(string S1)
	{
		for (short i = S1.length() - 1; i >= 0; i--) {
			if (S1[i] != ' ')
			{
				return S1.substr(0, i + 1);
			}
		} return"";
	}

	string TrimRight()
	{
		return TrimRight(_value);
	}


	static string Trim(string S1)
	{
		return (TrimLeft(TrimRight(S1)));
	}

	string Trim()
	{
		return Trim(_value);
	}


	static vector<string> SplitString(string S1, string Delim)
	{
		vector<string> vString;
		short pos = 0;
		string sWord;
		// define a string variable  
		// use find() function to get the position of the delimiters 
		while ((pos = S1.find(Delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos);
			// store the word   
			if (sWord != "")
			{
				vString.push_back(sWord);
			}
			S1.erase(0, pos + Delim.length());
		}
		if (S1 != "")
		{
			vString.push_back(S1);
			// it adds last word of the string.    
		}
		return vString;
	}

	vector<string> SplitString(string Delim)
	{
		return SplitString(_value, Delim);
	}


	static string ReverseWordsInString(string S1)
	{
		vector<string> vString;
		string S2 = "";
		vString = SplitString(S1, " ");
		// declare 
		vector<string>::iterator iter = vString.end();
		while (iter != vString.begin())
		{
			--iter;
			S2 += *iter + " ";
		}
		S2 = S2.substr(0, S2.length() - 1); //remove last space.
		return S2;
	}

	string ReverseWordsInString()
	{
		return ReverseWordsInString(_value);
	}


	static string ReplaceWordInStringUsingBuiltInFunction(string S1, string StringToReplace, string sRepalceTo)
	{
		short pos = S1.find(StringToReplace);
		while (pos != std::string::npos)
		{
			S1 = S1.replace(pos, StringToReplace.length(), sRepalceTo);
			pos = S1.find(StringToReplace);
			//find next   
		}
		return S1;
	}

	string ReplaceWordInStringUsingBuiltInFunction(string StringToReplace, string sRepalceTo)
	{
		return ReplaceWordInStringUsingBuiltInFunction(_value, StringToReplace, sRepalceTo);
	}


	static string RemovePunctuationsFromString(string S1)
	{
		string S2 = ""; 
		for (short i = 0; i < S1.length(); i++) 
		{ 
			if (!ispunct(S1[i])) 
			{ 
				S2 += S1[i];
			} 
		} 
	return S2; 
	}

	string RemovePunctuationsFromString()
	{
		return RemovePunctuationsFromString(_value);
	}


	struct sClient
	{
		string AccountNumber;
		string PinCode;
		string Name;
		string Phone;
		double AccountBalance;
	};

	sClient ReadNewClient()
	{
		sClient Client;
		cout << "Enter Account Number? ";
		getline(cin, Client.AccountNumber);
		cout << "Enter PinCode? ";
		getline(cin, Client.PinCode);
		cout << "Enter Name? ";
		getline(cin, Client.Name);
		cout << "Enter Phone? ";
		getline(cin, Client.Phone);
		cout << "Enter AccountBalance? ";
		cin >> Client.AccountBalance;
		return Client;
	}
	


	static string ConvertRecordToLine(sClient Client, string Seperator = "#//#")
	{ 
		string stClientRecord = "";

	stClientRecord += Client.AccountNumber + Seperator; 
	stClientRecord += Client.PinCode + Seperator;    
	stClientRecord += Client.Name + Seperator;    
	stClientRecord += Client.Phone + Seperator;   
	stClientRecord += to_string(Client.AccountBalance);

	return stClientRecord; 
	}

	string ConvertRecordToLine(string Seperator = "#//#")
	{
		return ConvertRecordToLine(ReadNewClient());
	}


	
	static sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
	{
		sClient Client;
		vector<string> vClientData; 
		vClientData = SplitString(Line, Seperator);  
		Client.AccountNumber = vClientData[0]; 
		Client.PinCode = vClientData[1];   
		Client.Name = vClientData[2];  
		Client.Phone = vClientData[3]; 
		Client.AccountBalance = stod(vClientData[4]);
		//cast string to double
		return Client; 
	}

	sClient ConvertLinetoRecord(string Seperator = "#//#")
	{
		return ConvertLinetoRecord(_value, Seperator);
	}


	static void PrintClientRecord(sClient Client)
	{
		cout << "\n\nThe following is the extracted client record:\n";
		cout << "\nAccout Number: " << Client.AccountNumber;    
		cout << "\nPin Code     : " << Client.PinCode; 
		cout << "\nName         : " << Client.Name;    
		cout << "\nPhone        : " << Client.Phone;  
		cout << "\nAccount Balance: " << Client.AccountBalance; 
	}

	


};

