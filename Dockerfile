FROM ubuntu:bionic
# https://blog.conan.io/2020/06/17/Conan-Docker-Images.html
RUN apt-get -qq update && apt-get -qq install -y -no-install-recommends \
build-essential \
wget \
git \
libc6-dev \
gcc
# && rm -rf /var/lib/apt/lists/*

RUN wget \ 
--no-check-certificate \
--quiet \
-O /opt/gcc-${GCC_VERSION}.tar.gz \
https://github.com/gcc-mirror/gcc/archive/releases/gcc-${GCC_VERSION}.tar.gz && tar zxf /opt/gcc-${GCC_VERSION}.tar.gz -C /opt && cd /opt/gcc-releases-gcc-${GCC_VERSION} && ./configure --prefix=/usr/local \
--enable-languages=c,c++ \
--disable-bootstrap && make -j "$(nproc)" && make install-strip && cd - && rm -rf /opt/gcc* && apt-get remove -y gcc gcc-5 && update-alternatives --install /usr/bin/gcc gcc /usr/local/bin/gcc 100

RUN groupadd 1001 -g 1001 && useradd -ms /bin/bash conan -g 1001 -G 1000,2000,999

RUN wget --no-check-certificate --quiet -O /tmp/pyenv-installer \
https://github.com/pyenv/pyenv-installer/raw/master/bin/pyenv-installer && chmod +x /tmp/pyenv-installer && /tmp/pyenv-installer

RUN pip install -q --no-cache-dir conan conan-package-tools cmake==${CMAKE_VERSION} && chown -R conan:1001 /opt/pyenv && find /opt/pyenv -iname __pycache__ -print0 | xargs -0 rm -rf && update-alternatives --install /usr/bin/python python /opt/pyenv/shims/python 100

USER conan
WORKDIR /home/conan

RUN mkdir -p /home/conan/.conan && printf 'eval "$(pyenv init -)"\n' >>~/.bashrc && printf 'eval "$(pyenv virtualenv-init -)"\n' >>~/.bashrc

FROM base as release

RUN pip install -U conan conan-package-tools
