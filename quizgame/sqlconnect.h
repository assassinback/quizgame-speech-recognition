#pragma once
#include<iostream>
#include<string>
#include <cstdlib> 
#include <ctime>
#include <msclr\marshal_cppstd.h>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Speech::Synthesis;
using namespace MySql::Data::MySqlClient;
struct node
{
	string question, a, b, c, d, answer;
	node* next;
};
struct node1
{
	string a;
	node1* next;
};
ref class sqlconnect
{
public:
	sqlconnect();
    MySqlConnection^ con;
	MySqlDataReader^ reader;
	MySqlDataAdapter^ adapter;
	MySqlCommand^ command;
	bool checkadmin(String^ x,String^ y);
	MySqlConnection^ conx();
	void quescount(Label^ x);
	void viewquestions(DataGridView^ x, BindingSource^ y);
	void viewmemers(DataGridView^ x, BindingSource^ y);
	void searchuser(DataGridView^ x, BindingSource^ y,String^ z);
	void deleteuser(String^ x);
	void updateUser(String^ x,String^ username,String^ password,String^ email,String^ address,String^ classx,String^ testsgiven,String^ marksobtained,String^ a,String^ b);
	void getuserdata(String^ x, TextBox^ a, TextBox^ b, TextBox^ c, TextBox^ d, TextBox^ e, TextBox^ f, TextBox^ g,TextBox^ h,TextBox^ i);
	void insertquestion(String^ a,String^ b,String^ c,String^ d,String^ e,String^ f,String^ g,String^ h);
	void deletea(String^ x);
	void searchquestion(String^ x,DataGridView^ y,BindingSource^ z);
	void getupdateQuestion(String^ a, TextBox^ b, TextBox^ c, TextBox^ d, TextBox^ e, TextBox^ f, TextBox^ g);
	void updatequestion(String^ a, String^ b, String^ c, String^ d, String^ e, String^ f, String^ g);
	void registera(String^ username, String^ password, String^ email, String^ address, String^ classx, String^ testsgiven, String^ marksobtained, String^ a, String^ b);
	void insertspecialquiz(String^ a,String^ b,String^ c,String^ d,String^ e,String^ f,String^ g,String^ h,String^ i,String^ j,String^ k,String^ l,String^ m,String^ n,String^ o,String^ p,String^ q,String^ r,String^ s,String^ t,String^ u,String^ v,String^ w,String^ x,String^ y,String^ z,String^ aa,String^ ab,String^ ac,String^ ad,String^ ae);
	bool userLogin(String^ x,String^ y);
	void getquizinfo(Label^ x,Label^ y,String^ z);
	void viewUserInfo(String^ x,DataGridView^ y,BindingSource^ z);
	void getDataUser(String^ a,TextBox^ b,TextBox^ c,TextBox^ d,TextBox^ e,TextBox^ f);
	void update(String^ a, String^ b, String^ c, String^ d, String^ e, String^ f);
	node* doQuiz(String^ difficulty);
	node* head = NULL;
	node* cur = NULL;
	node* obj = NULL;
	void insertquizinfo(String^ a,String^ b,String^ q);
	bool checkCode(String^ x);
	void getquizcount(Label^ a, Label^ b);
	node* dospecialquiz(String^ a);
	void insertspecialquiz(String^ a, String^ b);
	void addQuiz(node* cur1,String^ c);
	void addOptions(String^ a,String^ b);
	void getOption(String^ a,TextBox^ b,TextBox^ c,TextBox^ d);
	void getComboData(ComboBox^ a);
	node1* head1 = NULL;
	void extraOptions(String^ x,TextBox^ a,TextBox^ b,TextBox^ c,TextBox^ d);
	void getQuestion(String^ x, DataGridView^ y, BindingSource^ z);
	void addData(String^ x);
	void deleteall();
	void getcomboData(ComboBox^ a);
	void setMarks(DataGridView^ x,BindingSource^ y,String^ z);
	void getBest(Label^ a);
	void yourgetBest(Label^ b,String^ x);
};
