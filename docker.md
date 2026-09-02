# docker简介
docker是开源的容器化平台
# docker基础命令
```bash
docker --version # 查看docker版本
docker info # 查看系统信息
docker images # 查看所有本地镜像
docker search nginx # 搜索镜像,默认是latest
docker pull nginx # 拉取镜像
docker pull nginx:1.25 # 指定拉取镜像的版本
docker images -q # 查看所有镜像只有ID
docker rmi nginx # 删除镜像
docker rmi 镜像ID # 更具镜像ID删除镜像
docker ps # 查看正在运行的容器
docker ps -a # 查看所有容器(运行+已停止)
docker ps -aq # 查看所有容器,但是只打印容器ID
```
# 运行/进入/删除 容器
```bash
docker run
-d 后台守护运行
-p 主机端口:容器端口(端口映射)
--name "设置容器名字" # 自定义容器名字
-v 主机目录:容器目录 # 数据挂载
--rm # 容器停止之后自动删除
-it # 交互式终端

eg:
docker run -d --name "nginx01" -p 8080:80 nginx # 运行nginx镜像,这个容器名字是nginx01,端口映射关系是本机8080:容器的80端口 这个容器在后台运行 

docker run -it --rm --name "centos01" centos /bin/bash # 交互式进入centos镜像的容器,用完就退出删除容器

docker exec -it nginx01 /bin/bash # 进入正在运行的容器

docker stop nginx01 # 停止运行nginx01容器
docker kill nginx01 # 强制杀死nginx1容器
docker start nginx01 # 启动nginx01容器
docker restart nginx01 # 重启nginx01容器
docker rm nginx01 # 删除停止的容器
docker rm -f nginx01 # 强制删除运行中的容器
docker rm -f $(docker ps -aq) # 一次性删除所有容器

docker inspect my_nginx 查看my_nginx的json文件
```
# 导入导出镜像
```bash
docker save -o nginx.tar nginx:1.25 # 导出镜像为压缩包
docker load -i nginx.tar # 本地导入镜像
```
# docker日志
```bash
docker logs nginx01 # 查看nginx01容器的日志
docker logs -f nginx01 # 实时查看nginx01的日志
docker logs --tail 100 ngin01 # 查看最后10行
```
# docker拷贝文件
```bash
docker cp test.txt nginx01:/usr/share/nginx/html/
docker cp nginx01:/etc/nginx/nginx.conf ./
```