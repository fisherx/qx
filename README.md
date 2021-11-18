# qx
====
gbk-utf8 extension for kdb+/q,using  https://github.com/lytsing/gbk-utf8
中文 gbk-utf8 
# Checkout

    $ git clone https://github.com/fisherx/qx.git
    $ cd qx
    $ git submodule init
    $ git submodule update

# Build
## Linux 
    $ gcc -shared -fPIC qx.c -o qx.so
# Windows (例子生成win32 dll,w64 需修改参数)  
    $ build.bat
    

# Usage

  q)\l test.q
  
# Licence

Other parts of this software (e.g. gbk-utf8, Kx k.h) are covered by other licences.
