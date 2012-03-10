
create database inventario;

drop table tbfornecedores;
drop table tbmateriaprima;
drop table tbtipomateria;

create table tbfornecedores(
	pk_idtbfornecedores bigint identity not null,
	razaosocial varchar(500),
	cnpj varchar(30),
	ie varchar(30),
	[e-mail] varchar(30), 
	[site] varchar(30),
	fone varchar(9),
	fax varchar(9),
	contatocomercial varchar(20)
)

create table tbmateriaprima(
	pk_idtbmateriaprima bigint identity not null,
	fk_idtbtipomateria bigint,
	fk_idtbfornecedores bigint,
	nomemateria varchar(200),
	valor bigint,
	unidade varchar(5),
	descricaomat varchar(300)
)

create table tbtipomateria(
	pk_idtbmateriaprima bigint identity not null,
	descricaomat varchar(300)
)

create table tbestoquemat(
	pk_idtbestoquemat bigint identity not null,
	fk_idtbmateriaprima bigint,
	quantidade float,
	pontoreposicao float
)

insert into tbestoquemat(fk_idtbmateriaprima, quantidade, pontoreposicao) values (1, 20, 30)
insert into tbestoquemat(fk_idtbmateriaprima, quantidade, pontoreposicao) values (1, 50, 40)
insert into tbestoquemat(fk_idtbmateriaprima, quantidade, pontoreposicao) values (1, 75, 35)

select * from tbestoquemat
select  quantidade * pontoreposicao from tbestoquemat
select  (quantidade * pontoreposicao) as novo_nome_coluna from tbestoquemat
select  quantidade + pontoreposicao as novo_nome_coluna from tbestoquemat
select  (15 / 3) + 9