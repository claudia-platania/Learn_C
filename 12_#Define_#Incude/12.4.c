/* 


#ifdef  UNIX
#   define  DATADIR     "/uxn1 / data"

#else
#   define  DATADIR     "\usr \ data"

#endif



    - se UNIX è stato definito prima    -->     DATADIR = "/uxn1/data"
    - altri menti   -->     DATADIR = "\usr\data"


        - UNIX può essere definito o con #define o per riga di comando
            -->     #define     UNIX
            -->     gcc -D UNIX program.c



#undef  LINUX



    - elimina la definizione di LINUX
    - le successive direttve #ifdef o #if defined (LINUx)   -->     daranno valore FALSO






 */


