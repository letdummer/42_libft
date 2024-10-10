>"If you need helper functions to split a more complex function, define them as **static functions**. This way, their scope will be limited to the appropriate file."

### Summary of what a "static function" is in C:

A **static function** in C is a function whose scope is restricted to the file where it is defined. By marking a function with the `static` keyword, you ensure that this function can only be called from within the same file. It will **not** be visible or accessible in other files of the program, even if those files are part of the same project or use the same library.

#### Benefits:
- **Encapsulation**: Limits access to the function, helping to keep the code more organized.
- **Avoids conflicts**: Prevents functions with the same name in different files from conflicting.


Em C, o arquivo **`libft.a`** é uma **biblioteca estática** que você cria para armazenar um conjunto de funções que podem ser reutilizadas em diferentes partes do seu código ou em outros projetos. O nome "libft" geralmente vem de **lib**rary e **ft** (abreviação de uma função ou projeto específico).

### O que significa "deve ser criada na raiz do seu repositório"?

Isso significa que o arquivo **`libft.a`**, que é a sua biblioteca estática contendo as funções que você programou, deve ser gerado e localizado diretamente na **pasta principal** (ou raiz) do seu repositório de código. A "raiz" do repositório é a pasta principal onde todos os arquivos do projeto estão organizados.

### Como criar a **`libft.a`**?

Para criar essa biblioteca estática, você usa o comando **`ar`** (archiver) em C, que agrupa vários arquivos objeto (gerados a partir dos arquivos `.c` compilados) em um único arquivo de biblioteca. Um exemplo de comando para criar a `libft.a` seria:

```bash
ar rcs libft.a *.o
```

Neste comando:
- **`ar`**: é o programa utilizado para criar bibliotecas estáticas.
- **`rcs`**: são flags que significam "replace", "create" e "index", que garantem a criação e atualização correta do arquivo.
- **`libft.a`**: é o nome do arquivo da biblioteca que será criado.
- **`*.o`**: indica que todos os arquivos objeto `.o` (resultados da compilação dos arquivos `.c`) serão incluídos na biblioteca.

Após a criação, o arquivo **`libft.a`** deve estar presente na pasta raiz do projeto para que ele esteja conforme o pedido.
