code # 01一些快捷键
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
systemctl is-enabled ssh # 查看ssh服务是否开机自启

systemctl list-units --type=service # 查看所有服务
systemctl list-units --type=service --state=running # 查看所有正在运行的服务
systemctl list-unit-files --type=service # 查看系统一共装了什么服务
```
# curl 
curl是命令行中的浏览器
作用: 向一个**网页/IP:端口**发送请求,获取内容
```bash
curl localhost:8080 # 
cur -o index.html https://baidu.com
cur -c cookies.txt https://baidu.com
```
# wget
下载文件的工具
```bash
wget -O myfile.zip http://xxx/fiel.zip # 下载并改名
wget -P ~/downloads/ http://xxx/fiel.zip # 指定保存目录
wget -c http://xxx/fiel.zip # 断点连续
wget -b http://xxx/fiel.zip # 后台下载
```
# ping && ip && ss
```bash
ping baidu.com
ip a # 查看IP地址

ss
# 协议类型
-t # 显示tcp
-u # 显示udp
# 显示范围
-a # all
-l # listening只显示监听中的套接字
# 详细信息
-e, --extended：显示扩展信息（UID、inode、状态细节）
-p, --processes：显示进程名 / PID（哪个程序在用这个端口，需 root）
-o, --options：显示TCP 计时器（重传、保活、超时）
-i, --info：显示TCP 内部信息（拥塞窗口、RTT 等）
-m, --memory：显示套接字内存占用
-s, --summary：显示整体统计（TCP/UDP/UNIX 各多少连接）
# IP版本
-4 # 只显示IPv4
-6 # 只显示IPv6
```
# ps && kill
```bash
ps -e # 显示所有进程
ps -e -f # 显示所有进程详细信息
ps -a # 只显示有终端的进程(不显示守护进程)
kill -9 进程ID # 强制关闭进程
```
# top
```bash

```
# /etc/目录
|目录 |作用  |备注 |
|:---:|:---:|:---:|
|/etc/hosts |本地静态域名表|优先级比DNS高|
|/etc/passwd|所有用户信息|用户名 UID 主目录 登录Shell|
|/etc/shadow|真正存加密密码|只有root可读|
|/etcgroup|存用户组列表||
|/etc/sudoers|谁能sudo,权限怎么分配|必须visudo编辑|
|/etc/hostname|本机主机名||
|/etc/profile|所有用户登录时都会执行的全局环境变量||
|/etc/bashrc|所有用户打开bash时执行||
|/etc/nginx/|Nginx主配置目录||
|/etc/ufw/|防火墙配置目录||
|/etc/ssh/sshd_config|SSH远程登录配置|改端口,禁止密码登录...|

# 环境变量
```bash
env # 显示所有环境变量
env |  grep "PATH" # 查看PATH环境变量

echo $SHELL # 当前用的Shell
echo $PATH # 系统找命令的路径
echo $HOME # 当前用户的主目录
echo $USER # 当前用户名
echo $PWD # 当前工作目录
echo $LANG # 语言/字符编码
echo $PS1 # 当前命令行提示符样式

export MY_NAME="Win_Xi" # 添加临时环境变量

配置在~/.bashrc 针对当前用户有效 # 永久添加环境变量
配置在/etc/profile 针对所有用户有效 # 永久添加环境变量
```
# hostnamectl 
```bash
hostnamectl set-hostname "新名字"
hostnamectl # 等价于hostnamectl status
hostnamectl status
```
# 关于网络
现状: 我的电脑是Window操作系统
在Windows上的VMware运行虚拟机Linux操作系统
使用VSCode远程连接Linux操作系统
```bash
Windows（宿主机）
│
├── Clash(端口7897)
│
├── VSCode
│
└── VMware
      │
      └── Linux（虚拟机）
-------------------------

7897是clash开的一个"接待窗口",地址是127.0.0.1:7897
谁想使用代理,就把网络请求发送给这个窗口,eg:
Chrome
 ↓
7897
 ↓
Clash
 ↓
代理服务器
 ↓
Google服务器

一个关键问题: Linux的数据包到了宿主机(Windows)后,会不会走clash代理?
答案: 不一定
有些配置会走clash: Linux-->Windows-->clash-->国外代理--->目标服务器
有些配置不会走clash: Linux-->Windows-->目标服务器
```
# 给Linux操作系统配置clash代理
假设clash的端口是7897
```bash
1. 打开clash的允许局域网连接(因为clash默认只会监听127.0.0.1本机)
2. 在CMD上使用ipconfig查看Windows内网IP地址
3. 在Linux操作系统上执行:
vim ~/zshrc # 打开zsh的用户配置文件,写入下面内容
export http_proxy="http://Windows内网地址:7897" # 所有http协议的软件都会发送给这个7897地址
export https_proxy="http://Windows内网地址:7897" # 所有https协议的软件都会发送给7897这个端口
4. 写入后,执行source ~/.zshrc 
5. 使用curl ip.sb查看出口服务器的公网地址
6. 使用curl cip.cc/公网IP地址 查看公网地址对应的地区是不是国外
```

