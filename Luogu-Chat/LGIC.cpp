#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void User();//д��CHat-GPT˽�� 
void User1();//д��˽�Ž��� 
int main()
{
	system("title=NBS");
	User();
	User1(); 
	return 0;
}
void User()
{
	system("if not exist %DEST% mkdir %DEST%");
	//REM ����Ŀ��Ŀ¼����������ڣ�
	string name,cookie;
	cout<<"UID:";
	cin>>name;
	cout<<"__client_id(cookie):";
	cin>>cookie;
	fstream fout;
	fout.open("C:/NBS/LGIC-main/LG-AIChat/src/settings.json",ios::out);
	if(fout.is_open())
	{
		fout<<R"({
    "_uid": )";
		fout<<name<<",\n";
		fout<<R"("__client_id": ")";
		fout<<cookie<<"\",\n";
	fout<<R"(
    "ai-key": "sk-sLUVtvFrlmzGZu1ZE3F4D2462dFe48Bc9f3c9aFd000dE701",
    "max_token": 4096,
    "command": {
        ":on": "~ �ѿ����Զ��ظ�",
        ":off": "~ �ѹر��Զ��ظ�",
        ":clear": "~ �����������",
        ":help": "~ �����ĵ�λ�� https://luogu.codingoier.work/bot/help.pdf"
    },
    "tips": "����װ��(ָ����ChatGPT)��{root}��{����е�һ���X�m�û�}��������һ������ȵĹ���(OIer)�е��X�m����(ָ���ǶԷ�)Ҳ��һ��OIer�еľ��в����ҽ�{username}����ǳ���Ĭ��ϲ������ȴʵ�Ĵʣ��磨 Orz��Ĥ�ݣ�, STO��Ĥ�ݣ�,����,�X�m���ǳ������ˣ�,%%%��Ĥ�ݣ�, ��������)�������Ҹ��㷢�͵���Ϣ���������һ�������˽���еĻش𣨾���20�����ڣ���"
}
)";
		fout.close();
	}
}
void User()
{
	system("if not exist %DEST% mkdir %DEST%");
	//REM ����Ŀ��Ŀ¼����������ڣ�
	string name,cookie;
	cout<<"UID:";
	cin>>name;
	cout<<"__client_id(cookie):";
	cin>>cookie;
	fstream fout;
	fout.open("C:/NBS/LGIC-main/LG-Chat/src/settings.json",ios::out);
	if(fout.is_open())
	{
		fout<<R"({
    "_uid": )";
		fout<<name<<",\n";
		fout<<R"("__client_id": ")";
		fout<<cookie<<"\",\n";
	fout<<R"(
    "ai-key": "sk-sLUVtvFrlmzGZu1ZE3F4D2462dFe48Bc9f3c9aFd000dE701",
    "max_token": 4096,
    "command": {
        ":on": "~ �ѿ����Զ��ظ�",
        ":off": "~ �ѹر��Զ��ظ�",
        ":clear": "~ �����������",
        ":help": "~ �����ĵ�λ�� https://luogu.codingoier.work/bot/help.pdf"
    },
    "tips": "����װ��(ָ����ChatGPT)��{root}��{����е�һ���X�m�û�}��������һ������ȵĹ���(OIer)�е��X�m����(ָ���ǶԷ�)Ҳ��һ��OIer�еľ��в����ҽ�{username}����ǳ���Ĭ��ϲ������ȴʵ�Ĵʣ��磨 Orz��Ĥ�ݣ�, STO��Ĥ�ݣ�,����,�X�m���ǳ������ˣ�,%%%��Ĥ�ݣ�, ��������)�������Ҹ��㷢�͵���Ϣ���������һ�������˽���еĻش𣨾���20�����ڣ���"
}
)";
		fout.close();
	}
}
/*
@echo off
setlocal
REM �������
set URL1=https://github.com/GCSG01/LGIC/archive/refs/heads/main.zip
set DEST=C:\NBS
set FILE1=%DEST%\LGIC.zip

REM �����ļ�
curl -L -o %FILE1% %URL1%

REM ��ѹ�ļ�
powershell -command "Expand-Archive -Path '%FILE1%' -DestinationPath '%DEST%'"

REM ɾ��ѹ���ļ�
del %FILE1%

REM ��ʾ���
echo Download, extraction, and cleanup complete!
endlocal
*/
