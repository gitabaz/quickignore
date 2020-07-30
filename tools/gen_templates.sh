FILELIST=../external/templates/templates/*.gitignore
for f in $FILELIST
do
    #xxd -i $f >> ../src/templates.h
    xxd -i $f | sed -e "s/___external_templates_templates_/template_/" | sed -e "s/_gitignore//" >> ../src/templates.h
done
