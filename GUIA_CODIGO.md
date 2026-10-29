# Guia de leitura do código

Este guia descreve a organização para estudar e explicar o repositório. Os comentários do código destacam regras, contratos, validações e responsabilidade pela memória ou pelos dados.

## Por onde começar

| Caminho | Responsabilidade |
| --- | --- |
| [disciplinas](disciplinas) | Exercícios agrupados pela área acadêmica. |
| [monitoria](monitoria) | Materiais de apoio de Lógica de Programação. |
| [residencia](residencia) | Materiais da residência. |
| [rascunhos/pessoa-modelo.c.txt](rascunhos/pessoa-modelo.c.txt) | Esqueleto de aula preservado, sem apresentar como aplicação concluída. |

## Como estudar uma alteração

1. Identifique a entrada: argumento, formulário ou requisição HTTP.
2. Localize a validação e a função que transforma os dados.
3. Observe a saída e o comportamento quando algo falha.
4. Execute um exemplo pequeno antes de mudar a regra.
5. Consulte o diff do Git para distinguir formatação de mudanças de comportamento.

## Convenções

- `.editorconfig` define codificação, indentação e final de linha.
- Comentários explicam motivos e restrições; não repetem cada comando.
- Arquivos gerados, dependências e credenciais locais ficam fora do versionamento.
- Um `main` pertence ao seu exercício; projetos de aula independentes não formam um único executável.
- Créditos, autoria anterior e licenças são preservados.
- `.clang-format` registra a formatação aplicada ao código C/C++ e Java.
- `.prettierrc.json` registra a formatação dos arquivos web.

## Inventário de fontes próprias e didáticas

60 arquivo(s) `.c`, 11 arquivo(s) `.cpp`, 13 arquivo(s) `.css`, 10 arquivo(s) `.h`, 15 arquivo(s) `.html`, 42 arquivo(s) `.java`, 1 arquivo(s) `.js`.

Os exemplos distribuídos do Bootstrap foram preservados e excluídos da reformatação. Arquivos compactados e materiais de terceiros continuam como referência histórica.

## Limite desta organização

A formatação e os comentários não comprovam que todos os exercícios estejam completos. Os testes adicionados cobrem os fluxos descritos no README; validar sintaxe não equivale a testar todos os resultados. Veja também as instruções e limitações específicas do projeto.
