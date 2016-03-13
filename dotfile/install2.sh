cp ~/coding/yale918.github.io/dotfile/.bash_aliases ~/.bash_aliases
cp ~/coding/yale918.github.io/dotfile/.tmux.conf ~/.tmux.conf
cp ~/coding/yale918.github.io/dotfile/lubuntu-rc.xml ~/.config/openbox/lubuntu-rc.xml
cp ~/coding/yale918.github.io/dotfile/.vimrc ~/.vimrc

source ~/.vimrc
source ~/.bash_aliases
openbox --reconfigure
reboot
tmux new -s T1 
