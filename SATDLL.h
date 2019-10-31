#ifndef SATDLL_H_
#define SATDLL_H_

#include <stdio.h>

#define SATDLL_API __declspec(dllimport) // Note: actually gcc seems to also supports this syntax.
#define SATDLL_CALL



#ifdef __cplusplus
extern "C" {
#endif

    SATDLL_API char SATDLL_CALL *AtivarSAT(int numeroSessao, int subComando, const char * codigoDeAtivacao, const char * CNPJ, int cUF);
    SATDLL_API char SATDLL_CALL *ComunicarCertificadoICPBRASIL(int numeroSessao, const char * codigoDeAtivacao, const char * certificado);
    SATDLL_API char SATDLL_CALL *EnviarDadosVenda(int numeroSessao, const char * codigoDeAtivacao, const char * dadosVenda);
    SATDLL_API char SATDLL_CALL *CancelarUltimaVenda(int numeroSessao, const char * codigoDeAtivacao, const char * chave, const char * dadosCancelamento);
    SATDLL_API char SATDLL_CALL *ConsultarSAT(int numeroSessao);
    SATDLL_API char SATDLL_CALL *TesteFimAFim(int numeroSessao, const char * codigoDeAtivacao, const char * dadosVenda);
    SATDLL_API char SATDLL_CALL *ConsultarStatusOperacional(int numeroSessao, const char * codigoDeAtivacao);
    SATDLL_API char SATDLL_CALL *ConsultarNumeroSessao(int numeroSessao, const char * codigoDeAtivacao, int cnumeroSessao);
    SATDLL_API char SATDLL_CALL *ConfigurarInterfaceDeRede(int numeroSessao, const char * codigoDeAtivacao, const char * dadosConfiguracao);
    SATDLL_API char SATDLL_CALL *AssociarAssinatura(int numeroSessao, const char * condigoDeAtivacao, const char * CNPJvalue, const char * assinaturaCNPJs);
    SATDLL_API char SATDLL_CALL *AtualizarSoftwareSAT(int numeroSessao, const char * codigoDeAtivacao);
    SATDLL_API char SATDLL_CALL *ExtrairLogs(int numeroSessao, const char * codigoDeAtivacao);
    SATDLL_API char SATDLL_CALL *BloquearSAT(int numeroSessao, const char * codigoDeAtivacao);
    SATDLL_API char SATDLL_CALL *DesbloquearSAT(int numeroSessao, const char * codigoDeAtivacao);
    SATDLL_API char SATDLL_CALL *TrocarCodigoDeAtivacao(int numeroSessao, const char * codigoDeAtivacao, int opcao, const char * novoCodigo, const char * confNovoCodigo);

#ifdef __cplusplus
};
#endif

#endif /* SATDLL_H_ */



#ifndef SATDLL_H_
#define SATDLL_H_

#include <stdio.h>

#define SATDLL_API __declspec(dllimport) // Note: actually gcc seems to also supports this syntax.
#define SATDLL_CALL



#ifdef __cplusplus
extern "C" {
#endif

    SATDLL_API char SATDLL_CALL *AtivarSAT(int numeroSessao, int subComando, const char * codigoDeAtivacao, const char * CNPJ, int cUF);
    SATDLL_API char SATDLL_CALL *ComunicarCertificadoICPBRASIL(int numeroSessao, const char * codigoDeAtivacao, const char * certificado);
    SATDLL_API char SATDLL_CALL *EnviarDadosVenda(int numeroSessao, const char * codigoDeAtivacao, const char * dadosVenda);
    SATDLL_API char SATDLL_CALL *CancelarUltimaVenda(int numeroSessao, const char * codigoDeAtivacao, const char * chave, const char * dadosCancelamento);
    SATDLL_API char SATDLL_CALL *ConsultarSAT(int numeroSessao);
    SATDLL_API char SATDLL_CALL *TesteFimAFim(int numeroSessao, const char * codigoDeAtivacao, const char * dadosVenda);
    SATDLL_API char SATDLL_CALL *ConsultarStatusOperacional(int numeroSessao, const char * codigoDeAtivacao);
    SATDLL_API char SATDLL_CALL *ConsultarNumeroSessao(int numeroSessao, const char * codigoDeAtivacao, int cnumeroSessao);
    SATDLL_API char SATDLL_CALL *ConfigurarInterfaceDeRede(int numeroSessao, const char * codigoDeAtivacao, const char * dadosConfiguracao);
    SATDLL_API char SATDLL_CALL *AssociarAssinatura(int numeroSessao, const char * condigoDeAtivacao, const char * CNPJvalue, const char * assinaturaCNPJs);
    SATDLL_API char SATDLL_CALL *AtualizarSoftwareSAT(int numeroSessao, const char * codigoDeAtivacao);
    SATDLL_API char SATDLL_CALL *ExtrairLogs(int numeroSessao, const char * codigoDeAtivacao);
    SATDLL_API char SATDLL_CALL *BloquearSAT(int numeroSessao, const char * codigoDeAtivacao);
    SATDLL_API char SATDLL_CALL *DesbloquearSAT(int numeroSessao, const char * codigoDeAtivacao);
    SATDLL_API char SATDLL_CALL *TrocarCodigoDeAtivacao(int numeroSessao, const char * codigoDeAtivacao, int opcao, const char * novoCodigo, const char * confNovoCodigo);

#ifdef __cplusplus
};
#endif

#endif /* SATDLL_H_ */


