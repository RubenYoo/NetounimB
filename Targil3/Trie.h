#pragma once
#include <iostream>
#include <string>

using namespace std;

const int ALPHABET = 26;

class Trie
{
protected:
	class TrieNode
	{
	public:
		TrieNode* children[ALPHABET] = { 0 };
		TrieNode* father;
		bool isEndWord = false;
		bool isLeaf = true;
		TrieNode() {};
	};
	TrieNode* root;
public:
	Trie() { root = new TrieNode(); };
	~Trie() { deleteAllTheTree(root); };
	
	void insertWord(string str);
	bool deleteWord(string str);
	bool searchWord(string str);
	bool printAllWordsFromPrefix(string str);
private:
	void printAllWordsFromPrefix(string str, TrieNode* node);
	bool checkIfLeaf(TrieNode* node);
	void deleteAllTheTree(TrieNode* node);
};


