#ifndef GET_TEMPLATE_H
#define GET_TEMPLATE_H

#include "templates.h"

void get_template(int idx, unsigned char** template_text, unsigned int* template_text_len) {
    switch (idx) {
        case 0:
            *template_text = template_1C_Bitrix;
            *template_text_len = template_1C_Bitrix_len;
            break;
        case 1:
            *template_text = template_1C;
            *template_text_len = template_1C_len;
            break;
        case 2:
            *template_text = template_Actionscript;
            *template_text_len = template_Actionscript_len;
            break;
        case 3:
            *template_text = template_Ada;
            *template_text_len = template_Ada_len;
            break;
        case 4:
            *template_text = template_Adobe;
            *template_text_len = template_Adobe_len;
            break;
        case 5:
            *template_text = template_AdvancedInstaller;
            *template_text_len = template_AdvancedInstaller_len;
            break;
        case 6:
            *template_text = template_AdventureGameStudio;
            *template_text_len = template_AdventureGameStudio_len;
            break;
        case 7:
            *template_text = template_A_Frame;
            *template_text_len = template_A_Frame_len;
            break;
        case 8:
            *template_text = template_Agda;
            *template_text_len = template_Agda_len;
            break;
        case 9:
            *template_text = template_AL;
            *template_text_len = template_AL_len;
            break;
        case 10:
            *template_text = template_AlteraQuartusII;
            *template_text_len = template_AlteraQuartusII_len;
            break;
        case 11:
            *template_text = template_Altium;
            *template_text_len = template_Altium_len;
            break;
        case 12:
            *template_text = template_Amplify;
            *template_text_len = template_Amplify_len;
            break;
        case 13:
            *template_text = template_Android;
            *template_text_len = template_Android_len;
            break;
        case 14:
            *template_text = template_AndroidStudio;
            *template_text_len = template_AndroidStudio_len;
            break;
        case 15:
            *template_text = template_Angular;
            *template_text_len = template_Angular_len;
            break;
        case 16:
            *template_text = template_Anjuta;
            *template_text_len = template_Anjuta_len;
            break;
        case 17:
            *template_text = template_Ansible;
            *template_text_len = template_Ansible_len;
            break;
        case 18:
            *template_text = template_ApacheCordova;
            *template_text_len = template_ApacheCordova_len;
            break;
        case 19:
            *template_text = template_ApacheHadoop;
            *template_text_len = template_ApacheHadoop_len;
            break;
        case 20:
            *template_text = template_AppBuilder;
            *template_text_len = template_AppBuilder_len;
            break;
        case 21:
            *template_text = template_AppceleratorTitanium;
            *template_text_len = template_AppceleratorTitanium_len;
            break;
        case 22:
            *template_text = template_AppCode_all;
            *template_text_len = template_AppCode_all_len;
            break;
        case 23:
            *template_text = template_AppCode;
            *template_text_len = template_AppCode_len;
            break;
        case 24:
            *template_text = template_AppCode_iml;
            *template_text_len = template_AppCode_iml_len;
            break;
        case 25:
            *template_text = template_AppEngine;
            *template_text_len = template_AppEngine_len;
            break;
        case 26:
            *template_text = template_AptanaStudio;
            *template_text_len = template_AptanaStudio_len;
            break;
        case 27:
            *template_text = template_Arcanist;
            *template_text_len = template_Arcanist_len;
            break;
        case 28:
            *template_text = template_Archive;
            *template_text_len = template_Archive_len;
            break;
        case 29:
            *template_text = template_Archives;
            *template_text_len = template_Archives_len;
            break;
        case 30:
            *template_text = template_ArchLinuxPackages;
            *template_text_len = template_ArchLinuxPackages_len;
            break;
        case 31:
            *template_text = template_ASPNETCore;
            *template_text_len = template_ASPNETCore_len;
            break;
        case 32:
            *template_text = template_Assembler;
            *template_text_len = template_Assembler_len;
            break;
        case 33:
            *template_text = template_ATE;
            *template_text_len = template_ATE_len;
            break;
        case 34:
            *template_text = template_AtmelStudio;
            *template_text_len = template_AtmelStudio_len;
            break;
        case 35:
            *template_text = template_ATS;
            *template_text_len = template_ATS_len;
            break;
        case 36:
            *template_text = template_Audio;
            *template_text_len = template_Audio_len;
            break;
        case 37:
            *template_text = template_AutomationStudio;
            *template_text_len = template_AutomationStudio_len;
            break;
        case 38:
            *template_text = template_Autotools;
            *template_text_len = template_Autotools_len;
            break;
        case 39:
            *template_text = template_Autotools_strict;
            *template_text_len = template_Autotools_strict_len;
            break;
        case 40:
            *template_text = template_AWR;
            *template_text_len = template_AWR_len;
            break;
        case 41:
            *template_text = template_Backup;
            *template_text_len = template_Backup_len;
            break;
        case 42:
            *template_text = template_Ballerina;
            *template_text_len = template_Ballerina_len;
            break;
        case 43:
            *template_text = template_baserCMS;
            *template_text_len = template_baserCMS_len;
            break;
        case 44:
            *template_text = template_Basic;
            *template_text_len = template_Basic_len;
            break;
        case 45:
            *template_text = template_Batch;
            *template_text_len = template_Batch_len;
            break;
        case 46:
            *template_text = template_Bazaar;
            *template_text_len = template_Bazaar_len;
            break;
        case 47:
            *template_text = template_Bazel;
            *template_text_len = template_Bazel_len;
            break;
        case 48:
            *template_text = template_Bitrise;
            *template_text_len = template_Bitrise_len;
            break;
        case 49:
            *template_text = template_Bitrix;
            *template_text_len = template_Bitrix_len;
            break;
        case 50:
            *template_text = template_BitTorrent;
            *template_text_len = template_BitTorrent_len;
            break;
        case 51:
            *template_text = template_Blackbox;
            *template_text_len = template_Blackbox_len;
            break;
        case 52:
            *template_text = template_Bloop;
            *template_text_len = template_Bloop_len;
            break;
        case 53:
            *template_text = template_bluej;
            *template_text_len = template_bluej_len;
            break;
        case 54:
            *template_text = template_Bookdown;
            *template_text_len = template_Bookdown_len;
            break;
        case 55:
            *template_text = template_Bower;
            *template_text_len = template_Bower_len;
            break;
        case 56:
            *template_text = template_BricxCC;
            *template_text_len = template_BricxCC_len;
            break;
        case 57:
            *template_text = template_Buck;
            *template_text_len = template_Buck_len;
            break;
        case 58:
            *template_text = template_Cake;
            *template_text_len = template_Cake_len;
            break;
        case 59:
            *template_text = template_CakePHP2;
            *template_text_len = template_CakePHP2_len;
            break;
        case 60:
            *template_text = template_CakePHP3;
            *template_text_len = template_CakePHP3_len;
            break;
        case 61:
            *template_text = template_CakePHP;
            *template_text_len = template_CakePHP_len;
            break;
        case 62:
            *template_text = template_Calabash;
            *template_text_len = template_Calabash_len;
            break;
        case 63:
            *template_text = template_Carthage;
            *template_text_len = template_Carthage_len;
            break;
        case 64:
            *template_text = template_certificates;
            *template_text_len = template_certificates_len;
            break;
        case 65:
            *template_text = template_Ceylon;
            *template_text_len = template_Ceylon_len;
            break;
        case 66:
            *template_text = template_CFWheels;
            *template_text_len = template_CFWheels_len;
            break;
        case 67:
            *template_text = template_C__;
            *template_text_len = template_C___len;
            break;
        case 68:
            *template_text = template_C;
            *template_text_len = template_C_len;
            break;
        case 69:
            *template_text = template_ChefCookbook;
            *template_text_len = template_ChefCookbook_len;
            break;
        case 70:
            *template_text = template_Chocolatey;
            *template_text_len = template_Chocolatey_len;
            break;
        case 71:
            *template_text = template_Clean;
            *template_text_len = template_Clean_len;
            break;
        case 72:
            *template_text = template_CLion_all;
            *template_text_len = template_CLion_all_len;
            break;
        case 73:
            *template_text = template_CLion;
            *template_text_len = template_CLion_len;
            break;
        case 74:
            *template_text = template_CLion_iml;
            *template_text_len = template_CLion_iml_len;
            break;
        case 75:
            *template_text = template_Clojure;
            *template_text_len = template_Clojure_len;
            break;
        case 76:
            *template_text = template_Cloud9;
            *template_text_len = template_Cloud9_len;
            break;
        case 77:
            *template_text = template_CMake;
            *template_text_len = template_CMake_len;
            break;
        case 78:
            *template_text = template_CocoaPods;
            *template_text_len = template_CocoaPods_len;
            break;
        case 79:
            *template_text = template_Cocos2dx;
            *template_text_len = template_Cocos2dx_len;
            break;
        case 80:
            *template_text = template_CocosCreator;
            *template_text_len = template_CocosCreator_len;
            break;
        case 81:
            *template_text = template_CodeBlocks;
            *template_text_len = template_CodeBlocks_len;
            break;
        case 82:
            *template_text = template_CodeComposerStudio;
            *template_text_len = template_CodeComposerStudio_len;
            break;
        case 83:
            *template_text = template_Code;
            *template_text_len = template_Code_len;
            break;
        case 84:
            *template_text = template_CodeIgniter;
            *template_text_len = template_CodeIgniter_len;
            break;
        case 85:
            *template_text = template_Codeio;
            *template_text_len = template_Codeio_len;
            break;
        case 86:
            *template_text = template_Code_Java;
            *template_text_len = template_Code_Java_len;
            break;
        case 87:
            *template_text = template_CodeKit;
            *template_text_len = template_CodeKit_len;
            break;
        case 88:
            *template_text = template_CodeSniffer;
            *template_text_len = template_CodeSniffer_len;
            break;
        case 89:
            *template_text = template_CoffeeScript;
            *template_text_len = template_CoffeeScript_len;
            break;
        case 90:
            *template_text = template_CommonLisp;
            *template_text_len = template_CommonLisp_len;
            break;
        case 91:
            *template_text = template_Composer;
            *template_text_len = template_Composer_len;
            break;
        case 92:
            *template_text = template_CompressedArchive;
            *template_text_len = template_CompressedArchive_len;
            break;
        case 93:
            *template_text = template_Compressed;
            *template_text_len = template_Compressed_len;
            break;
        case 94:
            *template_text = template_Compression;
            *template_text_len = template_Compression_len;
            break;
        case 95:
            *template_text = template_Concrete5;
            *template_text_len = template_Concrete5_len;
            break;
        case 96:
            *template_text = template_Coq;
            *template_text_len = template_Coq_len;
            break;
        case 97:
            *template_text = template_Cordova;
            *template_text_len = template_Cordova_len;
            break;
        case 98:
            *template_text = template_CraftCMS;
            *template_text_len = template_CraftCMS_len;
            break;
        case 99:
            *template_text = template_Crashlytics;
            *template_text_len = template_Crashlytics_len;
            break;
        case 100:
            *template_text = template_CRBasic;
            *template_text_len = template_CRBasic_len;
            break;
        case 101:
            *template_text = template_Crossbar;
            *template_text_len = template_Crossbar_len;
            break;
        case 102:
            *template_text = template_Crystal;
            *template_text_len = template_Crystal_len;
            break;
        case 103:
            *template_text = template_Csharp;
            *template_text_len = template_Csharp_len;
            break;
        case 104:
            *template_text = template_CUDA;
            *template_text_len = template_CUDA_len;
            break;
        case 105:
            *template_text = template_CVS;
            *template_text_len = template_CVS_len;
            break;
        case 106:
            *template_text = template_DartEditor;
            *template_text_len = template_DartEditor_len;
            break;
        case 107:
            *template_text = template_Dart;
            *template_text_len = template_Dart_len;
            break;
        case 108:
            *template_text = template_Database;
            *template_text_len = template_Database_len;
            break;
        case 109:
            *template_text = template_Data;
            *template_text_len = template_Data_len;
            break;
        case 110:
            *template_text = template_DataRecovery;
            *template_text_len = template_DataRecovery_len;
            break;
        case 111:
            *template_text = template_DBeaver;
            *template_text_len = template_DBeaver_len;
            break;
        case 112:
            *template_text = template_Defold;
            *template_text_len = template_Defold_len;
            break;
        case 113:
            *template_text = template_Delphi;
            *template_text_len = template_Delphi_len;
            break;
        case 114:
            *template_text = template_Dframe;
            *template_text_len = template_Dframe_len;
            break;
        case 115:
            *template_text = template_D;
            *template_text_len = template_D_len;
            break;
        case 116:
            *template_text = template_Diff;
            *template_text_len = template_Diff_len;
            break;
        case 117:
            *template_text = template_direnv;
            *template_text_len = template_direnv_len;
            break;
        case 118:
            *template_text = template_DiskImage;
            *template_text_len = template_DiskImage_len;
            break;
        case 119:
            *template_text = template_Django;
            *template_text_len = template_Django_len;
            break;
        case 120:
            *template_text = template_DM;
            *template_text_len = template_DM_len;
            break;
        case 121:
            *template_text = template_DocFx;
            *template_text_len = template_DocFx_len;
            break;
        case 122:
            *template_text = template_Docpress;
            *template_text_len = template_Docpress_len;
            break;
        case 123:
            *template_text = template_Docz;
            *template_text_len = template_Docz_len;
            break;
        case 124:
            *template_text = template_dotenv;
            *template_text_len = template_dotenv_len;
            break;
        case 125:
            *template_text = template_DotfilesSh;
            *template_text_len = template_DotfilesSh_len;
            break;
        case 126:
            *template_text = template_DotnetCore;
            *template_text_len = template_DotnetCore_len;
            break;
        case 127:
            *template_text = template_DotSettings;
            *template_text_len = template_DotSettings_len;
            break;
        case 128:
            *template_text = template_Dreamweaver;
            *template_text_len = template_Dreamweaver_len;
            break;
        case 129:
            *template_text = template_Dropbox;
            *template_text_len = template_Dropbox_len;
            break;
        case 130:
            *template_text = template_Drupal7;
            *template_text_len = template_Drupal7_len;
            break;
        case 131:
            *template_text = template_Drupal8;
            *template_text_len = template_Drupal8_len;
            break;
        case 132:
            *template_text = template_Drupal;
            *template_text_len = template_Drupal_len;
            break;
        case 133:
            *template_text = template_e2studio;
            *template_text_len = template_e2studio_len;
            break;
        case 134:
            *template_text = template_Eagle;
            *template_text_len = template_Eagle_len;
            break;
        case 135:
            *template_text = template_easybook;
            *template_text_len = template_easybook_len;
            break;
        case 136:
            *template_text = template_Eclipse;
            *template_text_len = template_Eclipse_len;
            break;
        case 137:
            *template_text = template_EiffelStudio;
            *template_text_len = template_EiffelStudio_len;
            break;
        case 138:
            *template_text = template_ElasticBeanstalk;
            *template_text_len = template_ElasticBeanstalk_len;
            break;
        case 139:
            *template_text = template_Elisp;
            *template_text_len = template_Elisp_len;
            break;
        case 140:
            *template_text = template_Elixir;
            *template_text_len = template_Elixir_len;
            break;
        case 141:
            *template_text = template_Elm;
            *template_text_len = template_Elm_len;
            break;
        case 142:
            *template_text = template_Emacs;
            *template_text_len = template_Emacs_len;
            break;
        case 143:
            *template_text = template_Ember;
            *template_text_len = template_Ember_len;
            break;
        case 144:
            *template_text = template_Ensime;
            *template_text_len = template_Ensime_len;
            break;
        case 145:
            *template_text = template_EPiServer;
            *template_text_len = template_EPiServer_len;
            break;
        case 146:
            *template_text = template_Erlang;
            *template_text_len = template_Erlang_len;
            break;
        case 147:
            *template_text = template_Espresso;
            *template_text_len = template_Espresso_len;
            break;
        case 148:
            *template_text = template_Executable;
            *template_text_len = template_Executable_len;
            break;
        case 149:
            *template_text = template_Exercism;
            *template_text_len = template_Exercism_len;
            break;
        case 150:
            *template_text = template_ExpressionEngine;
            *template_text_len = template_ExpressionEngine_len;
            break;
        case 151:
            *template_text = template_ExtJs;
            *template_text_len = template_ExtJs_len;
            break;
        case 152:
            *template_text = template_Fancy;
            *template_text_len = template_Fancy_len;
            break;
        case 153:
            *template_text = template_fastlane;
            *template_text_len = template_fastlane_len;
            break;
        case 154:
            *template_text = template_Finale;
            *template_text_len = template_Finale_len;
            break;
        case 155:
            *template_text = template_Firebase;
            *template_text_len = template_Firebase_len;
            break;
        case 156:
            *template_text = template_FlashBuilder;
            *template_text_len = template_FlashBuilder_len;
            break;
        case 157:
            *template_text = template_Flask;
            *template_text_len = template_Flask_len;
            break;
        case 158:
            *template_text = template_FlexBuilder;
            *template_text_len = template_FlexBuilder_len;
            break;
        case 159:
            *template_text = template_Flex;
            *template_text_len = template_Flex_len;
            break;
        case 160:
            *template_text = template_floobits;
            *template_text_len = template_floobits_len;
            break;
        case 161:
            *template_text = template_Flutter;
            *template_text_len = template_Flutter_len;
            break;
        case 162:
            *template_text = template_FontForge;
            *template_text_len = template_FontForge_len;
            break;
        case 163:
            *template_text = template_Font;
            *template_text_len = template_Font_len;
            break;
        case 164:
            *template_text = template_ForceDotCom;
            *template_text_len = template_ForceDotCom_len;
            break;
        case 165:
            *template_text = template_ForgeGradle;
            *template_text_len = template_ForgeGradle_len;
            break;
        case 166:
            *template_text = template_Fortran;
            *template_text_len = template_Fortran_len;
            break;
        case 167:
            *template_text = template_FreePascal;
            *template_text_len = template_FreePascal_len;
            break;
        case 168:
            *template_text = template_fsharp;
            *template_text_len = template_fsharp_len;
            break;
        case 169:
            *template_text = template_FuelPHP;
            *template_text_len = template_FuelPHP_len;
            break;
        case 170:
            *template_text = template_FuseTools;
            *template_text_len = template_FuseTools_len;
            break;
        case 171:
            *template_text = template_Games;
            *template_text_len = template_Games_len;
            break;
        case 172:
            *template_text = template_Gcov;
            *template_text_len = template_Gcov_len;
            break;
        case 173:
            *template_text = template_Genero4GL;
            *template_text_len = template_Genero4GL_len;
            break;
        case 174:
            *template_text = template_Geth;
            *template_text_len = template_Geth_len;
            break;
        case 175:
            *template_text = template_GGTS;
            *template_text_len = template_GGTS_len;
            break;
        case 176:
            *template_text = template_GIS;
            *template_text_len = template_GIS_len;
            break;
        case 177:
            *template_text = template_GitBook;
            *template_text_len = template_GitBook_len;
            break;
        case 178:
            *template_text = template_Git;
            *template_text_len = template_Git_len;
            break;
        case 179:
            *template_text = template_Godot;
            *template_text_len = template_Godot_len;
            break;
        case 180:
            *template_text = template_Go;
            *template_text_len = template_Go_len;
            break;
        case 181:
            *template_text = template_GoodSync;
            *template_text_len = template_GoodSync_len;
            break;
        case 182:
            *template_text = template_GPG;
            *template_text_len = template_GPG_len;
            break;
        case 183:
            *template_text = template_Gradle;
            *template_text_len = template_Gradle_len;
            break;
        case 184:
            *template_text = template_Grails;
            *template_text_len = template_Grails_len;
            break;
        case 185:
            *template_text = template_greenfoot;
            *template_text_len = template_greenfoot_len;
            break;
        case 186:
            *template_text = template_Groovy;
            *template_text_len = template_Groovy_len;
            break;
        case 187:
            *template_text = template_grunt;
            *template_text_len = template_grunt_len;
            break;
        case 188:
            *template_text = template_GWT;
            *template_text_len = template_GWT_len;
            break;
        case 189:
            *template_text = template_Haskell;
            *template_text_len = template_Haskell_len;
            break;
        case 190:
            *template_text = template_Helm;
            *template_text_len = template_Helm_len;
            break;
        case 191:
            *template_text = template_Hexo;
            *template_text_len = template_Hexo_len;
            break;
        case 192:
            *template_text = template_HOL;
            *template_text_len = template_HOL_len;
            break;
        case 193:
            *template_text = template_HomeAssistant;
            *template_text_len = template_HomeAssistant_len;
            break;
        case 194:
            *template_text = template_Homebrew;
            *template_text_len = template_Homebrew_len;
            break;
        case 195:
            *template_text = template_HSP;
            *template_text_len = template_HSP_len;
            break;
        case 196:
            *template_text = template_Hugo;
            *template_text_len = template_Hugo_len;
            break;
        case 197:
            *template_text = template_HyperledgerComposer;
            *template_text_len = template_HyperledgerComposer_len;
            break;
        case 198:
            *template_text = template_IAREmbeddedWorkBench;
            *template_text_len = template_IAREmbeddedWorkBench_len;
            break;
        case 199:
            *template_text = template_IAR_EWARM;
            *template_text_len = template_IAR_EWARM_len;
            break;
        case 200:
            *template_text = template_IAR;
            *template_text_len = template_IAR_len;
            break;
        case 201:
            *template_text = template_IDAPro;
            *template_text_len = template_IDAPro_len;
            break;
        case 202:
            *template_text = template_Idris;
            *template_text_len = template_Idris_len;
            break;
        case 203:
            *template_text = template_IGORPro;
            *template_text_len = template_IGORPro_len;
            break;
        case 204:
            *template_text = template_Images;
            *template_text_len = template_Images_len;
            break;
        case 205:
            *template_text = template_infer;
            *template_text_len = template_infer_len;
            break;
        case 206:
            *template_text = template_InforCMS;
            *template_text_len = template_InforCMS_len;
            break;
        case 207:
            *template_text = template_InforCRM;
            *template_text_len = template_InforCRM_len;
            break;
        case 208:
            *template_text = template_Intellij_all;
            *template_text_len = template_Intellij_all_len;
            break;
        case 209:
            *template_text = template_Intellij;
            *template_text_len = template_Intellij_len;
            break;
        case 210:
            *template_text = template_Intellij_iml;
            *template_text_len = template_Intellij_iml_len;
            break;
        case 211:
            *template_text = template_Ionic3;
            *template_text_len = template_Ionic3_len;
            break;
        case 212:
            *template_text = template_JabRef;
            *template_text_len = template_JabRef_len;
            break;
        case 213:
            *template_text = template_Java;
            *template_text_len = template_Java_len;
            break;
        case 214:
            *template_text = template_Java_Web;
            *template_text_len = template_Java_Web_len;
            break;
        case 215:
            *template_text = template_JBoss_4_2_3_GA;
            *template_text_len = template_JBoss_4_2_3_GA_len;
            break;
        case 216:
            *template_text = template_JBoss4;
            *template_text_len = template_JBoss4_len;
            break;
        case 217:
            *template_text = template_JBoss6;
            *template_text_len = template_JBoss6_len;
            break;
        case 218:
            *template_text = template_JBoss_6_x;
            *template_text_len = template_JBoss_6_x_len;
            break;
        case 219:
            *template_text = template_JBoss;
            *template_text_len = template_JBoss_len;
            break;
        case 220:
            *template_text = template_JDeveloper;
            *template_text_len = template_JDeveloper_len;
            break;
        case 221:
            *template_text = template_Jekyll;
            *template_text_len = template_Jekyll_len;
            break;
        case 222:
            *template_text = template_JEnv;
            *template_text_len = template_JEnv_len;
            break;
        case 223:
            *template_text = template_JetBrains_all;
            *template_text_len = template_JetBrains_all_len;
            break;
        case 224:
            *template_text = template_JetBrains;
            *template_text_len = template_JetBrains_len;
            break;
        case 225:
            *template_text = template_JetBrains_iml;
            *template_text_len = template_JetBrains_iml_len;
            break;
        case 226:
            *template_text = template_JGiven;
            *template_text_len = template_JGiven_len;
            break;
        case 227:
            *template_text = template_Jigsaw;
            *template_text_len = template_Jigsaw_len;
            break;
        case 228:
            *template_text = template_JMeter;
            *template_text_len = template_JMeter_len;
            break;
        case 229:
            *template_text = template_Joe;
            *template_text_len = template_Joe_len;
            break;
        case 230:
            *template_text = template_Joomla;
            *template_text_len = template_Joomla_len;
            break;
        case 231:
            *template_text = template_jspm;
            *template_text_len = template_jspm_len;
            break;
        case 232:
            *template_text = template_Julia;
            *template_text_len = template_Julia_len;
            break;
        case 233:
            *template_text = template_JupyterNotebooks;
            *template_text_len = template_JupyterNotebooks_len;
            break;
        case 234:
            *template_text = template_JustCode;
            *template_text_len = template_JustCode_len;
            break;
        case 235:
            *template_text = template_Kate;
            *template_text_len = template_Kate_len;
            break;
        case 236:
            *template_text = template_KDevelop4;
            *template_text_len = template_KDevelop4_len;
            break;
        case 237:
            *template_text = template_KDiff3;
            *template_text_len = template_KDiff3_len;
            break;
        case 238:
            *template_text = template_Keil;
            *template_text_len = template_Keil_len;
            break;
        case 239:
            *template_text = template_Kentico;
            *template_text_len = template_Kentico_len;
            break;
        case 240:
            *template_text = template_KiCad;
            *template_text_len = template_KiCad_len;
            break;
        case 241:
            *template_text = template_Kirby2;
            *template_text_len = template_Kirby2_len;
            break;
        case 242:
            *template_text = template_Kobalt;
            *template_text_len = template_Kobalt_len;
            break;
        case 243:
            *template_text = template_Kohana;
            *template_text_len = template_Kohana_len;
            break;
        case 244:
            *template_text = template_KomodoEdit;
            *template_text_len = template_KomodoEdit_len;
            break;
        case 245:
            *template_text = template_KonyVisualizer;
            *template_text_len = template_KonyVisualizer_len;
            break;
        case 246:
            *template_text = template_Kotlin;
            *template_text_len = template_Kotlin_len;
            break;
        case 247:
            *template_text = template_LabVIEW;
            *template_text_len = template_LabVIEW_len;
            break;
        case 248:
            *template_text = template_LabVIEWNXG;
            *template_text_len = template_LabVIEWNXG_len;
            break;
        case 249:
            *template_text = template_LAMP;
            *template_text_len = template_LAMP_len;
            break;
        case 250:
            *template_text = template_Laravel;
            *template_text_len = template_Laravel_len;
            break;
        case 251:
            *template_text = template_LaTeX;
            *template_text_len = template_LaTeX_len;
            break;
        case 252:
            *template_text = template_Lazarus;
            *template_text_len = template_Lazarus_len;
            break;
        case 253:
            *template_text = template_Leiningen;
            *template_text_len = template_Leiningen_len;
            break;
        case 254:
            *template_text = template_LemonStand;
            *template_text_len = template_LemonStand_len;
            break;
        case 255:
            *template_text = template_Less;
            *template_text_len = template_Less_len;
            break;
        case 256:
            *template_text = template_LiberoSOC;
            *template_text_len = template_LiberoSOC_len;
            break;
        case 257:
            *template_text = template_librarian_chef;
            *template_text_len = template_librarian_chef_len;
            break;
        case 258:
            *template_text = template_LibreOffice;
            *template_text_len = template_LibreOffice_len;
            break;
        case 259:
            *template_text = template_Lilypond;
            *template_text_len = template_Lilypond_len;
            break;
        case 260:
            *template_text = template_Linux;
            *template_text_len = template_Linux_len;
            break;
        case 261:
            *template_text = template_Lithium;
            *template_text_len = template_Lithium_len;
            break;
        case 262:
            *template_text = template_LocalStack;
            *template_text_len = template_LocalStack_len;
            break;
        case 263:
            *template_text = template_Logtalk;
            *template_text_len = template_Logtalk_len;
            break;
        case 264:
            *template_text = template_LSspice;
            *template_text_len = template_LSspice_len;
            break;
        case 265:
            *template_text = template_LTspice;
            *template_text_len = template_LTspice_len;
            break;
        case 266:
            *template_text = template_Lua;
            *template_text_len = template_Lua_len;
            break;
        case 267:
            *template_text = template_LyX;
            *template_text_len = template_LyX_len;
            break;
        case 268:
            *template_text = template_m2e;
            *template_text_len = template_m2e_len;
            break;
        case 269:
            *template_text = template_macOS;
            *template_text_len = template_macOS_len;
            break;
        case 270:
            *template_text = template_Magento1;
            *template_text_len = template_Magento1_len;
            break;
        case 271:
            *template_text = template_Magento2;
            *template_text_len = template_Magento2_len;
            break;
        case 272:
            *template_text = template_Magento;
            *template_text_len = template_Magento_len;
            break;
        case 273:
            *template_text = template_Magic_xpa;
            *template_text_len = template_Magic_xpa_len;
            break;
        case 274:
            *template_text = template_MATLAB;
            *template_text_len = template_MATLAB_len;
            break;
        case 275:
            *template_text = template_Maven;
            *template_text_len = template_Maven_len;
            break;
        case 276:
            *template_text = template_MavensMate;
            *template_text_len = template_MavensMate_len;
            break;
        case 277:
            *template_text = template_MdBook;
            *template_text_len = template_MdBook_len;
            break;
        case 278:
            *template_text = template_MEAN;
            *template_text_len = template_MEAN_len;
            break;
        case 279:
            *template_text = template_Mercurial;
            *template_text_len = template_Mercurial_len;
            break;
        case 280:
            *template_text = template_Mercury;
            *template_text_len = template_Mercury_len;
            break;
        case 281:
            *template_text = template_Meson;
            *template_text_len = template_Meson_len;
            break;
        case 282:
            *template_text = template_Metals;
            *template_text_len = template_Metals_len;
            break;
        case 283:
            *template_text = template_MetaProgrammingSystem;
            *template_text_len = template_MetaProgrammingSystem_len;
            break;
        case 284:
            *template_text = template_Meteor;
            *template_text_len = template_Meteor_len;
            break;
        case 285:
            *template_text = template_MeteorJS;
            *template_text_len = template_MeteorJS_len;
            break;
        case 286:
            *template_text = template_MicrosoftOffice;
            *template_text_len = template_MicrosoftOffice_len;
            break;
        case 287:
            *template_text = template_MikroC;
            *template_text_len = template_MikroC_len;
            break;
        case 288:
            *template_text = template_Moban;
            *template_text_len = template_Moban_len;
            break;
        case 289:
            *template_text = template_ModelSim;
            *template_text_len = template_ModelSim_len;
            break;
        case 290:
            *template_text = template_MODX;
            *template_text_len = template_MODX_len;
            break;
        case 291:
            *template_text = template_Momentics;
            *template_text_len = template_Momentics_len;
            break;
        case 292:
            *template_text = template_MonoDevelop;
            *template_text_len = template_MonoDevelop_len;
            break;
        case 293:
            *template_text = template_MPLabX;
            *template_text_len = template_MPLabX_len;
            break;
        case 294:
            *template_text = template_mule;
            *template_text_len = template_mule_len;
            break;
        case 295:
            *template_text = template_Nanoc;
            *template_text_len = template_Nanoc_len;
            break;
        case 296:
            *template_text = template_NativeScript;
            *template_text_len = template_NativeScript_len;
            break;
        case 297:
            *template_text = template_NCrunch;
            *template_text_len = template_NCrunch_len;
            break;
        case 298:
            *template_text = template_NesC;
            *template_text_len = template_NesC_len;
            break;
        case 299:
            *template_text = template_NetBeans;
            *template_text_len = template_NetBeans_len;
            break;
        case 300:
            *template_text = template_Nette;
            *template_text_len = template_Nette_len;
            break;
        case 301:
            *template_text = template_Nikola;
            *template_text_len = template_Nikola_len;
            break;
        case 302:
            *template_text = template_Nim;
            *template_text_len = template_Nim_len;
            break;
        case 303:
            *template_text = template_Ninja;
            *template_text_len = template_Ninja_len;
            break;
        case 304:
            *template_text = template_NodeChakraTimeTravelDebug;
            *template_text_len = template_NodeChakraTimeTravelDebug_len;
            break;
        case 305:
            *template_text = template_Node;
            *template_text_len = template_Node_len;
            break;
        case 306:
            *template_text = template_Nohup;
            *template_text_len = template_Nohup_len;
            break;
        case 307:
            *template_text = template_NotepadPP;
            *template_text_len = template_NotepadPP_len;
            break;
        case 308:
            *template_text = template_now;
            *template_text_len = template_now_len;
            break;
        case 309:
            *template_text = template_Nuxt;
            *template_text_len = template_Nuxt_len;
            break;
        case 310:
            *template_text = template_Nuxtjs;
            *template_text_len = template_Nuxtjs_len;
            break;
        case 311:
            *template_text = template_Nwjs;
            *template_text_len = template_Nwjs_len;
            break;
        case 312:
            *template_text = template_Objective_C;
            *template_text_len = template_Objective_C_len;
            break;
        case 313:
            *template_text = template_OCaml;
            *template_text_len = template_OCaml_len;
            break;
        case 314:
            *template_text = template_Octave;
            *template_text_len = template_Octave_len;
            break;
        case 315:
            *template_text = template_OctoberCms;
            *template_text_len = template_OctoberCms_len;
            break;
        case 316:
            *template_text = template_Opa;
            *template_text_len = template_Opa_len;
            break;
        case 317:
            *template_text = template_OpenCart;
            *template_text_len = template_OpenCart_len;
            break;
        case 318:
            *template_text = template_OpenCV;
            *template_text_len = template_OpenCV_len;
            break;
        case 319:
            *template_text = template_OpenFOAM;
            *template_text_len = template_OpenFOAM_len;
            break;
        case 320:
            *template_text = template_OpenFrameworks;
            *template_text_len = template_OpenFrameworks_len;
            break;
        case 321:
            *template_text = template_OpenFrameworks_VisualStudio;
            *template_text_len = template_OpenFrameworks_VisualStudio_len;
            break;
        case 322:
            *template_text = template_OracleForms;
            *template_text_len = template_OracleForms_len;
            break;
        case 323:
            *template_text = template_OrCAD;
            *template_text_len = template_OrCAD_len;
            break;
        case 324:
            *template_text = template_OSX;
            *template_text_len = template_OSX_len;
            break;
        case 325:
            *template_text = template_Otto;
            *template_text_len = template_Otto_len;
            break;
        case 326:
            *template_text = template_OxidEshop;
            *template_text_len = template_OxidEshop_len;
            break;
        case 327:
            *template_text = template_oXygenXMLEditor;
            *template_text_len = template_oXygenXMLEditor_len;
            break;
        case 328:
            *template_text = template_Packer;
            *template_text_len = template_Packer_len;
            break;
        case 329:
            *template_text = template_Particle;
            *template_text_len = template_Particle_len;
            break;
        case 330:
            *template_text = template_Patch;
            *template_text_len = template_Patch_len;
            break;
        case 331:
            *template_text = template_PAWN;
            *template_text_len = template_PAWN_len;
            break;
        case 332:
            *template_text = template_Perl6;
            *template_text_len = template_Perl6_len;
            break;
        case 333:
            *template_text = template_Perl;
            *template_text_len = template_Perl_len;
            break;
        case 334:
            *template_text = template_pH7CMS;
            *template_text_len = template_pH7CMS_len;
            break;
        case 335:
            *template_text = template_Phalcon;
            *template_text_len = template_Phalcon_len;
            break;
        case 336:
            *template_text = template_Phoenix;
            *template_text_len = template_Phoenix_len;
            break;
        case 337:
            *template_text = template_PHPCodeSniffer;
            *template_text_len = template_PHPCodeSniffer_len;
            break;
        case 338:
            *template_text = template_PhpStorm_all;
            *template_text_len = template_PhpStorm_all_len;
            break;
        case 339:
            *template_text = template_PhpStorm;
            *template_text_len = template_PhpStorm_len;
            break;
        case 340:
            *template_text = template_PhpStorm_iml;
            *template_text_len = template_PhpStorm_iml_len;
            break;
        case 341:
            *template_text = template_PHPUnit;
            *template_text_len = template_PHPUnit_len;
            break;
        case 342:
            *template_text = template_pico8;
            *template_text_len = template_pico8_len;
            break;
        case 343:
            *template_text = template_Pimcore4;
            *template_text_len = template_Pimcore4_len;
            break;
        case 344:
            *template_text = template_Pimcore5;
            *template_text_len = template_Pimcore5_len;
            break;
        case 345:
            *template_text = template_Pimcore;
            *template_text_len = template_Pimcore_len;
            break;
        case 346:
            *template_text = template_PineGrow;
            *template_text_len = template_PineGrow_len;
            break;
        case 347:
            *template_text = template_PlatformIO;
            *template_text_len = template_PlatformIO_len;
            break;
        case 348:
            *template_text = template_PlayFramework;
            *template_text_len = template_PlayFramework_len;
            break;
        case 349:
            *template_text = template_Plone;
            *template_text_len = template_Plone_len;
            break;
        case 350:
            *template_text = template_Polymer;
            *template_text_len = template_Polymer_len;
            break;
        case 351:
            *template_text = template_PowerShell;
            *template_text_len = template_PowerShell_len;
            break;
        case 352:
            *template_text = template_premake_gmake;
            *template_text_len = template_premake_gmake_len;
            break;
        case 353:
            *template_text = template_Prepros;
            *template_text_len = template_Prepros_len;
            break;
        case 354:
            *template_text = template_Prestashop;
            *template_text_len = template_Prestashop_len;
            break;
        case 355:
            *template_text = template_Processing;
            *template_text_len = template_Processing_len;
            break;
        case 356:
            *template_text = template_ProgressABL;
            *template_text_len = template_ProgressABL_len;
            break;
        case 357:
            *template_text = template_PSoCCreator;
            *template_text_len = template_PSoCCreator_len;
            break;
        case 358:
            *template_text = template_Puppet;
            *template_text_len = template_Puppet_len;
            break;
        case 359:
            *template_text = template_puppet_librarian;
            *template_text_len = template_puppet_librarian_len;
            break;
        case 360:
            *template_text = template_PureBasic;
            *template_text_len = template_PureBasic_len;
            break;
        case 361:
            *template_text = template_PureScript;
            *template_text_len = template_PureScript_len;
            break;
        case 362:
            *template_text = template_PuTTY;
            *template_text_len = template_PuTTY_len;
            break;
        case 363:
            *template_text = template_PVS;
            *template_text_len = template_PVS_len;
            break;
        case 364:
            *template_text = template_PyCharm_all;
            *template_text_len = template_PyCharm_all_len;
            break;
        case 365:
            *template_text = template_PyCharm;
            *template_text_len = template_PyCharm_len;
            break;
        case 366:
            *template_text = template_PyCharm_iml;
            *template_text_len = template_PyCharm_iml_len;
            break;
        case 367:
            *template_text = template_pydev;
            *template_text_len = template_pydev_len;
            break;
        case 368:
            *template_text = template_Python;
            *template_text_len = template_Python_len;
            break;
        case 369:
            *template_text = template_QML;
            *template_text_len = template_QML_len;
            break;
        case 370:
            *template_text = template_Qooxdoo;
            *template_text_len = template_Qooxdoo_len;
            break;
        case 371:
            *template_text = template_QtCreator;
            *template_text_len = template_QtCreator_len;
            break;
        case 372:
            *template_text = template_Qt;
            *template_text_len = template_Qt_len;
            break;
        case 373:
            *template_text = template_Racket;
            *template_text_len = template_Racket_len;
            break;
        case 374:
            *template_text = template_Rails;
            *template_text_len = template_Rails_len;
            break;
        case 375:
            *template_text = template_react;
            *template_text_len = template_react_len;
            break;
        case 376:
            *template_text = template_ReactNative;
            *template_text_len = template_ReactNative_len;
            break;
        case 377:
            *template_text = template_Reasonml;
            *template_text_len = template_Reasonml_len;
            break;
        case 378:
            *template_text = template_Redcar;
            *template_text_len = template_Redcar_len;
            break;
        case 379:
            *template_text = template_Red;
            *template_text_len = template_Red_len;
            break;
        case 380:
            *template_text = template_Redis;
            *template_text_len = template_Redis_len;
            break;
        case 381:
            *template_text = template_retool;
            *template_text_len = template_retool_len;
            break;
        case 382:
            *template_text = template_R;
            *template_text_len = template_R_len;
            break;
        case 383:
            *template_text = template_RhodesRhomobile;
            *template_text_len = template_RhodesRhomobile_len;
            break;
        case 384:
            *template_text = template_Rider;
            *template_text_len = template_Rider_len;
            break;
        case 385:
            *template_text = template_ROOT;
            *template_text_len = template_ROOT_len;
            break;
        case 386:
            *template_text = template_ROS;
            *template_text_len = template_ROS_len;
            break;
        case 387:
            *template_text = template_Ruby;
            *template_text_len = template_Ruby_len;
            break;
        case 388:
            *template_text = template_RubyMine_all;
            *template_text_len = template_RubyMine_all_len;
            break;
        case 389:
            *template_text = template_RubyMine;
            *template_text_len = template_RubyMine_len;
            break;
        case 390:
            *template_text = template_RubyMine_iml;
            *template_text_len = template_RubyMine_iml_len;
            break;
        case 391:
            *template_text = template_Rust;
            *template_text_len = template_Rust_len;
            break;
        case 392:
            *template_text = template_SalesforceDX;
            *template_text_len = template_SalesforceDX_len;
            break;
        case 393:
            *template_text = template_Salesforce;
            *template_text_len = template_Salesforce_len;
            break;
        case 394:
            *template_text = template_SAS;
            *template_text_len = template_SAS_len;
            break;
        case 395:
            *template_text = template_Sass;
            *template_text_len = template_Sass_len;
            break;
        case 396:
            *template_text = template_SBT;
            *template_text_len = template_SBT_len;
            break;
        case 397:
            *template_text = template_Scala;
            *template_text_len = template_Scala_len;
            break;
        case 398:
            *template_text = template_Scheme;
            *template_text_len = template_Scheme_len;
            break;
        case 399:
            *template_text = template_SCons;
            *template_text_len = template_SCons_len;
            break;
        case 400:
            *template_text = template_Scrivener;
            *template_text_len = template_Scrivener_len;
            break;
        case 401:
            *template_text = template_Sdcc;
            *template_text_len = template_Sdcc_len;
            break;
        case 402:
            *template_text = template_SeamGen;
            *template_text_len = template_SeamGen_len;
            break;
        case 403:
            *template_text = template_SenchaTouch;
            *template_text_len = template_SenchaTouch_len;
            break;
        case 404:
            *template_text = template_Serverless;
            *template_text_len = template_Serverless_len;
            break;
        case 405:
            *template_text = template_Shopware;
            *template_text_len = template_Shopware_len;
            break;
        case 406:
            *template_text = template_Silverstripe;
            *template_text_len = template_Silverstripe_len;
            break;
        case 407:
            *template_text = template_SketchUp;
            *template_text_len = template_SketchUp_len;
            break;
        case 408:
            *template_text = template_SlickEdit;
            *template_text_len = template_SlickEdit_len;
            break;
        case 409:
            *template_text = template_Smalltalk;
            *template_text_len = template_Smalltalk_len;
            break;
        case 410:
            *template_text = template_Snapcraft;
            *template_text_len = template_Snapcraft_len;
            break;
        case 411:
            *template_text = template_Snap;
            *template_text_len = template_Snap_len;
            break;
        case 412:
            *template_text = template_Solidity;
            *template_text_len = template_Solidity_len;
            break;
        case 413:
            *template_text = template_SolidityTruffle;
            *template_text_len = template_SolidityTruffle_len;
            break;
        case 414:
            *template_text = template_Sonar;
            *template_text_len = template_Sonar_len;
            break;
        case 415:
            *template_text = template_SonarQube;
            *template_text_len = template_SonarQube_len;
            break;
        case 416:
            *template_text = template_SourcePawn;
            *template_text_len = template_SourcePawn_len;
            break;
        case 417:
            *template_text = template_Spark;
            *template_text_len = template_Spark_len;
            break;
        case 418:
            *template_text = template_Splunk;
            *template_text_len = template_Splunk_len;
            break;
        case 419:
            *template_text = template_Spreadsheet;
            *template_text_len = template_Spreadsheet_len;
            break;
        case 420:
            *template_text = template_SSH;
            *template_text_len = template_SSH_len;
            break;
        case 421:
            *template_text = template_StandardML;
            *template_text_len = template_StandardML_len;
            break;
        case 422:
            *template_text = template_Stata;
            *template_text_len = template_Stata_len;
            break;
        case 423:
            *template_text = template_StdLib;
            *template_text_len = template_StdLib_len;
            break;
        case 424:
            *template_text = template_Stella;
            *template_text_len = template_Stella_len;
            break;
        case 425:
            *template_text = template_Stellar;
            *template_text_len = template_Stellar_len;
            break;
        case 426:
            *template_text = template_Stylus;
            *template_text_len = template_Stylus_len;
            break;
        case 427:
            *template_text = template_SublimeText;
            *template_text_len = template_SublimeText_len;
            break;
        case 428:
            *template_text = template_SugarCRM;
            *template_text_len = template_SugarCRM_len;
            break;
        case 429:
            *template_text = template_SVN;
            *template_text_len = template_SVN_len;
            break;
        case 430:
            *template_text = template_Swift;
            *template_text_len = template_Swift_len;
            break;
        case 431:
            *template_text = template_SwiftPackageManager;
            *template_text_len = template_SwiftPackageManager_len;
            break;
        case 432:
            *template_text = template_SwiftPM;
            *template_text_len = template_SwiftPM_len;
            break;
        case 433:
            *template_text = template_Symfony;
            *template_text_len = template_Symfony_len;
            break;
        case 434:
            *template_text = template_SymphonyCMS;
            *template_text_len = template_SymphonyCMS_len;
            break;
        case 435:
            *template_text = template_Synology;
            *template_text_len = template_Synology_len;
            break;
        case 436:
            *template_text = template_SynopsysVCS;
            *template_text_len = template_SynopsysVCS_len;
            break;
        case 437:
            *template_text = template_Tags;
            *template_text_len = template_Tags_len;
            break;
        case 438:
            *template_text = template_TarmaInstallMate;
            *template_text_len = template_TarmaInstallMate_len;
            break;
        case 439:
            *template_text = template_Terraform;
            *template_text_len = template_Terraform_len;
            break;
        case 440:
            *template_text = template_Terragrunt;
            *template_text_len = template_Terragrunt_len;
            break;
        case 441:
            *template_text = template_TestComplete;
            *template_text_len = template_TestComplete_len;
            break;
        case 442:
            *template_text = template_Test;
            *template_text_len = template_Test_len;
            break;
        case 443:
            *template_text = template_Testinfra;
            *template_text_len = template_Testinfra_len;
            break;
        case 444:
            *template_text = template_TeX;
            *template_text_len = template_TeX_len;
            break;
        case 445:
            *template_text = template_Text;
            *template_text_len = template_Text_len;
            break;
        case 446:
            *template_text = template_TextMate;
            *template_text_len = template_TextMate_len;
            break;
        case 447:
            *template_text = template_Textpattern;
            *template_text_len = template_Textpattern_len;
            break;
        case 448:
            *template_text = template_THEOS_Tweak;
            *template_text_len = template_THEOS_Tweak_len;
            break;
        case 449:
            *template_text = template_ThinkPHP;
            *template_text_len = template_ThinkPHP_len;
            break;
        case 450:
            *template_text = template_TLA_;
            *template_text_len = template_TLA__len;
            break;
        case 451:
            *template_text = template_TortoiseGit;
            *template_text_len = template_TortoiseGit_len;
            break;
        case 452:
            *template_text = template_Tower;
            *template_text_len = template_Tower_len;
            break;
        case 453:
            *template_text = template_TurboGears2;
            *template_text_len = template_TurboGears2_len;
            break;
        case 454:
            *template_text = template_TwinCAT3;
            *template_text_len = template_TwinCAT3_len;
            break;
        case 455:
            *template_text = template_Typings;
            *template_text_len = template_Typings_len;
            break;
        case 456:
            *template_text = template_TYPO3_composer;
            *template_text_len = template_TYPO3_composer_len;
            break;
        case 457:
            *template_text = template_Typo3;
            *template_text_len = template_Typo3_len;
            break;
        case 458:
            *template_text = template_Umbraco;
            *template_text_len = template_Umbraco_len;
            break;
        case 459:
            *template_text = template_Unity;
            *template_text_len = template_Unity_len;
            break;
        case 460:
            *template_text = template_UnrealEngine;
            *template_text_len = template_UnrealEngine_len;
            break;
        case 461:
            *template_text = template_Vaadin;
            *template_text_len = template_Vaadin_len;
            break;
        case 462:
            *template_text = template_Vagrant;
            *template_text_len = template_Vagrant_len;
            break;
        case 463:
            *template_text = template_Valgrind;
            *template_text_len = template_Valgrind_len;
            break;
        case 464:
            *template_text = template_Vapor;
            *template_text_len = template_Vapor_len;
            break;
        case 465:
            *template_text = template_venv;
            *template_text_len = template_venv_len;
            break;
        case 466:
            *template_text = template_Vertx;
            *template_text_len = template_Vertx_len;
            break;
        case 467:
            *template_text = template_Video;
            *template_text_len = template_Video_len;
            break;
        case 468:
            *template_text = template_Vim;
            *template_text_len = template_Vim_len;
            break;
        case 469:
            *template_text = template_VirtualEnv;
            *template_text_len = template_VirtualEnv_len;
            break;
        case 470:
            *template_text = template_Virtuoso;
            *template_text_len = template_Virtuoso_len;
            break;
        case 471:
            *template_text = template_VisualStudioCode;
            *template_text_len = template_VisualStudioCode_len;
            break;
        case 472:
            *template_text = template_VisualStudio;
            *template_text_len = template_VisualStudio_len;
            break;
        case 473:
            *template_text = template_Vivado;
            *template_text_len = template_Vivado_len;
            break;
        case 474:
            *template_text = template_VLab;
            *template_text_len = template_VLab_len;
            break;
        case 475:
            *template_text = template_Vue;
            *template_text_len = template_Vue_len;
            break;
        case 476:
            *template_text = template_Vuejs;
            *template_text_len = template_Vuejs_len;
            break;
        case 477:
            *template_text = template_VVVV;
            *template_text_len = template_VVVV_len;
            break;
        case 478:
            *template_text = template_Waf;
            *template_text_len = template_Waf_len;
            break;
        case 479:
            *template_text = template_Wakanda;
            *template_text_len = template_Wakanda_len;
            break;
        case 480:
            *template_text = template_Web;
            *template_text_len = template_Web_len;
            break;
        case 481:
            *template_text = template_WebMethods;
            *template_text_len = template_WebMethods_len;
            break;
        case 482:
            *template_text = template_WebStorm_all;
            *template_text_len = template_WebStorm_all_len;
            break;
        case 483:
            *template_text = template_WebStorm;
            *template_text_len = template_WebStorm_len;
            break;
        case 484:
            *template_text = template_WebStorm_iml;
            *template_text_len = template_WebStorm_iml_len;
            break;
        case 485:
            *template_text = template_WerckerCLI;
            *template_text_len = template_WerckerCLI_len;
            break;
        case 486:
            *template_text = template_Windows;
            *template_text_len = template_Windows_len;
            break;
        case 487:
            *template_text = template_Wintersmith;
            *template_text_len = template_Wintersmith_len;
            break;
        case 488:
            *template_text = template_WordPress;
            *template_text_len = template_WordPress_len;
            break;
        case 489:
            *template_text = template_Wyam;
            *template_text_len = template_Wyam_len;
            break;
        case 490:
            *template_text = template_XamarinStudio;
            *template_text_len = template_XamarinStudio_len;
            break;
        case 491:
            *template_text = template_Xcode;
            *template_text_len = template_Xcode_len;
            break;
        case 492:
            *template_text = template_XcodeInjection;
            *template_text_len = template_XcodeInjection_len;
            break;
        case 493:
            *template_text = template_Xilinx;
            *template_text_len = template_Xilinx_len;
            break;
        case 494:
            *template_text = template_XilinxISE;
            *template_text_len = template_XilinxISE_len;
            break;
        case 495:
            *template_text = template_XilinxVivado;
            *template_text_len = template_XilinxVivado_len;
            break;
        case 496:
            *template_text = template_Xill;
            *template_text_len = template_Xill_len;
            break;
        case 497:
            *template_text = template_Xojo;
            *template_text_len = template_Xojo_len;
            break;
        case 498:
            *template_text = template_XText;
            *template_text_len = template_XText_len;
            break;
        case 499:
            *template_text = template_Y86;
            *template_text_len = template_Y86_len;
            break;
        case 500:
            *template_text = template_yarn;
            *template_text_len = template_yarn_len;
            break;
        case 501:
            *template_text = template_Yeoman;
            *template_text_len = template_Yeoman_len;
            break;
        case 502:
            *template_text = template_Yii2;
            *template_text_len = template_Yii2_len;
            break;
        case 503:
            *template_text = template_Yii;
            *template_text_len = template_Yii_len;
            break;
        case 504:
            *template_text = template_ZendFramework;
            *template_text_len = template_ZendFramework_len;
            break;
        case 505:
            *template_text = template_Zephir;
            *template_text_len = template_Zephir_len;
            break;
        case 506:
            *template_text = template_zig;
            *template_text_len = template_zig_len;
            break;
        case 507:
            *template_text = template_Zsh;
            *template_text_len = template_Zsh_len;
            break;
        case 508:
            *template_text = template_ZukenCR8000;
            *template_text_len = template_ZukenCR8000_len;
            break;
    }
}

#endif