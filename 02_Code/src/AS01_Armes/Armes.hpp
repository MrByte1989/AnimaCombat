/*---------------------------------------------------------------------------\
| Author: David Abad Ayats                                                   
+----------------------------------------------------------------------------+
| Description: Aqui es descriu la classe Arma que s'utilitzarà durant el combat  
|                             
\---------------------------------------------------------------------------*/

#include <string>
#include valors_armes.hpp

enum tipoAtaque{ FILO, CONTUNDENTE, PENETRANTE, CALOR, FRIO, ELECTRICIDAD, ENERGIA};
enum tipoArma{ ARMA_CORTA, HACHA, MAZA, ESPADA, MANDOBLE, ASTA, CUERDA, MIXTA, SIN_ARMA};
enum tipoEsp{ PRECISA, ARMA_DOS_MANOS, ARMA_UNA_DOS_MANOS, COMPLEJA, LANZABLE, PRESA, TRABA};

/****************** Constants **********************/

/**************** Global Variables******************/

/**************** Class Constructors***************/

class Arma{

    public:

    /*Atributs*/
    string nom;
    short mal;
    short torn;
    short req_f;
    tipoAtaque critic1;
    tipoAtaque critic2;
    tipoArma tipo_arma;
    tipoEsp especial;

    /*Getters*/
    string GetNom(void);
    short GetMal(void);
    short GetTorn(void);
    short GetReqF(void);
    tipoAtaque GetCritic(short a_critic);
    tipoArma GetTipusArma(void);
    tipoEsp GetEspecial(void);

    /*Setters*/
    

}