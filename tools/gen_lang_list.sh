printf "#ifndef LANG_LIST_H\n#define LANG_LIST_H\n\n#define NUM_LANGS %s\n\n" `ls ../external/templates/templates/*.gitignore | wc -l` > ../src/lang_list.h
ls ../external/templates/templates/*.gitignore | cut -f 5 -d '/' | cut -f 1 -d '.' | sed -e "s/\(.*\)/    \"\1\",/" | sed -e "\$s/,/\n};/" | sed -e "1s/    \"/char* lang_list[]={\n    \"/" | sed -e "s/[A-Z]/\L&/g" >> ../src/lang_list.h
printf "\n#endif" >> ../src/lang_list.h
