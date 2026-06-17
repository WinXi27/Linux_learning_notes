# git介绍
Git是一个免费开源的**分布式版本控制系统**
![alt text](image.png)
# git命令
```bash
git config --list # 查看用户配置
git config --global user.name "用户名" # 设置用户签名 
git config --global user.email "用户邮箱" # 设置用户邮箱
git remote set-url origin "你的仓库地址"

git init # 把一个文件夹变为一个git仓库

git branch # 查看所有分支
git branch feature/note-git # 创建一个dev01分支
git switch main # 切换到main分支
git switch -c feature/note-git # 创建并切换到分支

git add 文件名 # 把文件添加到暂存区
git add . # 添加所有文件

git commit -m "备注" # 把暂存区的修改提交到本地仓库

git status # 查看当前文件状态

git log # 查看提交历史

git restore test01.md # 把暂存区的文件覆盖工作区
git restore --staged test01.md # 把暂存区的文件撤回到工作区

git reset --soft HEAD~1 # 撤销最近的一次提交
git reset --hard HEAD~1 # 彻底回退到上一个版本
git reset --mixed HEAD~1 # 撤销提交,代码回到工作区
```
# git工作的命令流程
```bash
git switch -c b01 
# 开发修改
git status 
git add .
git commit -m "备注"
git switch main
git pull origin main
git merge b01
git push origin main
```



