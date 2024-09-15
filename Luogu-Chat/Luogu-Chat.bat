@echo off
setlocal
title=NBS
REM 定义变量
set URL1=https://github.com/GCSG01/LG_Show_Massger/archive/refs/heads/main.zip
set URL2=https://github.com/OI-liyifan202201/Luogu-Bot-GPT/archive/refs/heads/main.zip
set DEST=C:\NBS
set FILE1=%DEST%\LG_Show_Massger.zip
set FILE2=%DEST%\Luogu-Bot-GPT.zip

REM 创建目标目录（如果不存在）
if not exist %DEST% mkdir %DEST%

REM 下载文件
curl -L -o %FILE1% %URL1%
curl -L -o %FILE2% %URL2%

REM 解压文件
powershell -command "Expand-Archive -Path '%FILE1%' -DestinationPath '%DEST%'"
powershell -command "Expand-Archive -Path '%FILE2%' -DestinationPath '%DEST%'"

REM 删除压缩文件
del %FILE1%
del %FILE2%

REM 提示完成
echo Download, extraction, and cleanup complete!
endlocal
