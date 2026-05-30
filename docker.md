# docker简介
docker是开源的容器化平台
# docker命令
```bash
docker --version # 查看版本
docker info # 查看系统信息
docker images # 查看所有本地镜像
docker search nginx # 搜索镜像
docker pull nginx:latest # 拉取最新版本的bginx镜像
docker pull nginx:1.25-alpine # 指定轻量级版本
docker rmi 镜像名/镜像ID
docker rmi -f 镜像名/镜像ID # 强制删除
docker run -d -p 主机端口:容器端口 --name "容器名" 镜像名
docker run -d -p 8080:80 --name "my_nginx" nginx
docker ps # 查看正在运行的容器
docker ps -a # 查看所有容器
docker stop 容器名/容器ID
docker start 容器名/容器ID
docker restart 容器名/容器ID
docker rm 容器名/容器ID
docker rm -f 容器名/容器ID
docker exec -it 容器名/容器ID /bin/bash
docker logs 容器名/容器ID 
docker logs -f 容器名/容器ID 

docker run -d -p 8080:80 \
    -v /宿主机/路径:/容器/路径 \
    --name "my_nginx" nginx




````