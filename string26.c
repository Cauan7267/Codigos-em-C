#include<stdio.h>

int main(){
    char nomes[100][100], codigo[] = "<!DOCTYPE/><html><header>Lista de nomes secretos</header><body><div id='ctnx02'><div id='ba_x02' class='ba x02' data-google-query-id='CLDQ5pGz2uwCFV0tuQYd8YwJww' style='display: none;'><script>OAS_AD('x02');</script><div id='google_ads_iframe/62615953/INTL_br_jdf/desktop/faq/habillage_0container' style='border: 0pt none; width: 1px; height: 1px;'></div></div></div>Lista de procurados pela KGB<ul><li>Dimitri</li><li>Irina bonjour</li><li>Mikhail</li><li>Vladimir pereot</li><li>Sacha</li><li>Alison Bernardino</li><li>Rodrigo Mantovani</li><li>Fernando Manzoli</li><li>Alycia Debman</li><li>Nicklaus</li><li>Caroline forbes</li><li>Faustão</li><li>Açucena</li><li>Augusta</li><li>Insandonram</li><li>Hortênsia</li><li>Martina</li><li>Pilar</li><li>Adele</li><li>Ayla</li><li>Dora</li><li>Iolanda</li><li>Matilda</li><li>Ramona</li><li>Agnes</li><li>Benedita</li><li>Eleonara</li><li>Julieta</li><li>Melina</li><li>Serena</li><li>Alegra</li><li>Betina</li><li>Esperança</li><li>Lia</li><li>Mia</li><li>Tarsila</li><li>Allana</li><li>Branca</li><li>Estrela</li><li>Linda</li><li>Micaela</li><li>Teodora</li><li>Amélia</li><li>Caetana</li><li>Felipa</li><li>Lolita</li><li>Naomi</li><li>Úrsula</li><li>Amora</li><li>Carlota</li><li>Flora</li><li>Louise</li><li>Olga</li><li>Vida</li><li>Anabel</li><li>Celina</li><li>Florença</li><li>Luna</li><li>Pandora</li><li>Violeta</li><li>Analu</li><li>Charlote</li><li>Frederica</li><li>Mabel</li><li>Penélope</li><li>Zoé</li><li>Anastácia</li><li>Constança</li><li>Gaia</li><li>Maia</li><li>Pérola</li><li>Angelina</li><li>Cora</li><li>Guadalupe</li><li>Margarida</li><li>Petra</li></ul></body></html>";
    int x = 0, y = 0, z = 0, cont = 0;
    while (codigo[x] != '\0')
    {
        if(codigo[x - 1] == 62 && codigo[x - 2] == 105 && codigo[x - 3] == 108 && codigo[x - 4] == 60)
        {
            z = 0;
            while (codigo[x] != 60)
            {
                nomes[y][z] = codigo[x];
                x++;
                z++;
            }
            y++;
            cont++;
        }
        x++;

    }
    y = 0;
    while (cont >= 0)
    {
        printf("%s\n", nomes[y]);
        y++;
        cont--;
    }
}