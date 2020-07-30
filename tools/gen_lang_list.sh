printf "#define NUM_LANGS %s\n" `ls ../external/templates/templates/*.gitignore | wc -l` > ../src/lang_list.h
ls ../external/templates/templates/*.gitignore | cut -f 5 -d '/' | cut -f 1 -d '.' | sed -e "s/\(.*\)/    \"\1\",/" | sed -e "\$s/,/\n};/" | sed -e "1s/    \"/char* lang_list[]={\n    \"/" >> ../src/lang_list.h
