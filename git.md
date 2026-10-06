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
工作区   →   暂存区   →   本地仓库  →   远程仓库
       add         commit        push
## git command 
```bash
关于配置
git config --list 
git config --list | grep "user"
git config --list | grep "proxy"
git config --global user.name "设置新的用户名"
git config --global user.email "设置新的用户邮箱"
git config --global http.proxy "设置新的http代理地址"
git config --global https.proxy "设置新的https代理地址"
git config --global --unset http.proxy

关于远程仓库
git remote 
git remote -v
git remote add "远程仓库别名" "远程仓库地址"
git remote set-url "需要修改的远程仓库别名" "新的远程仓库地址"

关于工作流程
git init 
git status
git clone "url"
git branch b01 && git switch b01
git switch -c b01
git add .
git commit -m "备注" 
git merge b01
git push -u origin main 
git push origin main 
git push 

关于日志
git log # 查看git提交日志
git log --oneline # 简介的显示提交历史
git log --oneline --graph --decorate --all # 图形化显示所有提交
git show HEAD # 查看最后一次提交

关于恢复/撤销
git restore test01.txt # 使用暂存区文件恢复test01.txt文件
git restore --staged test01.txt # 取消test01.txt的暂存
git reset --soft HEAD~1 # 取消提交
git reset HEAD~1 # 取消提交,取消暂存
git reset --hard HEAD~1 # 取消提交,取消暂存,取消修改
```
# 从github连接仓库的三种方式 
https && ssh && github CLI
## https
用账号+密码/Token来访问仓库 (github不再支持使用账号+密码push代码,需要使用账号+token)
## ssh
用密钥连接github
eg: git clone git@github.com:user/repo.git
# ./.gitignore文件
git的./.gitignore文件中存放着的都是不能被git追踪的文件(git add .的时候会自动忽略的文件)

如果一个文件test01.txt之前提交过了,怎么才可以不被追踪?
- 创建./.gitignore文件,在这个文件中写入test01.txt文件名字
- 执行git rm --cached test01.txt将追踪的文件从git版本库移除
- 执行git add . 和 git commit 和 git push 同步到远程仓库
  
# git冲突
当两个分支(你的本地main和别人的分支)修改了同一个文件的同一处位置,合并时git无法自动判断保留那一份,就会产生冲突
产生冲突后手动编辑文件,删掉冲突标记,写好最终内容,然后git add .和git commit和git push 