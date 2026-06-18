# mysql介绍
MySql就是**存数据+查数据**的工具
# 下载安装mysql
```bash
sudo apt update
sudo apt insyall mysql-server
systemctl start mysql
systemctl status mysql
mysql # 进入mysql
```
# MySQL层级结构:
MySQL(数据库服务)
 ↓
database(库)
 ↓
table(表)
 ↓
row(数据)
# SQL语法
```bash
sudo mysql

create database testdb;
create table students(
    id INT,
    name TEXT
);
show databases;
show tables;
drop table if exits students;
select database();
insert into student values
    ("lixiang",100),
    ("WinXi",90);

```
