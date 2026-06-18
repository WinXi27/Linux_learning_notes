# ssh(Secure Shell)介绍
ssh=安全的加密网络协议,用于在不安全网络上执行远程命令和传输数据
## 一些概念
ssh=客户端工具,用来发送连接
sshd=服务端程序,用来接收连接
SSH=一种机密通信协议
主要工作:
- SSH用来远程连接
- 需要sshd(服务端)
- 默认22端口
- ssh user_name@ip 发起连接
- 建立加密通道
## ssh客户端&&服务端模型
客户端(ssh)
↓ 加密连接
SSH协议
↓ 
服务器(sshd)
## ssh命令
```bash
ssh user_name@ip "ls" # 远程执行命令
scp ./file01.txt user_name@ip:/path # 文件传输
```
# git
Git是一个免费开源的**分布式版本控制系统**
![alt text](image.png)
## git command 
```bash
git config --list # 查看所有配置
git config --global user.name # 查看用户名
git config --global user.name "new_user_name" # 设置新的用户名
git config --global user.email # 查看用户邮箱
git config --global user.email "new_user_email" # 设置你用户邮箱
git clone "url" # 克隆仓库到本地
git remote -v # 查看所有连接的远程地址
git remote set-url origin "地址" # 设置origin的仓库地址
git remote add origin "地址" # 添加origin的地址
git init # 把当前文件夹初始化为仓库
git branch # 查看所有分支
git branch "branch_name" # 创建一条新分支
git switch "branch_name" # 切换到指定分支
git switch -c "branch_name" # 创建并切换到新分支
git add . # 把所有修改的文件加入暂存区
git commit -m "提交备注" # 把暂存区的修改提交到本地仓库
git status # 查看状态
git log # 查看提交历史
git merge "branch_name" # 把指定分支与main分支合并
git restore test01.md # 把暂存区的文件覆盖工作区
git restore --staged test01.md # 把暂存区的文件撤回到工作区
git reset --soft HEAD~1 # 撤销最近的一次提交
git reset --hard HEAD~1 # 彻底回退到上一个版本
git reset --mixed HEAD~1 # 撤销提交,代码回到工作区
```
# 从github连接仓库的三种方式
https && ssh && github CLI
## https
用账号+密码/Token来访问仓库
## ssh
用密钥连接github
eg: git clone git@github.com:user/repo.git
### ssh简介
ssh是一种**安全远程通信协议(protocol)**
作用: 在不安全网络上安全地远程操作另一台机器
需要:
- 客户端(ssh client)
- 服务端(ssh server,通常叫sshd)
## github CLI
github官方的命令行工具
# git的配置信息
git的配置分为两类: 全局配置&&本地仓库配置
```bash
git config --list # 查看所有配置信息
<<<<<<< HEAD
git config --global user.name ""
```
=======
git config --global user.email # 查看邮箱
git config --global user.name "WinXi" # 修改用户名
```

>>>>>>> e9c4ec7 (6.18第一次提交git add .)
