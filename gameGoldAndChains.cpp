
#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    int sair = 0;
    do
    {
    string nome;
    bool tem_mapa = false, tem_corda = false, tem_celular = false;
    int opcao = 0, opcaoif = 0, voltar_menu = 0;

        cout << "------------------------------------------------------" << endl
             << "MENU" << endl
             << "Selecione umas das opcoes abaixo!" << endl
             << "1 - Jogar" << endl
             << "2 - Creditos" << endl
             << "3 - Sobre" << endl
             << "4 - Sair" << endl
             << "------------------------------------------------------" << endl;
        cin >> opcao;
        system("cls");
        switch (opcao)
        // switch usado para criar o menu
        //system pause usado para so funcionar o codigo apartir do momento em que o usuario apertar uma tecla
        // do e while usado para criar uma cobertura de codigo
        {
        case 1:
            do
            {
                cout << "Bem vindo ao Gold and chains. \n\nNos diga seu nome explorador: " << endl;

                cin >> nome;
                cout << "\nObrigado, boa sorte na sua aventura. " << nome;
                cout << "\n----------------------------------------------------" << endl;
                system("pause");
                system("cls");

                cout << "Voce e um explorador que esta em busca de um tesouro perdido ha muito tempo. Hoje em dia uma prisao foi construida em cima do local onde se acredita estar esse tesouro. Voce e um parceiro viajam para a tailandia e tentam se infiltrar na prisao. Mas sao pegos e presos em celas diferentes." << endl;
                system("pause");
                cout << "\nVocê acorda numa cela de pedra com grades desgastadas do clima tropical, olhando ao redor você vê uma janela através dela e possível ver a bandeira tailandesa, na cela se vê uma cama e um balde sujo, você sabe que está longe de cumprir seu objetivo de achar o tesouro." << endl;
                cout << "\nPara tentar forcar as grades aperte: 1 \nPara voltar a dormir aperte: 2" << endl;

                cin >> opcaoif;
                if (opcaoif == 1)
                {
                    cout << "\nVoce sacode as grades com toda sua forca mas elas estao firmemente presas a pedra. voce escuta um guarda te mandando ir dormir." << endl;
                }
                else
                {
                    cout << "\nVoce deita na cama e sente seu corpo todo doer. Esta muito longe de ser confortavel, mas voce adormece." << endl;
                }
                system("pause");
                system("cls");
                cout << "No dia seguinte dois guardas vem até sua cela. Eles algemam suas maos e te levam para a sala do diretor da prisao. Ele diz que sabe quem e voce e pede para encontrar o tesouro para ele. " << endl;
                cout << "\nDepois da conversa eles te mandam para o patio, onde voce encontra com seu amigo que tambem está preso buscando achar esse tesouro, voce conta pra ele sobre a reuniao e comecam a bolar um plano para descobrir onde esta o tesouro." << endl;
                cout << "\nPara conversar com os guardas da prisao para descobrir alguma coisa sobre o tesouro aperte: 1 \nPara ir para a biblioteca da prisao procurar historias sobre o tesouro aperte: 2" << endl;
                cin >> opcaoif;
                if (opcaoif == 1)
                {
                    cout << "Nenhum dos guardas sabe de nada sobre o tesouro mas talvez tu encontre algo na biblioteca." << endl;
                }
                else
                {
                    cout << "Voce vai para a biblioteca e comeca a procurar livros." << endl;
                }
                system("pause");
                system("cls");
                cout << "Na biblioteca voce encontra muitos livros interessantes. Fica facil se distrair com as possibilidades do conhecimento." << endl;
                cout << "\nPara pegar o livro com estampa de caveiras e piratas aperte: 1 \nPara pegar o livro que esta escrito Big Bang e OVNIS aperte: 2" << endl;
                cin >> opcaoif;
                if (opcaoif == 1)
                {
                    cout << "\nNo livro com a caveira você acaba descobrindo um mapa guardado, nele tem pistas sobre o tesouro do pirata Ben." << endl;
                    tem_mapa = true;
                }
                else
                {
                    cout << "\nVoce pega o livro sobre teorias astronomicas e fica horas lendo ate pegar no sono... Quando voce acorda, esta de volta na cela. \n\nGAME OVER!" << endl;
                    cout << "\n\nPressione qualquer tecla para voltar ao menu..." << endl;
                    cin >> voltar_menu;
                    break;
                }
                system("pause");
                system("cls");
                cout << "\nDepois de achar o mapa voce vai ate o diretor da prisao e pede uma planta da construcao da prisao mas ele se nega a te dar achando que voce so usaria para fugir." << endl;
                cout << "\nApesar de nao conseguir a planta voce percebe uma coisa atras do diretor, uma janela. \nAtraves dela voce ve uma torre antiga. E se lembra de ter lido no livro sobre uma grande torre que protegia o tesouro de saqueadores." << endl;
                cout << "\nAgora voce precisa pensar em como vai chegar la" << endl;
                cout << "\nPara tentar criar uma briga e usa-la como distracao para fugir aperte: 1 \nPara subornar um guarda com o tesouro e fazer ele levar voce e seu amigo ate a torre aperte: 2" << endl;
                cin >> opcaoif;
                if (opcaoif == 1)
                {
                    cout << "\nVoce comeca a briga empurrando alguns detentos e quando outros vao entrando na briga voce é baleado. \n\n GAME OVER!" << endl;
                    cout << "\n\Pressione qualquer tecla para voltar ao menu..." << endl;
                    cin >> voltar_menu;
                    break;
                }
                else
                {
                    cout << "\nO guarda aceita o suborno, mas pede em troca metade do tesouro" << endl;
                }
                system("pause");
                system("cls");
                cout << "O guarda algema voce e seu amigo e comeca a guia-los por um caminho subterraneo da prisao. Voces passam por varias salas cheias de quinquilharias e coisas antigas, ate que voce ve uma corda com um gancho na ponta. Voce pega?" << endl;
                cout << "\nPara pegar a corda aperte: 1 \nPara deixar a corda aperte: 2" << endl;
                cin >> opcaoif;
                if (opcaoif == 1)
                {
                    cout << "\nVoce pega a corda." << endl;
                    tem_corda = true;
                }
                else
                {
                    cout << "\nVoce deixa a corda no porao da prisao." << endl;
                }
                system("pause");
                system("cls");
                cout << "\nVoces chegam ate uma porta antiga com escoras para nao abrir por fora, o guarda tira suas algemas e mandam voces tirar as escoras. \n\nPassando pela porta voces chegam em uma grande e antiga floresta tropical." << endl;
                cout << "\nNa floresta em direçao a torre voce lembra que precisa ligar para os seus amigos virem buscar o tesouro, mas seu celular foi recolhido quando foi preso. voce olha para o guarda e na cintura tem um celular, daqueles com grande alcance e a prova d'agua." << endl;
                cout << "\nPara pedir ao guarda seu celular emprestado aperte: 1 \n\nPara bater nele com um galho das arvores que caem no chao aperte: 2" << endl;
                cin >> opcaoif;
                if (opcaoif == 1)
                {
                    cout << "\nRelutante ele empresta o celular mas diz a voces que melhor nao aprontarem nenhuma gracinha e mostra a arma na cintura." << endl;
                    tem_celular = true;
                }
                else
                {
                    cout << "\nVoces tentam imobilizar o guarda, mas ele atira no seu amigo e ele acaba morrendo na hora, você felizmente consegue imobilizar o guarda, pega o celular dele e o deixa apagado no chão. " << endl;
                    tem_celular = true;
                }
                system("pause");
                system("cls");
                cout << "Chegando na torre voce percebe uma janela antiga que esta toda quebrada, mas para subir precisa de uma corda, voce tem?" << endl;
                if (tem_corda)
                    cout << "\nComo voce ja tem a corda voce consegue escalar a torre sem maiores problemas." << endl;
                else
                {
                    cout << "\nVoce nao pegou a corda mas tenta escalar do mesmo jeito. Infelizmente algumas pedras se soltam quando voce escala. Te derrubando de uma grande altura. Voce morre. \n\nGAME OVER!" << endl;
                    cout << "\n\nPressione qualquer tecla para voltar ao menu..." << endl;
                    cin >> voltar_menu;
                    break;
                }
                cout << "\nDentro da torre voce observa um quadro antigo com um pedaço rasgado, você coloca o seu mapa junto e abre uma passagem subterrânea. " << endl;
                cout << "\nEntrando na passagem você começa a escorregar até um lago que se encontra um grande navio pirata encalhado e esburacado de balas antigas. Mas o azul do lago reluz a cor amarela do ouro. " << endl;
                cout << "\nVoce precisa ligar para seus amigos virem te buscar." << endl;
                if (tem_celular)
                {
                    cout << "\nVoce telefona para seus amigos e eles buscar voce e o tesouro em um grande helicoptero de carga." << endl;
                    cout << "\n\nPARABENS! VOCE CONCLUIU GOLD AND CHAINS. ACHOU O TESOURO E ESCAPOU DA PRISAO!" << endl;
                    cout << "\n\nPressione qualquer tecla para voltar ao menu..." << endl;
                    cin >> voltar_menu;
                }
            } while (voltar_menu != 1);
            break;

        case 2:
            do
            {
                cout << "Jogo desenvolvido por Arthur Annes Grandi e Rodrigo Nicola Berardi." << endl;
                cout << "-----------" << endl;
                cout << "1- Voltar ao menu" << endl;
                cin >> voltar_menu;
                system("cls");
            } while (voltar_menu != 1);
            system("cls");
            break;

        case 3:
            do
            {
                cout << "Esse jogo foi desenvolvido para a materia de algoritmos e programacao do professor Eduardo. \n\nNele voce vivera uma aventura onde tentara escapar de uma prisao e recuperar um tesouro perdido. Fique atento as suas escolhas pois elas influenciam no resultado final" << endl;
                cout << "-----------" << endl;
                cout << "1- Voltar ao menu" << endl;
                cin >> voltar_menu;
                system("cls");
            } while (voltar_menu != 1);
            system("cls");
            break;

        case 4:
            cout << "Obrigado por jogar." << endl;
            sair = 1;
            break;

        default:
            do
            {
                cout << "Opcao invalida, tente novamente." << endl;
                cout << "------------------------------------------------------" << endl;
                cout << "1 - Voltar ao menu" << endl;
                cin >> voltar_menu;
            } while (voltar_menu != 1);
            system("cls");
            break;
        }
    } while (sair != 1);

    return 0;
}
