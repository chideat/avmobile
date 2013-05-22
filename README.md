avmobile(imobiledevice)是基于libimobiledevice跨平台基于苹果各种移动设备的开源库

它不需要任何辅助工具和越狱即可与苹果移动设备进行交互，例如访问设备、文件系统、获取设备信息、备份/还原系统、管理桌面、管理应用程序(安装/升级等)、管理地址薄、日历、书签等、同步多媒体

官方网站：http://www.libimobiledevice.org/

由于该工程默认是在linux c运行的，对于win32用户使用起来不是非常方便

所以我们对代码进行了少量的修改，让他支持win32，工程的sln就是vs的工程文件

该项目依赖 libxml2-2.9.1,libiconv-1.14,zlib-1.2.7, 需要自己下载编译

如果你不会编译配置环境

请到 https://sourceforge.net/projects/avplayer/files/develop/ 

下载以下基于mingw的开发包:

http://sourceforge.net/projects/avplayer/files/develop/Libxml2-dev/libxml2-2.9.1.7z/download

http://sourceforge.net/projects/avplayer/files/develop/Iconv-dev/libiconv-1.14.7z/download

http://sourceforge.net/projects/avplayer/files/develop/Zlib-dev/zlib-1.2.7.7z/download

http://sourceforge.net/projects/avplayer/files/develop/MinGW32-GCC-dev/mingw32.7z/download

分别解压到项目的目录下, 编译即可.

