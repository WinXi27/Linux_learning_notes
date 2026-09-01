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
cd /dir01/dir001P
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
find -type d -iname ".txt" -size -100M
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
: q! # 不保存,强制退出

date
date +"格式化字符串"
# %Y 2026
# %y 26
# %m 12
# %d 31
# %H 24
# %M 60
# %S 60 

awk
sort 

useradd user01 # 添加user01用户,不会自动创建家目录
userdel user01 # 删除user01用户,但是不删除user01家目录
useradd -m user01 # 添加user01用户,自动创建家目录(make directory)
userdel -r user01 # 删除user01用户,同时删除user01家目录
useradd -d /user01/ -g group01 user01 # 指定用户家目录位置 指定组

groupadd test
groupdel test
usermod -aG user01 group01 # 将user01用户添加到group01组中

groups user01 # 查看user01的所属组
id user01 # 查看user01的uid gid groups

getent passwd 
getend group

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
# 进程基础
程序=存放在硬盘上的静态文件
进程=把这个程序加载到内存,CPU正在运行的实例
同一个程序可以产生多个进程
进程是操作系统最小资源分配单位
## 终端tty与伪终端pts
终端tty: 真实的终端,物理控制台终端
伪终端pts(pseudo-terminal): 虚拟终端
 
## command
```bash
who # 显示所有交互式登录终端会话
ps # 默认只显示当前终端自己启动的进程
ps -a # 显示系统上所有绑定了终端设备的进程
ps aux # 查看系统所有进程
top # 实时查看进程信息
nohup sleep 100 & # 后台运行sleep进程,不挂断
jobs # 查看当前终端的所有运行进程
fg %1 # 把编号为1的进程拿到前台

echo $$ # 查看当前Shell的PID
tty # 查看当前使用的终端的目录位置

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

