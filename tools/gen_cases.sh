printf "#ifndef GET_TEMPLATE_H\n#define GET_TEMPLATE_H\n\n" > ../src/get_template.h
printf "#include \"templates.h\"\n\n" >> ../src/get_template.h
printf "void get_template(int idx, unsigned char** template_text, unsigned int* template_text_len) {\n" >> ../src/get_template.h
printf "    switch (idx) {\n" >> ../src/get_template.h
FILELIST=../external/templates/templates/*.gitignore
i=0
for f in $FILELIST
do
    printf "        case %d:\n            *template_text = " $i >> ../src/get_template.h
    printf "%s;" $f | cut -f 5 -d '/' | sed -e "s/.gitignore//" | sed -e "s/\(.*\)/template_\1/" | sed -e "s/[^a-zA-Z0-9_;]/_/g" >> ../src/get_template.h
    printf "            *template_text_len = " $i >> ../src/get_template.h
    printf "%s_len;" $f | cut -f 5 -d '/' | sed -e "s/.gitignore//" | sed -e "s/\(.*\)/template_\1/" | sed -e "s/[^a-zA-Z0-9_;]/_/g" >> ../src/get_template.h
    printf "            break;\n" >> ../src/get_template.h

    i=$(($i + 1))
done
printf "    }\n}\n" >> ../src/get_template.h
printf "\n#endif" >> ../src/get_template.h
