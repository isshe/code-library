
Docker
---
此文档简单介绍Docker, 并且只介绍一些比较核心的. 更多信息参考[docker-detail](./docker-detail.md)

# Docker是什么？
* 基本概念
    * 镜像: Image，一个特殊的文件系统, 一组分层的文件系统的集合。
    * 容器: Container，镜像和容器,类似与类与实例, 以及类似于程序与进程。
    * 仓库: Repository，存镜像的地方。
* Docker是一个开源项目。详见[Github](https://github.com/moby/moby)
* Docker使用Go语言开发，基于Linux内核的`cgroup`和`namespace`, 以及AUFS类的Union FS技术, 对进程进行隔离, 属于`操作系统层面的虚拟化技术`.
* Docker不是虚拟机，容器就是进程。
* Docker不是虚拟机，容器中的应用都应该以前台执行。
* Docker的架构:
![](docker-on-linux.png)

# Docker有什么用？
* 作为一种新兴的虚拟化方式.
* Docker类似与集装箱,对不同的东西进行标准化, 以及封装使其互相独立.
* 常见用途:
  * 对微服务架构的一个一个服务进行封装.
  * 为不同的服务提供不同的应用/运行环境.
  * 

# 如何使用Docker？



# 有哪些优缺点？
* 优点: (通常是和传统的虚拟化技术比较)
  * 对资源的利用率高;
  * 更快速的启动时间;
  * 一致的运行环境;
  * 更好的可迁移性;
    * 由于运行环境一致性,使得服务的迁移变得容易.
  * 更好的可维护性和扩展性;
* 总结
|特性|Docker|虚拟机|
|---|---|---|
| 启动 | 秒级 | 分级 |
| 硬盘使用 | M级 | G级 |
| 性能 | 接近原生 | 若于原生 |
| 系统支持量 | 单机上千 | 一般几十个 | 


# 传统虚拟化技术与Docker的区别?
* 传统虚拟化技术模拟硬件.
![](virtualization.png)
VS
![](docker.png)

# 注意
* **需要超级用户时，使用`gosu`，不用`su`或`sudo`。**

# 拓展
* Linux内核cgroup?
* Linux内核namespace?
* Union FS

# 参考
