function adicionarItem(){
    //Obter os valores dos campos digitados
    var nome = document.getElementById("nome").value;
    var valor = document.getElementById("valor").valueAsNumber;
    var quantidade = document.getElementById("quantidade").valueAsNumber;
    
    //Validar se todas existem
    if( !nome || !valor || !quantidade ){
        alert("Preencha os campos!!!");
        return;
    }

    //Criar a tabela, mas precisamente uma linha na tabela
    var tabela = document.getElementById("tabela").getElementsByTagName("tbody")[0];
    var novaLinha = tabela.insertRow(tabela.rows.length);
    var celulaNome = novaLinha.insertCell(0);
    var celulaValor = novaLinha.insertCell(1);
    var celulaQuantidade = novaLinha.insertCell(2);

    //Colocar valor nas células
    celulaNome.innerHTML = nome;
    celulaValor.innerHTML = valor;
    celulaQuantidade.innerHTML = quantidade;

    document.getElementById("nome").value = "" ;
    document.getElementById("valor").value = "" ;
    document.getElementById("quantidade").value = "" ;
}

function exportarParaExcel(){
    var tabela = document.getElementById("tabela");
    var nomeArquivo = "tabela_produtos.xlsx";
    var wb = XLSX.utils.table_to_book(tabela, {sheet: "Tabela de produtos"});
    XLSX.writeFile(wb, nomeArquivo);
    
}