#include "sqlconnect.h"


sqlconnect::sqlconnect()
{
}

bool sqlconnect::checkadmin(String^ x, String^ y)
{
	con = conx();
	command = gcnew MySqlCommand("Select * from admininfo",con);
	con->Open();
	reader = command->ExecuteReader();
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			if (reader->GetString("username") == x&&reader->GetString("password") == y)
			{
				return true;
			}
		}
		reader->NextResult();
	}
	return false;
}
MySqlConnection^ sqlconnect::conx()
{
	MySqlConnection^ y = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;pwd=sazi;Database=quizgame");
	return y;
}
void sqlconnect::quescount(Label^ x)
{
	con = conx();
	command = gcnew MySqlCommand("Select question from addquestion",con);
	con->Open();
	reader = command->ExecuteReader();
	int counter = 0;
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			counter++;
		}
		reader->NextResult();
		
	}
	x->Text+= counter + "";
}
void sqlconnect::viewquestions(DataGridView^ x, BindingSource^ y)
{
	con = conx();
	adapter = gcnew MySqlDataAdapter("Select * from questioninfo",con);
	DataTable^ table = gcnew DataTable();
	adapter->Fill(table);
	y->DataSource = table;
	x->DataSource = y;
}
void sqlconnect::viewmemers(DataGridView^ x, BindingSource^ y)
{
	con = conx();
	adapter = gcnew MySqlDataAdapter("Select * from userinfo",con);
	DataTable^ table = gcnew DataTable();
	adapter->Fill(table);
	y->DataSource = table;
	x->DataSource = y;
}
void sqlconnect::searchuser(DataGridView^ x, BindingSource^ y, String^ z)
{
	con = conx();
	adapter = gcnew MySqlDataAdapter("Select * from userinfo where username='"+z+"'",con);
	DataTable^ table = gcnew DataTable();
	adapter->Fill(table);
	y->DataSource = table;
	x->DataSource = y;
}
void sqlconnect::deleteuser(String^ x)
{
	con = conx();
	command = gcnew MySqlCommand("Delete from userinfo where username='" + x + "'", con);
	con->Open();
	reader = command->ExecuteReader();
}
void sqlconnect::updateUser(String^ x, String^ username, String^ password, String^ email, String^ address, String^ classx, String^ testsgiven, String^ marksobtained, String^ a, String^ b)
{
	con = conx();
	SpeechSynthesizer^ z = gcnew SpeechSynthesizer();
	z->Rate = -2;
	con = conx();
	command = gcnew MySqlCommand("Select username from userinfo", con);
	con->Open();
	reader = command->ExecuteReader();
	if (x != username)
	{
		while (reader->HasRows)
		{
			while (reader->Read())
			{
				if (reader->GetString("username") == username)
				{
					z->SpeakAsync("UserName already exists");
					return;
				}
			}
			reader->NextResult();
		}
	}
	reader->Close();
	con->Close();
	command = gcnew MySqlCommand("update userinfo set username='"+username+"',password='"+password+"',email='"+email+"',address='"+address+"',class='"+classx+"',testsgiven='"+testsgiven+"',marksobtained='"+marksobtained+"',specialquizgiven='"+a+"',specialquizscores='"+b+"'Where username='"+x+"'",con);
	con->Open();
	reader = command->ExecuteReader();
	z->SpeakAsync("Updated!");
}
void sqlconnect::getuserdata(String^ x, TextBox^ a, TextBox^ b, TextBox^ c, TextBox^ d, TextBox^ e, TextBox^ f, TextBox^ g, TextBox^ h, TextBox^ i)
{
	con = conx();
	command = gcnew MySqlCommand("Select * from userinfo where username='"+x+"'",con);
	con->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		a->Text = reader->GetString("username");
		b->Text = reader->GetString("password");
		c->Text = reader->GetString("email");
		d->Text = reader->GetString("address");
		e->Text = reader->GetString("class");
		f->Text = reader->GetString("testsgiven");
		g->Text = reader->GetString("marksobtained");
		h->Text = reader->GetString("specialquizgiven");
		i->Text = reader->GetString("specialquizscores");
	}
}
void sqlconnect::insertquestion(String^ a, String^ b, String^ c, String^ d, String^ e, String^ f, String^ g, String^ h)
{
	con = conx();
	command = gcnew MySqlCommand("Select question from addquestion",con);
	int counter = 0;
	con->Open();
	reader = command->ExecuteReader();
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			counter++;
		}
		reader->NextResult();
	}
	command = gcnew MySqlCommand("Insert into addquestion values('"+counter+"','"+a+"','"+b+"','"+c+"','"+d+"','"+e+"','"+f+"','"+g+"','"+h+"')",con);
	reader->Close();
	reader = command->ExecuteReader();
	command = gcnew MySqlCommand("Insert into questioninfo values('" + a + "','" + b + "','" + c + "','" + d + "','" + e + "','" + f + "','" + g + "','" + h + "')", con);
	reader->Close();
	reader = command->ExecuteReader();
}
void sqlconnect::deletea(String^ x)
{
	con = conx();
	command = gcnew MySqlCommand("Delete from questioninfo Where question='"+x+"'", con);
	con->Open();
	reader = command->ExecuteReader();
}
void sqlconnect::searchquestion(String^ x, DataGridView^ y, BindingSource^ z)
{
	con = conx();
	adapter = gcnew MySqlDataAdapter("Select * from addquestion where question='"+x+"'",con);
	con->Open();
	DataTable^ table = gcnew DataTable();
	adapter->Fill(table);
	y->DataSource = table;
	z->DataSource = y;

}
void sqlconnect::getupdateQuestion(String^ a, TextBox^ b, TextBox^ c, TextBox^ d, TextBox^ e, TextBox^ f, TextBox^ g)
{
	con = conx();
	command = gcnew MySqlCommand("Select * from addquestion where question='"+a+"'", con);
	con->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		b->Text = reader->GetString("question");
		c->Text = reader->GetString("optiona");
		d->Text = reader->GetString("optionb");
		e->Text = reader->GetString("optionc");
		f->Text = reader->GetString("optiond");
		g->Text = reader->GetString("answer");
	}
}
void sqlconnect::updatequestion(String^ a, String^ b, String^ c, String^ d, String^ e, String^ f, String^ g)
{
	con = conx();
	command = gcnew MySqlCommand("update addquestion set question='"+b+"',optiona='"+c+"',optionb='"+d+"',optionc='"+e+"',optiond='"+f+"',answer='"+g+"' Where question='"+a+"'", con);
	con->Open();
	reader = command->ExecuteReader();
}
void sqlconnect::registera(String^ username, String^ password, String^ email, String^ address, String^ classx, String^ testsgiven, String^ marksobtained, String^ a, String^ b)
{
	con = conx();
	SpeechSynthesizer^ x = gcnew SpeechSynthesizer();
	command = gcnew MySqlCommand("insert into userinfo values('"+username+"','"+password+"','"+email+"','"+address+"','"+classx+"','"+testsgiven+"','"+marksobtained+"','"+a+"','"+b+"')",con);
	MySqlCommand^ command1 = gcnew MySqlCommand("Select username from userinfo", con);
	con->Open();
	MySqlDataReader^ reader1;
	reader1 = command1->ExecuteReader();
	while (reader1->HasRows)
	{
		while (reader1->Read())
		{
			if (reader1->GetString("username") == username)
			{
				x->SpeakAsync("Username already exists");
				return;
			}
		}
		reader1->NextResult();
	}
	reader1->Close();
	reader = command->ExecuteReader();
	x->SpeakAsync("Inserted!");
}
void sqlconnect::insertspecialquiz(String^ a, String^ b, String^ c, String^ d, String^ e, String^ f, String^ g, String^ h, String^ i, String^ j, String^ k, String^ l, String^ m, String^ n, String^ o, String^ p, String^ q, String^ r, String^ s, String^ t, String^ u, String^ v, String^ w, String^ x, String^ y, String^ z, String^ aa, String^ ab, String^ ac, String^ ad, String^ ae)
{
	con = conx();
	SpeechSynthesizer^ synth = gcnew SpeechSynthesizer();
	command = gcnew MySqlCommand("insert into specialquiz values('"+a+"','"+b+"','"+c+"','"+d+"','"+e+"','"+f+"','"+ae+"')",con);
	MySqlCommand^ command1 = gcnew MySqlCommand("select quizcode from specialquiz", con);
	con->Open();
	MySqlDataReader^ reader1 = command1->ExecuteReader();
	while (reader1->HasRows)
	{
		while (reader1->Read())
		{
			if (reader1->GetString("quizcode") == g)
			{
				synth->SpeakAsync("The quiz code is not valid plz enter new one");
				return;
			}
		}
		reader1->NextResult();
	}
	reader1->Close();
	reader = command->ExecuteReader();
	reader->Close();
	command = gcnew MySqlCommand("insert into specialquiz values('" + g + "','" + h + "','" + i + "','" + j + "','" + k + "','" + l + "','" + ae + "')", con);
	reader = command->ExecuteReader();
	reader->Close();
	command = gcnew MySqlCommand("insert into specialquiz values('" + m + "','" + n + "','" + o + "','" + p + "','" + q + "','" + r + "','" + ae + "')", con);
	reader = command->ExecuteReader();
	reader->Close();
	command = gcnew MySqlCommand("insert into specialquiz values('" + s + "','" + t + "','" + u + "','" + v + "','" + w + "','" + x + "','" + ae + "')", con);
	reader = command->ExecuteReader();
	reader->Close();
	command = gcnew MySqlCommand("insert into specialquiz values('" + y + "','" + z + "','" + aa + "','" + ab + "','" + ac + "','" + ad + "','" + ae + "')", con);
	reader = command->ExecuteReader();
	reader->Close();
	synth->SpeakAsync("Special quiz has been inserted");
}
bool sqlconnect::userLogin(String^ x, String^ y)
{
	con = conx();
	command = gcnew MySqlCommand("Select username,password from userinfo",con);
	con->Open();
	reader = command->ExecuteReader();
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			if (reader->GetString("username") == x&&reader->GetString("password") == y)
			{
				return true;
			}
		}
		reader->NextResult();
	}
	return false;
}
void sqlconnect::getquizinfo(Label^ x, Label^ y, String^ z)
{
	con = conx();
	command = gcnew MySqlCommand("Select testsgiven,marksobtained,specialquizgiven,specialquizscores from userinfo where username='"+z+"'",con);
	con->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		x->Text = "tests given are:"+reader->GetString("testsgiven") +"\r\nMarks obtained in tests are:"+ reader->GetString("marksobtained");
		y->Text = "special tests given are:" + reader->GetString("specialquizgiven") + "\r\nMarks obtained in special tests are:" + reader->GetString("specialquizscores");
		break;
	}
}
void sqlconnect::viewUserInfo(String^ x, DataGridView^ y, BindingSource^ z)
{
	con = conx();
	adapter = gcnew MySqlDataAdapter("Select * from userinfo where username='"+x+"'",con);
	con->Open();
	DataTable^ table = gcnew DataTable();
	adapter->Fill(table);
	z->DataSource = table;
	y->DataSource = z;
}
void sqlconnect::getDataUser(String^ a, TextBox^ b, TextBox^ c, TextBox^ d, TextBox^ e, TextBox^ f)
{
	con = conx();
	command = gcnew MySqlCommand("Select * from userinfo where username='"+a+"'", con);
	con->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		b->Text = reader->GetString("username");
		c->Text = reader->GetString("password");
		d->Text = reader->GetString("email");
		e->Text = reader->GetString("address");
		f->Text = reader->GetString("class");
	}
	SpeechSynthesizer^ x = gcnew SpeechSynthesizer();
	x->Rate = -2;
	x->SpeakAsync(a+"Your data is shown in the fields given below edit whatever field you want then click on update");


}
void sqlconnect::update(String^ a, String^ b, String^ c, String^ d, String^ e, String^ f)
{
	SpeechSynthesizer^ x = gcnew SpeechSynthesizer();
	x->Rate = -2;
	con = conx();
	command = gcnew MySqlCommand("Select username from userinfo",con);
	con->Open();
	reader = command->ExecuteReader();
	if (a != b)
	{
		while (reader->HasRows)
		{
			while (reader->Read())
			{
				if (reader->GetString("username") == b)
				{
					x->SpeakAsync("UserName already exists");
					return;
				}
			}
			reader->NextResult();
		}
	}
	reader->Close();
	con->Close();
	command = gcnew MySqlCommand("update userinfo set username='"+b+"',password='"+c+"',email='"+d+"',address='"+e+"',class='"+f+"'where username='"+a+"'",con);
	con->Open();
	reader = command->ExecuteReader();
	x->SpeakAsync("Updated!");
}
node* sqlconnect::doQuiz(String^ difficulty)
{
	con = conx();
	if (difficulty == "")
	{
		command = gcnew MySqlCommand("select * from questioninfo", con);
	}
	else
	{
		command = gcnew MySqlCommand("select * from questioninfo where difficulty='" + difficulty + "'", con);
	}
	con->Open();
	reader = command->ExecuteReader();
	int counter = 0;
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			counter++;
		}
		reader->NextResult();
	}
	int x = 0;
	int t;
	int l=0;
	srand(time(NULL));
label:
	reader->Close();
	reader = command->ExecuteReader();
	t = 0;
	x = rand() % counter;
	while (reader->HasRows)
	{
		while (reader->Read())
		{			
			if (x == t)
			{
				node* cur1 = head;
				while (cur1 != NULL)
				{
					string n = msclr::interop::marshal_as<string>(reader->GetString("question"));
					if (cur1->question == n)
					{
						goto re;
					}
					cur1 = cur1->next;
				}
				node* obj = new node;
				obj->question = msclr::interop::marshal_as<string>(reader->GetString("question"));
				obj->a = msclr::interop::marshal_as<string>(reader->GetString("optiona"));
				obj->b = msclr::interop::marshal_as<string>(reader->GetString("optionb"));
				obj->c = msclr::interop::marshal_as<string>(reader->GetString("optionc"));
				obj->d = msclr::interop::marshal_as<string>(reader->GetString("optiond"));
				obj->answer = msclr::interop::marshal_as<string>(reader->GetString("answer"));
				obj->next = NULL;
				if (head == NULL)
				{
					head = obj;
				}
				else
				{
					node* cur = head;
					while (cur->next != NULL)
					{
						cur = cur->next;
					}
					cur->next = obj;
				}
				l++;
			}
			t++;
		
		}
	re:
		if (true)
		{

		}
		reader->NextResult();
	
	}
	if (l < 10)
	{
		goto label;
	}
	SpeechSynthesizer^ spe = gcnew SpeechSynthesizer();
	spe->Rate = -2;
	spe->Speak("Your quiz has been prepared!");
	return head;
	
}
void sqlconnect::insertquizinfo(String^ a,String^ b,String^ q)
{
	con = conx();
	String^ d;
	String^ e;
	command = gcnew  MySqlCommand("Select testsgiven,marksobtained from userinfo where username='"+b+"'",con);
	con->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		int c = Int32::Parse(reader->GetString("testsgiven"));
		d = reader->GetString("marksobtained")+","+a+"("+q+")";
		c++;
		e = c + "";
		break;
	}
	reader->Close();
	command = gcnew MySqlCommand("update userinfo set testsgiven='"+e+"',marksobtained='"+d+"'where username='"+b+"'",con);
	reader = command->ExecuteReader();
}
bool sqlconnect::checkCode(String^ x)
{
	con = conx();
	command = gcnew MySqlCommand("Select * from specialquiz where quizcode='"+x+"'", con);
	con->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		if (reader->GetString("quizcode") == x)
		{
			return true;
		}
	}
	return false;
}
void sqlconnect::getquizcount(Label^ a, Label^ b)
{
	con = conx();
	command = gcnew MySqlCommand("select testsgiven,specialquizgiven from userinfo", con);
	con->Open();
	reader = command->ExecuteReader();
	int count = 0, count1 = 0;
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			String^ c = reader->GetString("testsgiven");
			String^ d = reader->GetString("specialquizgiven");
			count += Int32::Parse(c);
			count1 += Int32::Parse(d);
		}
		reader->NextResult();
	}
	a->Text ="Total tests given are:"+ count + "";
	b->Text = "Total special quizes given are:"+count1 + "";
}
node* sqlconnect::dospecialquiz(String^ a)
{
	con = conx();
	command = gcnew MySqlCommand("select * from specialquiz where quizcode='"+a+"'", con);
	con->Open();
	reader = command->ExecuteReader();
	int counter = 0;
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			counter++;
		}
		reader->NextResult();
	}
	int x = 0;
	int t;
	int l = 0;
	srand(time(NULL));
label1:
	reader->Close();
	reader = command->ExecuteReader();
	t = 0;
	x = rand() % counter;
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			if (x == t)
			{
				node* cur1 = head;
				while (cur1 != NULL)
				{
					string n = msclr::interop::marshal_as<string>(reader->GetString("question"));
					if (cur1->question == n)
					{
						goto re1;
					}
					cur1 = cur1->next;
				}
				node* obj = new node;
				obj->question = msclr::interop::marshal_as<string>(reader->GetString("question"));
				obj->a = msclr::interop::marshal_as<string>(reader->GetString("optiona"));
				obj->b = msclr::interop::marshal_as<string>(reader->GetString("optionb"));
				obj->c = msclr::interop::marshal_as<string>(reader->GetString("optionc"));
				obj->d = msclr::interop::marshal_as<string>(reader->GetString("optiond"));
				obj->answer = msclr::interop::marshal_as<string>(reader->GetString("answer"));
				obj->next = NULL;
				if (head == NULL)
				{
					head = obj;
				}
				else
				{
					node* cur = head;
					while (cur->next != NULL)
					{
						cur = cur->next;
					}
					cur->next = obj;
				}
				l++;
			}
			t++;
		}
		re1:
		reader->NextResult();

	}
	if (l < 5)
	{
		goto label1;
	}
	SpeechSynthesizer^ spe = gcnew SpeechSynthesizer();
	spe->Rate = -2;
	spe->Speak("Your quiz has been prepared!");
	return head;
}
void sqlconnect::insertspecialquiz(String^ a, String^ b)
{
	con = conx();
	String^ d;
	String^ e;
	command = gcnew  MySqlCommand("Select specialquizgiven,specialquizscores from userinfo where username='" + b + "'", con);
	con->Open();
	reader = command->ExecuteReader();
	while (reader->Read())
	{
		int c = Int32::Parse(reader->GetString("specialquizgiven"));
		d = reader->GetString("specialquizscores") + "," + a;
		c++;
		e = c + "";
		break;
	}
	reader->Close();
	command = gcnew MySqlCommand("update userinfo set specialquizgiven='" + e + "',specialquizscores='" + d + "'where username='" + b + "'", con);
	reader = command->ExecuteReader();
}
void sqlconnect::addQuiz(node* cur1,String^ c)
{
	con = conx();
	con->OpenAsync();
	while (cur1!= NULL)
	{
		String^ a = gcnew String(cur1->question.c_str());
		String^ b = gcnew String(cur1->a.c_str());
		String^ d = gcnew String(cur1->b.c_str());
		String^ e = gcnew String(cur1->c.c_str());
		String^ f = gcnew String(cur1->d.c_str());
		String^ g = gcnew String(cur1->answer.c_str());
		command = gcnew MySqlCommand("insert into specialquiz values('"+a+"','"+b+"','"+d+"','"+e+"','"+f+"','"+g+"','"+c+"')", con);
		reader = command->ExecuteReader();
		cur1 = cur1->next;
		reader->Close();
	}
}
void sqlconnect::addOptions(String^ a, String^ b)
{
	con = conx();
	command = gcnew MySqlCommand("Insert into quizoption values('"+a+"','"+b+"')", con);
	con->OpenAsync(); 
	reader = command->ExecuteReader();
	SpeechSynthesizer^ sp = gcnew SpeechSynthesizer();
	sp->SpeakAsync("Option added");
}
void sqlconnect::getOption(String^ a, TextBox^ b, TextBox^ c, TextBox^ d)
{
	con = conx();
	command = gcnew MySqlCommand("Select * from quizoption where topic='"+a+"'", con);
	con->OpenAsync();
	reader = command->ExecuteReader();
	int counter = 1;
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			if (counter == 1)
			{
				b->Text = reader->GetString("optiontype");
				counter++;
				continue;
			}
			else if (counter == 2)
			{
				c->Text = reader->GetString("optiontype");
				counter++;
				continue;
			}
			else if (counter == 3)
			{
				d->Text = reader->GetString("optiontype");
				goto end;
			}
		}
		reader->NextResult();
	}
end:
	if (true)
	{
		SpeechSynthesizer^ sp = gcnew SpeechSynthesizer();
		sp->SpeakAsync("Done!");
	}

}
void sqlconnect::getComboData(ComboBox^ a)
{
	con = conx();
	command = gcnew MySqlCommand("Select topic from quizoption", con);
	con->OpenAsync();
	reader = command->ExecuteReader();
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			if (a->Items->Contains(reader->GetString("topic")))
			{

			}
			else
			{
				a->Items->Add(reader->GetString("topic"));
			}
		}
		reader->NextResult();
	}
	
}
void sqlconnect::extraOptions(String^ x,TextBox^ a, TextBox^ b, TextBox^ c, TextBox^ d)
{
	con = conx();
	command = gcnew MySqlCommand("Select * from quizoption", con);
	con->Open();
	reader = command->ExecuteReader();
	int e[4];
	for (int i = 0; i < 4; i++)
	{
		e[i] = 0;
	}
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			if (reader->GetString("optiontype") == a->Text&&e[0] == 0)
			{
				e[0] = 1;
			}
			if (reader->GetString("optiontype") == b->Text&&e[1] == 0)
			{
				e[1] = 1;
			}
			if (reader->GetString("optiontype") == c->Text&&e[2] == 0)
			{
				e[2] = 1;
			}
			if (reader->GetString("optiontype") == d->Text&&e[3] == 0)
			{
				e[3] = 1;
			}
		}
		reader->NextResult();
	}
	reader->Close();
	if (e[0] == 0)
	{
		command = gcnew MySqlCommand("Insert into quizoption values('"+a->Text+"','"+x+"')", con);
		reader = command->ExecuteReader();
		reader->Close();
	}
	if (e[1] == 0)
	{
		command = gcnew MySqlCommand("Insert into quizoption values('" + b->Text + "','" + x + "')", con);
		reader = command->ExecuteReader();
		reader->Close();
	}
	if (e[2] == 0)
	{
		command = gcnew MySqlCommand("Insert into quizoption values('" + c->Text + "','" + x + "')", con);
		reader = command->ExecuteReader();
		reader->Close();
	}
	if (e[3] == 0)
	{
		command = gcnew MySqlCommand("Insert into quizoption values('" + d->Text + "','" + x + "')", con);
		reader = command->ExecuteReader();
		reader->Close();
	}
}
void sqlconnect::getQuestion(String^ x, DataGridView^ y, BindingSource^ z)
{
	con = conx();
	adapter = gcnew MySqlDataAdapter("Select * from addquestion where topic='"+x+"'", con);
	DataTable^ table = gcnew DataTable();
	adapter->Fill(table);
	z->DataSource = table;
	y->DataSource = z;
	SpeechSynthesizer^ sp = gcnew SpeechSynthesizer();
	sp->Rate = -2;
	sp->SpeakAsync("Done");
}
void sqlconnect::addData(String^ x)
{
	con = conx();
	int c = Int32::Parse(x);
	command = gcnew MySqlCommand("Select * from addquestion where id=" + c, con);
	con->Open();
	reader = command->ExecuteReader();
	array<System::String ^>^ arr = gcnew array<System::String ^>(8);
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			arr[0]=reader->GetString("question");
			arr[1] = reader->GetString("optiona");
			arr[2] = reader->GetString("optionb");
			arr[3] = reader->GetString("optionc");
			arr[4] = reader->GetString("optiond");
			arr[5] = reader->GetString("answer");
			arr[6] = reader->GetString("difficulty");
			arr[7] = reader->GetString("topic");
		}
		reader->NextResult();
	}
	reader->Close();
	command = gcnew MySqlCommand("insert into questioninfo values('"+arr[0]+"','"+arr[1]+"','"+arr[2]+"','"+arr[3]+"','"+arr[4]+"','"+arr[5]+"','"+arr[6]+"','"+arr[7]+"')", con);
	reader = command->ExecuteReader();
	SpeechSynthesizer^ sp = gcnew SpeechSynthesizer();
	sp->Rate = -2;
	sp->SpeakAsync("Data Added");
}
void sqlconnect::deleteall()
{
	con = conx();
	command = gcnew MySqlCommand("Delete from questioninfo", con);
	con->Open();
	reader = command->ExecuteReader();
	SpeechSynthesizer^ sp = gcnew SpeechSynthesizer();
	sp->Rate = -2;
	sp->SpeakAsync("Deleted");
}
void sqlconnect::getcomboData(ComboBox^ a)
{
	con = conx();
	command = gcnew MySqlCommand("Select topic from addquestion", con);
	con->OpenAsync();
	reader = command->ExecuteReader();
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			if (a->Items->Contains(reader->GetString("topic")))
			{

			}
			else
			{
				a->Items->Add(reader->GetString("topic"));
			}
		}
		reader->NextResult();
	}
}
void sqlconnect::setMarks(DataGridView^ x, BindingSource^ y, String^ z)
{
	con = conx();
	command = gcnew MySqlCommand("Select * from userinfo where username='"+z+"'",con);
	con->Open();
	reader = command->ExecuteReader();
	int counter = 1;
	while (reader->Read())
	{
		DataGridViewTextBoxColumn ^ col1 = gcnew DataGridViewTextBoxColumn;
		col1->Name = "Username";
		x->Columns->Add(col1);
		x->Rows->Add();
		x->Rows[0]->Cells[0]->Value = z;
		String^ a = gcnew String(reader->GetString("marksobtained"));
		string b = msclr::interop::marshal_as<string>(a);
		int h = b.length();
		while (h!=0)
		{
			DataGridViewTextBoxColumn ^col = gcnew DataGridViewTextBoxColumn;
			col->Name = "Quiz " + counter;
			x->Columns->Add(col);
			int d=b.find_first_of(",");
			String^ c = gcnew String(b.substr(0, d).c_str());
			x->Rows[0]->Cells[counter]->Value = c;
			if (d==0)
			b = b.erase(0, d+1);
			else
				b = b.erase(0, d);
			counter++;
			h--;
		}
	}

}
void sqlconnect::getBest(Label^ a)
{
	con = conx();
	command = gcnew MySqlCommand("Select * from userinfo", con);
	con->Open();
	reader = command->ExecuteReader();
	int e;
	int g = 0;
	while (reader->HasRows)
	{
		while (reader->Read())
		{
			String^ c = reader->GetString("marksobtained");
			string d = msclr::interop::marshal_as<string>(c);
			e = d.length();
			d = d.erase(0, 1);
			if (reader->GetString("marksobtained") != "")
			for (int i = e; i > 0; i--)
			{
				int f = d.find_first_of(",");
				c = gcnew String(d.substr(0, 1).c_str());
				d = d.erase(0, f + 1);
				if (g < Int32::Parse(c))
				{
					g = Int32::Parse(c);
					a->Text= "name:\r\n"+reader->GetString("username")+"\r\n";
				}

			}
			
		}
		reader->NextResult();
	}
	a->Text += "marks:\r\n"+g + "";
}
void sqlconnect::yourgetBest(Label^ b,String^ x)
{
	con = conx();
	command = gcnew MySqlCommand("Select * from userinfo where username='"+x+"'", con);
	con->Open();
	reader = command->ExecuteReader();
	b->Text = "Your name:\r\n"+x+"\r\nYour Best:\r\n";
	int e;
	int g=0;
	while (reader->Read())
	{
		String^ c = reader->GetString("marksobtained");
		string d = msclr::interop::marshal_as<string>(c);
		e = d.length();
		d = d.erase(0, 1);
		for (int i = e; i > 0; i--)
		{
			int f = d.find_first_of(",");
			c = gcnew String(d.substr(0, 1).c_str());
			d = d.erase(0, f+1);
			if (g<Int32::Parse(c))
			g = Int32::Parse(c);

		}
		b->Text += g + "";
	}




}

