# 01一些快捷键
```bash
Ctrl+l 清屏
Ctrl+C 终止执行
Ctrl+A 光标移动到开头
Ctrl+E 光标移动到结尾
Ctrl+U 清除光标前所有内容(up to the line start)
Ctrl+K 清除光标后所有内容(kill to line end)
Tab 自动补全
```
# 基础命令
```bash
cd /dir01/dir001
ls -a -l -t -r -h /path
mkdir ./dir01
mkdir -p /lixiang/dir01/dir001
rm file01.txt
rm -r dir01
rm -i file01.txt # 删除之前询问
rm -f file01.txt # 强制删除
cp source.txt dest.txt # 复制文件到目标位置
cp -r source dest # 复制文件夹到目标位置
mv source dest # 移动文件到目标位置
mv old_name new_name # 重命名文件
man ls # 查看ls命令的详细用法
echo "string" # 显示字符串
echo &PATH # 输出PATH环境变量
which ls # 查找可执行文件位置
which -a python # 查找所有python的可执行文件位置
touch file01.txt
cat file01.txt
grep "warning" file01.txt
tail -10 file01.txt # 查看最后10行内容
tail -n 10 file01.txt
head -15 file01.txt # 查看开头15行内容
head -n 15 file01.txt
more /dir01/file01.txt # 分页查看文件内容
less /dri01/file01.txt # 反向分页查看文件内容
find -type d -name ".txt" -size -100M
ln -s 路径1 路径2
hostname
hostnamectl set-name lixiang
ip addr show # 就是 ip addr
ip addr show ech0

vim file01.txt
: set number # 设置数字 
: set nonumber # 不设置数字
: w # 保存
: wq # 保存并且退出

data 
data +"格式化字符串"
# %Y 2026
# %y 26
# %m 12
# %d 31
# %H 24
# %M 60
# %S 60 

awk
sort 

groupadd test
groupdel test
useradd -d /user01/ -g group01 user01
groups user01
id user01

getent passwd
getend group
usermod

chmod u=rwx,g=rw,o=x hello.txt
chmod -R u=rwx,g=rw,o=x dir01
chmod 531 file01.txt
chmod -R 531 die01

chown lixiang:group01 file01.txt
chown -R lixiang:group01 dir01

```

# apt
advanced package tool,高级工具包 
```bash
apt update 
apt upgrade
apt install 包名
apt remove 包名
apt purge 包名
apt list --upgradable 
apt list --installed 
apt search 包名
apt clear # 清理安装包缓存
apt autoremove # 清理无用的依赖包
apt show 包名
``` 

# systemctl
```bash
systemctl status ssh
systemctl start ssh
systemctl stop ssh
systemctl enable ssh
systemctl disable ssh
systemctl restart ssh

```

# 一些环境变量
```bash
echo $SHELL # 当前用的Shell
echo $PATH # 系统找命令的路径
echo $HOME # 当前用户的主目录
echo $USER # 当前用户名
echo $PWD # 当前工作目录
echo $LANG # 语言/字符编码
echo $PS1 # 当前命令行提示符样式
```
