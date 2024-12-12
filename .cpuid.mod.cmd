savedcmd_/home/vagrant/cpuid/cpuid.mod := printf '%s\n'   cpuid.o | awk '!x[$$0]++ { print("/home/vagrant/cpuid/"$$0) }' > /home/vagrant/cpuid/cpuid.mod
