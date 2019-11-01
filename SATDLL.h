#ifndef SATDLL_H_
#define SATDLL_H_

#include <stdio.h>

#define SATDLL_API __declspec(dllimport) // Note: actually gcc seems to also supports this syntax.


extern "C" SATDLL_API char *AtivarSAT(int numeroSessao, int subComando, const char * codigoDeAtivacao, const char * CNPJ, int cUF);
extern "C" SATDLL_API char *ComunicarCertificadoICPBRASIL(int numeroSessao, const char * codigoDeAtivacao, const char * certificado);
extern "C" SATDLL_API char *EnviarDadosVenda(int numeroSessao, const char * codigoDeAtivacao, const char * dadosVenda);
extern "C" SATDLL_API char *CancelarUltimaVenda(int numeroSessao, const char * codigoDeAtivacao, const char * chave, const char * dadosCancelamento);
extern "C" SATDLL_API char *ConsultarSAT(int numeroSessao);
extern "C" SATDLL_API char *TesteFimAFim(int numeroSessao, const char * codigoDeAtivacao, const char * dadosVenda);
extern "C" SATDLL_API char *ConsultarStatusOperacional(int numeroSessao, const char * codigoDeAtivacao);
extern "C" SATDLL_API char *ConsultarNumeroSessao(int numeroSessao, const char * codigoDeAtivacao, int cnumeroSessao);
extern "C" SATDLL_API char *ConfigurarInterfaceDeRede(int numeroSessao, const char * codigoDeAtivacao, const char * dadosConfiguracao);
extern "C" SATDLL_API char *AssociarAssinatura(int numeroSessao, const char * condigoDeAtivacao, const char * CNPJvalue, const char * assinaturaCNPJs);
extern "C" SATDLL_API char *AtualizarSoftwareSAT(int numeroSessao, const char * codigoDeAtivacao);
extern "C" SATDLL_API char *ExtrairLogs(int numeroSessao, const char * codigoDeAtivacao);
extern "C" SATDLL_API char *BloquearSAT(int numeroSessao, const char * codigoDeAtivacao);
extern "C" SATDLL_API char *DesbloquearSAT(int numeroSessao, const char * codigoDeAtivacao);
extern "C" SATDLL_API char *TrocarCodigoDeAtivacao(int numeroSessao, const char * codigoDeAtivacao, int opcao, const char * novoCodigo, const char * confNovoCodigo);

#endif /* SATDLL_H_ */