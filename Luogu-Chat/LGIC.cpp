#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
bool is_e(const string& name) {
	FILE* file = fopen(name.c_str(), "r");
	if (file) {
		fclose(file);
		return true;
	} else {
		return false;
	}
}
void User()//写入Chat-GPT私信与私信接收的Json 
{
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
        ":on": "~ 已开启自动回复",
        ":off": "~ 已关闭自动回复",
        ":clear": "~ 已清除上下文",
        ":help": "~ 帮助文档位于 https://luogu.codingoier.work/bot/help.pdf"
    },
    "tips": "请你装作(指的是ChatGPT)叫{root}，{洛谷中的一个蒟蒻用户}，并且是一个在洛谷的谷民(OIer)中的蒟蒻，我(指的是对方)也是一个OIer中的巨佬并且我叫{username}，你非常幽默，喜欢用洛谷词典的词，如（ Orz（膜拜）, STO（膜拜）,巨佬,蒟蒻（非常弱的人）,%%%（膜拜）, 臭名昭著)，这是我给你发送的消息，请你完成一条在洛谷私信中的回答（尽量20字以内）："
}
)";
		fout.close();
	fstream f1out;
	f1out.open("C:/NBS/LGIC-main/LG-Chat/src/settings.json",ios::out);
	if(f1out.is_open())
	{
		f1out<<R"({
    "_uid": )";
		f1out<<name<<",\n";
		f1out<<R"("__client_id": ")";
		f1out<<cookie<<"\",\n";
	f1out<<R"(
    "ai-key": "sk-sLUVtvFrlmzGZu1ZE3F4D2462dFe48Bc9f3c9aFd000dE701",
    "max_token": 4096,
    "command": {
        ":on": "~ 已开启自动回复",
        ":off": "~ 已关闭自动回复",
        ":clear": "~ 已清除上下文",
        ":help": "~ 帮助文档位于 https://luogu.codingoier.work/bot/help.pdf"
    },
    "tips": "请你装作(指的是ChatGPT)叫{root}，{洛谷中的一个蒟蒻用户}，并且是一个在洛谷的谷民(OIer)中的蒟蒻，我(指的是对方)也是一个OIer中的巨佬并且我叫{username}，你非常幽默，喜欢用洛谷词典的词，如（ Orz（膜拜）, STO（膜拜）,巨佬,蒟蒻（非常弱的人）,%%%（膜拜）, 臭名昭著)，这是我给你发送的消息，请你完成一条在洛谷私信中的回答（尽量20字以内）："
}
)";
		f1out.close();
}
//
//
//
void down()
{
    const string zipPath = "C:/NBS/LGIC.zip";
    const string destPath = "C:/NBS";
    const string url = "https://github.com/GCSG01/LGIC/archive/refs/heads/main.zip";

    for (int i = 1; i <= 3; ++i) {
        if (is_e("C:/NBS/LGIC-main/LG-AIChat/src/settings.json") && 
            is_e("C:/NBS/LGIC-main/LG-Chat/src/settings.json")) {
            break;
        }
        system(("curl -L -o " + zipPath + " " + url).c_str());
        system(("powershell -command \"Expand-Archive -Path '" + zipPath + "' -DestinationPath '" + destPath + "'\"").c_str());
    }
    User();
}

int main()
{
	system("title NBS");
	if(!is_e("C:/NBS/LGIC-main/LG-AIChat/src/settings.json")||
	   !is_e("C:/NBS/LGIC-main/LG-Chat/src/settings.json"))
		down();
	else start();
	return 0;
}
/*
@echo off
setlocal
REM 定义变量
set URL1=https://github.com/GCSG01/LGIC/archive/refs/heads/main.zip
set DEST=C:\NBS
set FILE1=%DEST%\LGIC.zip

REM 下载文件
curl -L -o %FILE1% %URL1%

REM 解压文件
powershell -command "Expand-Archive -Path '%FILE1%' -DestinationPath '%DEST%'"

REM 删除压缩文件
del %FILE1%

REM 提示完成
echo Download, extraction, and cleanup complete!
endlocal
*/
